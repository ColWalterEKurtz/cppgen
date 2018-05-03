// -----------------------------------------------------------------------------
// SrcMessageCpp.cpp                                           SrcMessageCpp.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcMessageCpp class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcMessageCpp.h"


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
void SrcMessageCpp::printLines(ofstream& target) const
{
  printHeader(target);

  target << endl;
  printLongFrame(target, "Includes", 0);
  target << "#include <sstream>" << endl;
  target << "#include <iostream>" << endl;
  target << "#include \"message.h\"" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Used namespaces", 0);
  target << "using namespace std;" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Definitions", 0);
  target << "namespace msg" << endl;
  target << "{" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // nfo" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   * format: bold; light blue" << endl;
  target << "   */" << endl;
  target << "  void nfo(const string& message)" << endl;
  target << "  {" << endl;
  target << "    // show info" << endl;
  target << "    cerr << \"\\033[1;94m\" << \"[INFO]\" << \"\\033[0m\" << \" \" << message << endl;" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // wrn" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   * format: bold; light yellow" << endl;
  target << "   */" << endl;
  target << "  void wrn(const string& message)" << endl;
  target << "  {" << endl;
  target << "    // show warning" << endl;
  target << "    cerr << \"\\033[1;93m\" << \"[WARNING]\" << \"\\033[0m\" << \" \" << message << endl;" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // err" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   * format: bold; light red" << endl;
  target << "   */" << endl;
  target << "  void err(const string& message)" << endl;
  target << "  {" << endl;
  target << "    // show error" << endl;
  target << "    cerr << \"\\033[1;91m\" << \"[ERROR]\" << \"\\033[0m\" << \" \" << message << endl;" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // cat" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   * s1 + s2" << endl;
  target << "   */" << endl;
  target << "  string cat(const string& s1, const string& s2)" << endl;
  target << "  {" << endl;
  target << "    stringstream concat;" << endl;
  target << "    concat << s1;" << endl;
  target << "    concat << s2;" << endl;
  target << endl;
  target << "    return concat.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // catq" << endl;
  target << "  // ----" << endl;
  target << "  /*" << endl;
  target << "   * s1 + \"s2\"" << endl;
  target << "   */" << endl;
  target << "  string catq(const string& s1, const string& s2)" << endl;
  target << "  {" << endl;
  target << "    stringstream concat;" << endl;
  target << "    concat << s1;" << endl;
  target << "    concat << \"\\\"\";" << endl;
  target << "    concat << s2;" << endl;
  target << "    concat << \"\\\"\";" << endl;
  target << endl;
  target << "    return concat.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // qcat" << endl;
  target << "  // ----" << endl;
  target << "  /*" << endl;
  target << "   * \"s1\" + s2" << endl;
  target << "   */" << endl;
  target << "  string qcat(const string& s1, const string& s2)" << endl;
  target << "  {" << endl;
  target << "    stringstream concat;" << endl;
  target << "    concat << \"\\\"\";" << endl;
  target << "    concat << s1;" << endl;
  target << "    concat << \"\\\"\";" << endl;
  target << "    concat << s2;" << endl;
  target << endl;
  target << "    return concat.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // ins" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   * s1a + s2 + s1b" << endl;
  target << "   */" << endl;
  target << "  string ins(const string& s1, const string& s2)" << endl;
  target << "  {" << endl;
  target << "    stringstream merge;" << endl;
  target << endl;
  target << "    // check all characters in s1" << endl;
  target << "    for(string::size_type i = 0; i < s1.size(); i++)" << endl;
  target << "    {" << endl;
  target << "      // tilde found" << endl;
  target << "      if (s1[i] == '~')" << endl;
  target << "      {" << endl;
  target << "        merge << s2;" << endl;
  target << "      }" << endl;
  target << endl;
  target << "      // 'normal' character found" << endl;
  target << "      else" << endl;
  target << "      {" << endl;
  target << "        merge << s1[i];" << endl;
  target << "      }" << endl;
  target << "    }" << endl;
  target << endl;
  target << "    return merge.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ----" << endl;
  target << "  // insq" << endl;
  target << "  // ----" << endl;
  target << "  /*" << endl;
  target << "   * s1a + \"s2\" + s1b" << endl;
  target << "   */" << endl;
  target << "  string insq(const string& s1, const string& s2)" << endl;
  target << "  {" << endl;
  target << "    stringstream merge;" << endl;
  target << endl;
  target << "    // check all characters in s1" << endl;
  target << "    for(string::size_type i = 0; i < s1.size(); i++)" << endl;
  target << "    {" << endl;
  target << "      // tilde found" << endl;
  target << "      if (s1[i] == '~')" << endl;
  target << "      {" << endl;
  target << "        merge << \"\\\"\";" << endl;
  target << "        merge << s2;" << endl;
  target << "        merge << \"\\\"\";" << endl;
  target << "      }" << endl;
  target << endl;
  target << "      // 'normal' character found" << endl;
  target << "      else" << endl;
  target << "      {" << endl;
  target << "        merge << s1[i];" << endl;
  target << "      }" << endl;
  target << "    }" << endl;
  target << endl;
  target << "    return merge.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   *" << endl;
  target << "   */" << endl;
  target << "  string str(int num)" << endl;
  target << "  {" << endl;
  target << "    stringstream convert;" << endl;
  target << "    convert << num;" << endl;
  target << endl;
  target << "    return convert.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   *" << endl;
  target << "   */" << endl;
  target << "  string str(unsigned int num)" << endl;
  target << "  {" << endl;
  target << "    stringstream convert;" << endl;
  target << "    convert << num;" << endl;
  target << endl;
  target << "    return convert.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "  // ---" << endl;
  target << "  // str" << endl;
  target << "  // ---" << endl;
  target << "  /*" << endl;
  target << "   *" << endl;
  target << "   */" << endl;
  target << "  string str(double num)" << endl;
  target << "  {" << endl;
  target << "    stringstream convert;" << endl;
  target << "    convert << num;" << endl;
  target << endl;
  target << "    return convert.str();" << endl;
  target << "  }" << endl;
  target << endl;
  target << "}" << endl;
}

