// -----------------------------------------------------------------------------
// SrcClassImplementation.cpp                         SrcClassImplementation.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcClassImplementation class.
 * @author     Col. Walter E. Kurtz
 * @version    2019-08-12
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcClassImplementation.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// ----------------------
// SrcClassImplementation
// ----------------------
/*
 *
 */
SrcClassImplementation::SrcClassImplementation()
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
void SrcClassImplementation::setClassName(const string& name)
{
  m_clsname = name;
}

// -------------
// setHeaderFile
// -------------
/*
 *
 */
void SrcClassImplementation::setHeaderFile(const string& name)
{
  m_hdrname = name;
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
string SrcClassImplementation::getClassName() const
{
  return m_clsname;
}

// -------------
// getHeaderFile
// -------------
/*
 *
 */
string SrcClassImplementation::getHeaderFile() const
{
  return m_hdrname;
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
void SrcClassImplementation::printLines(ofstream& target) const
{
  printHeader(target);

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
  target << "#include \"" << getHeaderFile() << "\"" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Used namespaces", 0);
  target << "// using namespace std;" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Construction", 0);
  target << endl;
  printTightFrame(target, getClassName(), 0);
  target << "/*" << endl;
  target << " *" << endl;
  target << " */" << endl;
  target << getClassName() << "::" << getClassName() << "()" << endl;
  target << "{" << endl;
  target << "  // initialization" << endl;
  target << "}" << endl;
  target << endl;
  target << endl;
  printLongFrame(target, "Initialization", 0);
  target << endl;
  target << endl;
  printLongFrame(target, "Handling", 0);
  target << endl;
  target << endl;
  printLongFrame(target, "Setter methods", 0);
  target << endl;
  target << endl;
  printLongFrame(target, "Getter methods", 0);
  target << endl;
  target << endl;
  printLongFrame(target, "Internal methods", 0);
  target << endl;
  target << endl;
  printLongFrame(target, "Friends", 0);
  target << endl;
}

