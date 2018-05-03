// -----------------------------------------------------------------------------
// SrcMessageH.cpp                                               SrcMessageH.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcMessageH class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcMessageH.h"


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
void SrcMessageH::printLines(ofstream& target) const
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
  target << "#include <string>" << endl;
  target << endl;
  target << endl;
  target << "// ---" << endl;
  target << "// msg" << endl;
  target << "// ---" << endl;
  target << "/**" << endl;
  target << " * @brief  The @a msg namespace provides some functions that" << endl;
  target << " *         print (tagged) messages via stderr." << endl;
  target << " *" << endl;
  target << " * The functions found here can be grouped as follows:" << endl;
  target << " * * Printing" << endl;
  target << " *   - msg::nfo()" << endl;
  target << " *   - msg::wrn()" << endl;
  target << " *   - msg::err()" << endl;
  target << " * * Concatenation" << endl;
  target << " *   - msg::cat()" << endl;
  target << " *   - msg::catq()" << endl;
  target << " *   - msg::qcat()" << endl;
  target << " *   - msg::ins()" << endl;
  target << " *   - msg::insq()" << endl;
  target << " * * Type conversion" << endl;
  target << " *   - msg::str( int )" << endl;
  target << " *   - msg::str( unsigned int )" << endl;
  target << " *   - msg::str( double )" << endl;
  target << " */" << endl;
  target << "namespace msg" << endl;
  target << "{" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // nfo" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function prints a tagged @a info message via stderr." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::nfo(\"Hello, world!\");  // [INFO] Hello, world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param message  holds the line to print." << endl;
  target << "   *" << endl;
  target << "   * @see  msg::wrn()" << endl;
  target << "   * @see  msg::err()" << endl;
  target << "   */" << endl;
  target << "  void nfo(const std::string& message);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // wrn" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function prints a tagged @a warning message via stderr." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::wrn(\"Hello, world!\");  // [WARNING] Hello, world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param message  holds the line to print." << endl;
  target << "   *" << endl;
  target << "   * @see  msg::nfo()" << endl;
  target << "   * @see  msg::err()" << endl;
  target << "   */" << endl;
  target << "  void wrn(const std::string& message);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // err" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function prints a tagged @a error message via stderr." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::err(\"Hello, world!\");  // [ERROR] Hello, world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param message  holds the line to print." << endl;
  target << "   *" << endl;
  target << "   * @see  msg::nfo()" << endl;
  target << "   * @see  msg::wrn()" << endl;
  target << "   */" << endl;
  target << "  void err(const std::string& message);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // cat" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function concatenates the two passed arguments." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::cat(\"Hello, \", \"world!\");  // Hello, world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param s1  holds the first part of the resulting string." << endl;
  target << "   * @param s2  holds the second part of the resulting string." << endl;
  target << "   *" << endl;
  target << "   * @return  s1 + s2" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::catq()" << endl;
  target << "   * @see  msg::qcat()" << endl;
  target << "   */" << endl;
  target << "  std::string cat(const std::string& s1, const std::string& s2);" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // catq" << endl;
  target << "  // ----" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function concatenates the two passed arguments" << endl;
  target << "   *         and puts the second argument in quotation marks." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::catq(\"Hello, \", \"world!\");  // Hello, \"world!\"" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param s1  holds the first part of the resulting string." << endl;
  target << "   * @param s2  holds the second part of the resulting string." << endl;
  target << "   *" << endl;
  target << "   * @return  s1 + \"s2\"" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::cat()" << endl;
  target << "   * @see  msg::qcat()" << endl;
  target << "   */" << endl;
  target << "  std::string catq(const std::string& s1, const std::string& s2);" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // qcat" << endl;
  target << "  // ----" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function concatenates the two passed arguments" << endl;
  target << "   *         and puts the first argument in quotation marks." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::qcat(\"Hello\", \", world!\");  // \"Hello\", world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param s1  holds the first part of the resulting string." << endl;
  target << "   * @param s2  holds the second part of the resulting string." << endl;
  target << "   *" << endl;
  target << "   * @return  \"s1\" + s2" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::cat()" << endl;
  target << "   * @see  msg::catq()" << endl;
  target << "   */" << endl;
  target << "  std::string qcat(const std::string& s1, const std::string& s2);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // ins" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function replaces each ~ (tilde) character in the" << endl;
  target << "   *         first argument with the second one." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::ins(\"Hello, ~!\", \"world\");  // Hello, world!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param s1  defines the 'template' string." << endl;
  target << "   * @param s2  holds the string to insert." << endl;
  target << "   *" << endl;
  target << "   * @return  s1a + s2 + s1b" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::insq()" << endl;
  target << "   */" << endl;
  target << "  std::string ins(const std::string& s1, const std::string& s2);" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // insq" << endl;
  target << "  // ----" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function replaces each ~ (tilde) character in the" << endl;
  target << "   *         first argument with the second one quoted." << endl;
  target << "   *" << endl;
  target << "   * @par Example" << endl;
  target << "   *      @code{.cpp}" << endl;
  target << "   *        msg::insq(\"Hello, ~!\", \"world\");  // Hello, \"world\"!" << endl;
  target << "   *      @endcode" << endl;
  target << "   *" << endl;
  target << "   * @param s1  defines the 'template' string." << endl;
  target << "   * @param s2  holds the string to insert." << endl;
  target << "   *" << endl;
  target << "   * @return  s1a + \"s2\" + s1b" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::ins()" << endl;
  target << "   */" << endl;
  target << "  std::string insq(const std::string& s1, const std::string& s2);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function converts its argument to string." << endl;
  target << "   *" << endl;
  target << "   * @param num  is the number to convert." << endl;
  target << "   *" << endl;
  target << "   * @return  a string of decimal digits representing the passed number" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::str( unsigned int )" << endl;
  target << "   * @see  msg::str( double )" << endl;
  target << "   */" << endl;
  target << "  std::string str(int num);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function converts its argument to string." << endl;
  target << "   *" << endl;
  target << "   * @param num  is the number to convert." << endl;
  target << "   *" << endl;
  target << "   * @return  a string of decimal digits representing the passed number" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::str( int )" << endl;
  target << "   * @see  msg::str( double )" << endl;
  target << "   */" << endl;
  target << "  std::string str(unsigned int num);" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /**" << endl;
  target << "   * @brief  This function converts its argument to string." << endl;
  target << "   *" << endl;
  target << "   * @param num  is the number to convert." << endl;
  target << "   *" << endl;
  target << "   * @return  a string of decimal digits representing the passed number" << endl;
  target << "   *" << endl;
  target << "   * @see  msg::str( int )" << endl;
  target << "   * @see  msg::str( unsigned int )" << endl;
  target << "   */" << endl;
  target << "  std::string str(double num);" << endl;
  target << endl;
  target << "}" << endl;
  target << endl;
  target << "#endif  /* #ifndef " << fileID << " */" << endl;
}

