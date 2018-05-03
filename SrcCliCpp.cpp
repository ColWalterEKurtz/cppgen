// -----------------------------------------------------------------------------
// SrcCliCpp.cpp                                                   SrcCliCpp.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcCliCpp class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcCliCpp.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Internal methods                                             Internal methods
// -----------------------------------------------------------------------------

// ----------
// printLines
// ----------
/*
 *
 */
void SrcCliCpp::printLines(ofstream& target) const
{
  printHeader(target);

  target << endl;
  printLongFrame(target, "Includes", 0);
  target << "#include <unistd.h>  /* getopt() */" << endl;
  target << "#include <sstream>   /* optarg to string */" << endl;
  target << "#include \"message.h\"" << endl;
  target << "#include \"cli.h\"" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Used namespaces", 0);
  target << "using namespace std;" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Construction", 0);
  target << endl;
  target << "// ---" << endl;
  target << "// cli" << endl;
  target << "// ---" << endl;
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << "cli::cli()" << endl;
  target << "{" << endl;
  target << "  // set inital state" << endl;
  target << "  reset();" << endl;
  target << "}" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Handling", 0);
  target << endl;
  target << "// -----" << endl;
  target << "// parse" << endl;
  target << "// -----" << endl;
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << "bool cli::parse(int argc, char** argv)" << endl;
  target << "{" << endl;
  target << "  // back to inital state" << endl;
  target << "  reset();" << endl;
  target << endl;
  target << "  // this pointer must not be NULL" << endl;
  target << "  if (argv == 0) return false;" << endl;
  target << endl;
  target << "  // this pointer must not be NULL" << endl;
  target << "  if (argv[0] == 0) return false;" << endl;
  target << endl;
  target << "  // if the option takes an argument, optarg points to the option-argument" << endl;
  target << "  extern char* optarg;" << endl;
  target << endl;
  target << "  // the index of the next element of the argv[] vector to be processed" << endl;
  target << "  extern int optind;" << endl;
  target << endl;
  target << "  // optopt points to the option character that caused the error" << endl;
  target << "  extern int optopt;" << endl;
  target << endl;
  target << "  // don't print error messages" << endl;
  target << "  opterr = 0;" << endl;
  target << endl;
  target << "  // set executable's name" << endl;
  target << "  m_argv0 = argv[0];" << endl;
  target << endl;
  target << "  // set valid option characters" << endl;
  target << "  /*" << endl;
  target << "   * h  show help" << endl;
  target << "   * v  show version" << endl;
  target << "   */" << endl;
  target << "  const char* optstring = \":hv\";" << endl;
  target << endl;
  target << "  // the ASCII code of the current option character" << endl;
  target << "  int optchar;" << endl;
  target << endl;
  target << "  // parse all given options" << endl;
  target << "  while ((optchar = getopt(argc, argv, optstring)) != -1)" << endl;
  target << "  {" << endl;
  target << "    // use this object to convert arguments" << endl;
  target << "    stringstream argstream((optarg == 0) ? \"\" : optarg);" << endl;
  target << endl;
  target << "    // analyze (short) options" << endl;
  target << "    switch (optchar)" << endl;
  target << "    {" << endl;
  target << "      case 'h':" << endl;
  target << endl;
  target << "        // set operation" << endl;
  target << "        operation = SHOW_HELP;" << endl;
  target << endl;
  target << "        // stop immediately" << endl;
  target << "        return true;" << endl;
  target << endl;
  target << "      case 'v':" << endl;
  target << endl;
  target << "        // set operation" << endl;
  target << "        operation = SHOW_VERSION;" << endl;
  target << endl;
  target << "        // stop immediately" << endl;
  target << "        return true;" << endl;
  target << endl;
  target << "      case ':':" << endl;
  target << endl;
  target << "        // notify user" << endl;
  target << "        msg::err( msg::cat(\"missing argument: -\", int2alnum(optopt)) );" << endl;
  target << endl;
  target << "        // signalize trouble" << endl;
  target << "        return false;" << endl;
  target << endl;
  target << "      case '?':" << endl;
  target << endl;
  target << "        // notify user" << endl;
  target << "        msg::err( msg::cat(\"unknown option: -\", int2alnum(optopt)) );" << endl;
  target << endl;
  target << "        // signalize trouble" << endl;
  target << "        return false;" << endl;
  target << "    }" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // set all remaining positional parameters" << endl;
  target << "  for(int i = optind; i < argc; i++)" << endl;
  target << "  {" << endl;
  target << "    pparams.push_back( argv[i] );" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // signalize success" << endl;
  target << "  return true;" << endl;
  target << "}" << endl;
  target << endl;
  target << "// --------" << endl;
  target << "// getXName" << endl;
  target << "// --------" << endl;
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << "string cli::getXName(bool brief) const" << endl;
  target << "{" << endl;
  target << "  // drop directories" << endl;
  target << "  if (brief)" << endl;
  target << "  {" << endl;
  target << "    // filename without leading directories" << endl;
  target << "    string nodir;" << endl;
  target << endl;
  target << "    // remove all directories" << endl;
  target << "    for(string::size_type i = 0; i < m_argv0.size(); i++)" << endl;
  target << "    {" << endl;
  target << "      // check character" << endl;
  target << "      if (m_argv0[i] == '/')" << endl;
  target << "      {" << endl;
  target << "        // reset" << endl;
  target << "        nodir = \"\";" << endl;
  target << "      }" << endl;
  target << endl;
  target << "      else" << endl;
  target << "      {" << endl;
  target << "        // append character" << endl;
  target << "        nodir += m_argv0[i];" << endl;
  target << "      }" << endl;
  target << "    }" << endl;
  target << endl;
  target << "    // return brief name" << endl;
  target << "    return nodir;" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // return full name" << endl;
  target << "  return m_argv0;" << endl;
  target << "}" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Internal methods", 0);
  target << endl;
  target << "// -----" << endl;
  target << "// reset" << endl;
  target << "// -----" << endl;
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << "void cli::reset()" << endl;
  target << "{" << endl;
  target << "  // set default operation" << endl;
  target << "  operation = DEFAULT;" << endl;
  target << endl;
  target << "  // drop positional parameters" << endl;
  target << "  pparams.clear();" << endl;
  target << endl;
  target << "  // reset executable's name" << endl;
  target << "  m_argv0 = \"\";" << endl;
  target << "}" << endl;
  target << endl;
  target << "// ---------" << endl;
  target << "// int2alnum" << endl;
  target << "// ---------" << endl;
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << "string cli::int2alnum(int ascii) const" << endl;
  target << "{" << endl;
  target << "  switch (ascii)" << endl;
  target << "  {" << endl;
  target << "    // digits" << endl;
  target << "    case '0': return \"0\";" << endl;
  target << "    case '1': return \"1\";" << endl;
  target << "    case '2': return \"2\";" << endl;
  target << "    case '3': return \"3\";" << endl;
  target << "    case '4': return \"4\";" << endl;
  target << "    case '5': return \"5\";" << endl;
  target << "    case '6': return \"6\";" << endl;
  target << "    case '7': return \"7\";" << endl;
  target << "    case '8': return \"8\";" << endl;
  target << "    case '9': return \"9\";" << endl;
  target << endl;
  target << "    // capital letters" << endl;
  target << "    case 'A': return \"A\";" << endl;
  target << "    case 'B': return \"B\";" << endl;
  target << "    case 'C': return \"C\";" << endl;
  target << "    case 'D': return \"D\";" << endl;
  target << "    case 'E': return \"E\";" << endl;
  target << "    case 'F': return \"F\";" << endl;
  target << "    case 'G': return \"G\";" << endl;
  target << "    case 'H': return \"H\";" << endl;
  target << "    case 'I': return \"I\";" << endl;
  target << "    case 'J': return \"J\";" << endl;
  target << "    case 'K': return \"K\";" << endl;
  target << "    case 'L': return \"L\";" << endl;
  target << "    case 'M': return \"M\";" << endl;
  target << "    case 'N': return \"N\";" << endl;
  target << "    case 'O': return \"O\";" << endl;
  target << "    case 'P': return \"P\";" << endl;
  target << "    case 'Q': return \"Q\";" << endl;
  target << "    case 'R': return \"R\";" << endl;
  target << "    case 'S': return \"S\";" << endl;
  target << "    case 'T': return \"T\";" << endl;
  target << "    case 'U': return \"U\";" << endl;
  target << "    case 'V': return \"V\";" << endl;
  target << "    case 'W': return \"W\";" << endl;
  target << "    case 'X': return \"X\";" << endl;
  target << "    case 'Y': return \"Y\";" << endl;
  target << "    case 'Z': return \"Z\";" << endl;
  target << endl;
  target << "    // small letters" << endl;
  target << "    case 'a': return \"a\";" << endl;
  target << "    case 'b': return \"b\";" << endl;
  target << "    case 'c': return \"c\";" << endl;
  target << "    case 'd': return \"d\";" << endl;
  target << "    case 'e': return \"e\";" << endl;
  target << "    case 'f': return \"f\";" << endl;
  target << "    case 'g': return \"g\";" << endl;
  target << "    case 'h': return \"h\";" << endl;
  target << "    case 'i': return \"i\";" << endl;
  target << "    case 'j': return \"j\";" << endl;
  target << "    case 'k': return \"k\";" << endl;
  target << "    case 'l': return \"l\";" << endl;
  target << "    case 'm': return \"m\";" << endl;
  target << "    case 'n': return \"n\";" << endl;
  target << "    case 'o': return \"o\";" << endl;
  target << "    case 'p': return \"p\";" << endl;
  target << "    case 'q': return \"q\";" << endl;
  target << "    case 'r': return \"r\";" << endl;
  target << "    case 's': return \"s\";" << endl;
  target << "    case 't': return \"t\";" << endl;
  target << "    case 'u': return \"u\";" << endl;
  target << "    case 'v': return \"v\";" << endl;
  target << "    case 'w': return \"w\";" << endl;
  target << "    case 'x': return \"x\";" << endl;
  target << "    case 'y': return \"y\";" << endl;
  target << "    case 'z': return \"z\";" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // invalid character" << endl;
  target << "  return \"\";" << endl;
  target << "}" << endl;
}

