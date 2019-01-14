// -----------------------------------------------------------------------------
// main.cpp                                                             main.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the main() function and doxygen's main page.
 * @author     Col. Walter E. Kurtz
 * @version    2019-01-14
 * @copyright  GNU General Public License - Version 3.0
 *
 * @mainpage
 *
 * @section issue What is the issue here?
 *   cppgen generates C++ code.
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include <ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include "message.h"
#include "SrcGitignore.h"
#include "SrcMakefile.h"
#include "SrcDoxyfile.h"
#include "SrcMainCpp.h"
#include "SrcMessageH.h"
#include "SrcMessageCpp.h"
#include "SrcCliH.h"
#include "SrcCliCpp.h"
#include "SrcClassHeader.h"
#include "SrcClassImplementation.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// --------------
// getCurrentDate
// --------------
/**
 *
 */
string getCurrentDate()
{
  // get current time
  time_t now = time(0);

  // convert 'current time' to local time
  struct tm* timeStruct = localtime(&now);

  // create scheme: YYYY-MM-DD
  stringstream date;
  date << setfill('0');
  date << (timeStruct->tm_year + 1900);
  date << "-";
  date << setw(2) << (timeStruct->tm_mon + 1);
  date << "-";
  date << setw(2) << (timeStruct->tm_mday);

  // buid string from stream
  return date.str();
}

// ------
// create
// ------
/**
 * This function creates all passed CodeFiles.
 */
bool create(CodeFile** generators, int size)
{
  // check existence
  for(int i = 0; i < size; i++)
  {
    if (generators[i]->isReadable())
    {
      // notify user
      msg::err( msg::catq("file already exists: ", generators[i]->getFilename()) );

      // signalize trouble
      return false;
    }
  }

  // create files
  for(int i = 0; i < size; i++)
  {
    if (generators[i]->create())
    {
      // notify user
      msg::nfo( msg::catq("file created: ", generators[i]->getFilename()) );
    }

    else
    {
      // signalize trouble
      return false;
    }
  }

  // signalize success
  return true;
}

// ------------------
// create_cpp_project
// ------------------
/**
 *
 */
bool create_cpp_project(const string& binary)
{
  // set copyright
  const string license = "GNU General Public License - Version 3.0";

  // set author
  const string author = "Col. Walter E. Kurtz";

  // use current date as version
  const string version = getCurrentDate();

  // main.cpp
  SrcMainCpp gen_main_cpp;
  gen_main_cpp.setFilename("main.cpp");
  gen_main_cpp.setLicense(license);
  gen_main_cpp.setBrief("This file holds the program's showHelp(), showVersion()\n *             and main() function and doxygen's main page.");
  gen_main_cpp.setAuthor(author);
  gen_main_cpp.setVersion(version);
  gen_main_cpp.setBinary(binary);

  // message.h
  SrcMessageH gen_message_h;
  gen_message_h.setFilename("message.h");
  gen_message_h.setLicense(license);
  gen_message_h.setBrief("This file declares 'public' members of the @ref msg namespace.");
  gen_message_h.setAuthor(author);
  gen_message_h.setVersion(version);

  // message.cpp
  SrcMessageCpp gen_message_cpp;
  gen_message_cpp.setFilename("message.cpp");
  gen_message_cpp.setLicense(license);
  gen_message_cpp.setBrief("This file defines all members of the @ref msg namespace.");
  gen_message_cpp.setAuthor(author);
  gen_message_cpp.setVersion(version);

  // cli.h
  SrcCliH gen_cli_h;
  gen_cli_h.setFilename("cli.h");
  gen_cli_h.setLicense(license);
  gen_cli_h.setBrief("This file holds the definition of the @ref cli class.");
  gen_cli_h.setAuthor(author);
  gen_cli_h.setVersion(version);

  // cli.cpp
  SrcCliCpp gen_cli_cpp;
  gen_cli_cpp.setFilename("cli.cpp");
  gen_cli_cpp.setLicense(license);
  gen_cli_cpp.setBrief("This file holds the implementation of the @ref cli class.");
  gen_cli_cpp.setAuthor(author);
  gen_cli_cpp.setVersion(version);

  // makefile
  SrcMakefile gen_makefile;
  gen_makefile.setFilename("makefile");
  gen_makefile.setLicense(license);
  gen_makefile.setBinary(binary);

  // .gitignore
  SrcGitignore gen_gitignore;
  gen_gitignore.setFilename(".gitignore");
  gen_gitignore.setLicense(license);
  gen_gitignore.setBinary(binary);

  // .doxyfile
  SrcDoxyfile gen_doxyfile;
  gen_doxyfile.setFilename(binary + ".doxyfile");
  gen_doxyfile.setBinary(binary);
  gen_doxyfile.setVersion(version);

  // list up addresses for passing as one single parameter
  CodeFile* generators[] =
  {
    &gen_main_cpp,
    &gen_message_h,
    &gen_message_cpp,
    &gen_cli_h,
    &gen_cli_cpp,
    &gen_makefile,
    &gen_gitignore,
    &gen_doxyfile
  };

  // create files
  return create(generators, 8);
}

