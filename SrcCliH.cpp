// -----------------------------------------------------------------------------
// SrcCliH.cpp                                                       SrcCliH.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcCliH class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-07-07
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcCliH.h"


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
void SrcCliH::printLines(ofstream& target) const
{
  const string fileID = createFileID( getFilename() );

  printHeader(target);

  target << endl;
  printLongFrame(target, "One-Definition-Rule", 0);
  target << "#ifndef " << fileID << endl;
  target << "#define " << fileID << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Includes", 0);
  target << "#include <vector>" << endl;
  target << "#include <string>" << endl;
  target << endl;
  target << endl;
  target << "// ---" << endl;
  target << "// cli" << endl;
  target << "// ---" << endl;
  target << "/**" << endl;
  target << " * @brief  This class defines the command-line interface." << endl;
  target << " */" << endl;
  target << "class cli" << endl;
  target << "{" << endl;
  target << endl;
  target << "public:" << endl;
  target << endl;
  printLongFrame(target, "Settings", 2);
  target << endl;
  target << "  // operations that are mutually exclusive" << endl;
  target << "  enum" << endl;
  target << "  {" << endl;
  target << "    DEFAULT,      ///< execute default operation" << endl;
  target << "    SHOW_HELP,    ///< show help and exit" << endl;
  target << "    SHOW_VERSION  ///< show version and exit" << endl;
  target << "  }" << endl;
  target << "  operation;" << endl;
  target << endl;
  target << "  /// the list of positional parameters" << endl;
  target << "  std::vector< std::string > pparams;" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Construction", 2);
  target << endl;
  target << "  // ---" << endl;
  target << "  // cli" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  The standard-constructor." << endl;
  target << "   */" << endl;
  target << "  cli();" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Handling", 2);
  target << endl;
  target << "  // -----" << endl;
  target << "  // parse" << endl;
  target << "  // -----" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This method uses getopt() to parse the given arguments." << endl;
  target << "   */" << endl;
  target << "  bool parse(int argc, char** argv);" << endl;
  target << endl;
  target << "  // --------" << endl;
  target << "  // getXName" << endl;
  target << "  // --------" << endl;
  target << "  /**" << endl;
  target << "   * @brief  returns argv[0]" << endl;
  target << "   *" << endl;
  target << "   * @param brief  set true to remove all directories" << endl;
  target << "   */" << endl;
  target << "  std::string getXName(bool brief = true) const;" << endl;
  target << endl;
  target << endl;
  target << "protected:" << endl;
  target << endl;
  printLongFrame(target, "Internal methods", 2);
  target << endl;
  target << "  // -----" << endl;
  target << "  // reset" << endl;
  target << "  // -----" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This method restores the initial state." << endl;
  target << "   */" << endl;
  target << "  void reset();" << endl;
  target << endl;
  target << "  // ---------" << endl;
  target << "  // int2alnum" << endl;
  target << "  // ---------" << endl;
  target << "  /**" << endl;
  target << "   *" << endl;
  target << "   */" << endl;
  target << "  std::string int2alnum(int ascii) const;" << endl;
  target << endl;
  target << endl;
  target << "private:" << endl;
  target << endl;
  printLongFrame(target, "Attributes", 2);
  target << endl;
  target << "  /// the executable's name" << endl;
  target << "  std::string m_argv0;" << endl;
  target << endl;
  target << "};" << endl;
  target << endl;
  target << "#endif  /* #ifndef " << fileID << " */" << endl;
}

