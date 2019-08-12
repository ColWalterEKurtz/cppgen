// -----------------------------------------------------------------------------
// SrcClassHeader.cpp                                         SrcClassHeader.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcClassHeader class.
 * @author     Col. Walter E. Kurtz
 * @version    2019-08-12
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcClassHeader.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// --------------
// SrcClassHeader
// --------------
/*
 *
 */
SrcClassHeader::SrcClassHeader()
{
  // nothing
}


// -----------------------------------------------------------------------------
// Setter methods                                                 Setter methods
// -----------------------------------------------------------------------------

// ------------
// setClassName
// ------------
/*
 *
 */
void SrcClassHeader::setClassName(const string& name)
{
  m_clsname = name;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// ------------
// getClassName
// ------------
/*
 *
 */
string SrcClassHeader::getClassName() const
{
  return m_clsname;
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
void SrcClassHeader::printLines(ofstream& target) const
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
  target << "// #include <memory>" << endl;
  target << "// #include <random>" << endl;
  target << "// #include <algorithm>" << endl;
  target << "// #include <string>" << endl;
  target << "// #include <sstream>" << endl;
  target << "// #include <fstream>" << endl;
  target << "// #include <iostream>" << endl;
  target << "// #include <iomanip>" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Used namespaces", 0);
  target << "// using namespace std;" << endl;
  target << endl;
  target << endl;
  printTightFrame(target, getClassName(), 0);
  target << "/**" << endl;
  target << " * @brief  The best class in the world." << endl;
  target << " */" << endl;
  target << "class " << getClassName() << endl;
  target << "{" << endl;
  target << endl;
  target << "public:" << endl;
  target << endl;
  printLongFrame(target, "Construction", 2);
  target << endl;
  printTightFrame(target, getClassName(), 2);
  target << "  /**" << endl;
  target << "   * @brief  The standard-constructor." << endl;
  target << "   */" << endl;
  target << "  " << getClassName() << "();" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Initialization", 2);
  target << endl;
  target << endl;
  printLongFrame(target, "Handling", 2);
  target << endl;
  target << endl;
  printLongFrame(target, "Setter methods", 2);
  target << endl;
  target << endl;
  printLongFrame(target, "Getter methods", 2);
  target << endl;
  target << endl;
  target << "protected:" << endl;
  target << endl;
  printLongFrame(target, "Internal methods", 2);
  target << endl;
  target << endl;
  target << "private:" << endl;
  target << endl;
  printLongFrame(target, "Friends", 2);
  target << endl;
  target << endl;
  printLongFrame(target, "Attributes", 2);
  target << endl;
  target << endl;
  target << "};" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Inline methods", 0);
  target << endl;
  target << endl;
  target << "#endif  /* #ifndef " << fileID << " */" << endl;
}

