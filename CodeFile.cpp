// -----------------------------------------------------------------------------
// CodeFile.cpp                                                     CodeFile.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the CodeFile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "message.h"
#include "CodeFile.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// --------
// CodeFile
// --------
/*
 *
 */
CodeFile::CodeFile()
{
  // nothing
}

// ---------
// ~CodeFile
// ---------
/*
 *
 */  
CodeFile::~CodeFile()
{
  // nothing
}


// -----------------------------------------------------------------------------
// Handling                                                             Handling
// -----------------------------------------------------------------------------

// ----------
// isReadable
// ----------
/*
 *
 */
bool CodeFile::isReadable() const
{
  // try to open file for reading
  ifstream ifs(m_filename.c_str());

  // file successfully opened
  if (ifs.is_open())
  {
    // close file
    ifs.close();

    // file exists
    return true;
  }

  // new file
  return false;
}

// ------
// create
// ------
/*
 *
 */
bool CodeFile::create() const
{
  // try to open file for writing
  ofstream ofs(m_filename.c_str());

  // check operation
  if ( !ofs.is_open() )
  {
    // notify user
    msg::err( msg::catq("unable to open file: ", m_filename) );

    // signalize trouble
    return false;
  }

  // write content
  printLines(ofs);

  // check operation
  if ( !ofs.good() )
  {
    // notify user
    msg::err( msg::catq("unable to write data: ", m_filename) );

    // close file
    ofs.close();

    // signalize trouble
    return false;
  }

  // close file
  ofs.close();

  // signalize success
  return true;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// -----------
// getFilename
// -----------
/*
 *
 */
string CodeFile::getFilename() const
{
  return m_filename;
}

// ----------
// getLicense
// ----------
/*
 *
 */
string CodeFile::getLicense() const
{
  return m_license;
}


// -----------------------------------------------------------------------------
// Setter methods                                                 Setter methods
// -----------------------------------------------------------------------------

// -----------
// setFilename
// -----------
/*
 *
 */
void CodeFile::setFilename(const string& filename)
{
  m_filename = filename;
}

// ----------
// setLicense
// ----------
/*
 *
 */
void CodeFile::setLicense(const string& license)
{
  m_license = license;
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
void CodeFile::printLines(ofstream& target) const
{
  // nothing
}

