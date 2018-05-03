// -----------------------------------------------------------------------------
// SrcMainCpp.cpp                                                 SrcMainCpp.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcMainCpp class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcMainCpp.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// ----------
// SrcMainCpp
// ----------
/*
 *
 */
SrcMainCpp::SrcMainCpp()
{
  m_binary = "BinaryNotSet";
}


// -----------------------------------------------------------------------------
// Setter methods                                                 Setter methods
// -----------------------------------------------------------------------------

// ---------
// setBinary
// ---------
/*
 *
 */
void SrcMainCpp::setBinary(const string& name)
{
  m_binary = name;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// ---------
// getBinary
// ---------
/**
 *
 */
string SrcMainCpp::getBinary() const
{
  return m_binary;
}


// -----------------------------------------------------------------------------
// Internal methods                                             Internal methods
// -----------------------------------------------------------------------------

// ----------
// printLines
// ----------
/*
 *
 */
void SrcMainCpp::printLines(ofstream& target) const
{
  printHeader(target, true);

  target << endl;
  printLongFrame(target, "Includes", 0);
  target << "// #include <cstdlib>" << endl;
  target << "// #include <climits>" << endl;
  target << "// #include <cfloat>" << endl;
  target << "// #include <cmath>" << endl;
  target << "// #include <ctime>" << endl;
  target << "// #include <list>" << endl;
  target << "// #include <stack>" << endl;
  target << "// #include <vector>" << endl;
  target << "// #include <queue>" << endl;
  target << "// #include <deque>" << endl;
  target << "// #include <set>" << endl;
  target << "// #include <map>" << endl;
  target << "// #include <algorithm>" << endl;
  target << "// #include <string>" << endl;
  target << "// #include <sstream>" << endl;
  target << "// #include <fstream>" << endl;
  target << "// #include <iomanip>" << endl;
  target << "#include <iostream>" << endl;
  target << "#include \"message.h\"" << endl;
  target << "#include \"cli.h\"" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Used namespaces", 0);
  target << "using namespace std;" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Functions", 0);
  target << endl;
  target << "// --------" << endl;
  target << "// showHelp" << endl;
  target << "// --------" << endl;
  target << "/**" << endl;
  target << " * @brief  This function shows the program's help." << endl;
  target << " */" << endl;
  target << "void showHelp()" << endl;
  target << "{" << endl;
  target << "  cout << endl;" << endl;
  target << "  cout << \"NAME\" << endl;" << endl;
  target << "  cout << \"  " << getBinary() << " - foo bar baz\" << endl;" << endl;
  target << "  cout << endl;" << endl;
  target << "  cout << \"SYNOPSIS\" << endl;" << endl;
  target << "  cout << \"  " << getBinary() << " {-h|-v}  show help resp. version and exit\" << endl;" << endl;
  target << "  cout << endl;" << endl;
  target << "  cout << \"DESCRIPTION\" << endl;" << endl;
  target << "  cout << \"  ask not what " << getBinary() << " can do for you - ask what you can do for " << getBinary() << "\" << endl;" << endl;
  target << "  cout << endl;" << endl;
  target << "  cout << \"OPTIONS\" << endl;" << endl;
  target << "  cout << \"  -h  show help and exit\" << endl;" << endl;
  target << "  cout << \"  -v  show version and exit\" << endl;" << endl;
  target << "  cout << endl;" << endl;
  target << "  cout << \"EXAMPLES\" << endl;" << endl;
  target << "  cout << endl;" << endl;
  target << "}" << endl;
  target << endl;
  target << "// -----------" << endl;
  target << "// showVersion" << endl;
  target << "// -----------" << endl;
  target << "/**" << endl;
  target << " * @brief  This function shows the program's version." << endl;
  target << " */" << endl;
  target << "void showVersion()" << endl;
  target << "{" << endl;
  target << "  cout << \"" << getVersion() << "\" << endl;" << endl;
  target << "}" << endl;
  target << endl;
  target << "// ----" << endl;
  target << "// main" << endl;
  target << "// ----" << endl;
  target << "/**" << endl;
  target << " * @brief  The program starts in this function." << endl;
  target << " *" << endl;
  target << " * @param argc  holds the number of passed command-line arguments." << endl;
  target << " * @param argv  holds the list of passed command-line arguments." << endl;
  target << " *" << endl;
  target << " * @return" << endl;
  target << " * Value | Meaning" << endl;
  target << " * ----: | :------" << endl;
  target << " *     0 | The requested operation finished successfully." << endl;
  target << " *     1 | The requested operation failed." << endl;
  target << " */" << endl;
  target << "int main(int argc, char** argv)" << endl;
  target << "{" << endl;
  target << "  // create command-line parser" << endl;
  target << "  cli cmdl;" << endl;
  target << endl;
  target << "  // parse command-line" << endl;
  target << "  if ( cmdl.parse(argc, argv) )" << endl;
  target << "  {" << endl;
  target << "    // SHOW_HELP" << endl;
  target << "    if (cmdl.operation == cli::SHOW_HELP)" << endl;
  target << "    {" << endl;
  target << "      showHelp();" << endl;
  target << "    }" << endl;
  target << endl;
  target << "    // SHOW_VERSION" << endl;
  target << "    else if (cmdl.operation == cli::SHOW_VERSION)" << endl;
  target << "    {" << endl;
  target << "      showVersion();" << endl;
  target << "    }" << endl;
  target << endl;
  target << "    // DEFAULT" << endl;
  target << "    else if (cmdl.operation == cli::DEFAULT)" << endl;
  target << "    {" << endl;
  target << "      // say hello" << endl;
  target << "      msg::nfo(\"hello world\");" << endl;
  target << "    }" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // invalid command-line" << endl;
  target << "  else" << endl;
  target << "  {" << endl;
  target << "    // signalize trouble" << endl;
  target << "    return 1;" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // signalize success" << endl;
  target << "  return 0;" << endl;
  target << "}" << endl;
}