// ----------------
// create_cpp_class
// ----------------
/**
 *
 */
bool create_cpp_class(const string& name)
{
  // set copyright
  const string license = "GNU General Public License - Version 3.0";

  // set author
  const string author = "Col. Walter E. Kurtz";

  // use current date as version
  const string version = getCurrentDate();

  // header file
  SrcClassHeader gen_hfile;
  gen_hfile.setFilename(name + ".h");
  gen_hfile.setLicense(license);
  gen_hfile.setBrief("This file holds the definition of the @ref ", name, " class.");
  gen_hfile.setAuthor(author);
  gen_hfile.setVersion(version);
  gen_hfile.setClassName(name);

  // implementation file
  SrcClassImplementation gen_cfile;
  gen_cfile.setFilename(name + ".cpp");
  gen_cfile.setLicense(license);
  gen_cfile.setBrief("This file holds the implementation of the @ref ", name, " class.");
  gen_cfile.setAuthor(author);
  gen_cfile.setVersion(version);
  gen_cfile.setClassName(name);
  gen_cfile.setHeaderFile(name + ".h");

  // list up addresses for passing as one single parameter
  CodeFile* generators[] =
  {
    &gen_hfile,
    &gen_cfile
  };

  // create files
  return create(generators, 2);
}

// ----
// main
// ----
/**
 * @brief  The program starts in this function.
 *
 * @param  argc holds the number of passed command-line arguments
 * @param  argv holds the list of passed command-line arguments
 *
 * @return
 * Value | Meaning
 * ----: | :------
 *     0 | the requested operation finished successfully
 *     1 | the requested operation failed
 */
int main(int argc, char** argv)
{
  // check number of arguments
  if (argc < 2)
  {
    // show expected syntax
    cout << "cppgen -p <name>   generate project" << endl;
    cout << "cppgen -c <name>   generate class" << endl;

    // signalize trouble
    return 1;
  }

  // check all user-passed arguments
  for(int i = 1; i < argc; i++)
  {
    // convert current argument to string
    string opt(argv[i]);

    // new cpp project
    if (opt == "-p")
    {
      // get next argument
      if ((i + 1) < argc)
      {
        // convert next argument to string
        string binary(argv[++i]);

        // call specified function
        if ( !create_cpp_project(binary) )
        {
          // signalize trouble
          return 1;
        }
      }

      // missing argument
      else
      {
        // notify user
        msg::err("missing <name> argument: -p <name>");

        // signalize trouble
        return 1;
      }
    }

    // new cpp class
    else if (opt == "-c")
    {
      // get next argument
      if ((i + 1) < argc)
      {
        // convert next argument to string
        string name(argv[++i]);

        // call specified function
        if ( !create_cpp_class(name) )
        {
          // signalize trouble
          return 1;
        }
      }

      // missing argument
      else
      {
        // notify user
        msg::err("missing <name> argument: -c <name>");

        // signalize trouble
        return 1;
      }
    }

    // unknown option
    else
    {
      // notify user
      msg::err( msg::catq("unknown option: ", opt) );

      // signalize trouble
      return 1;
    }
  }

  // signalize success
  return 0;
}

