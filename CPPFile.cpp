// -----------------------------------------------------------------------------
// CPPFile.cpp                                                       CPPFile.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the CPPFile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "message.h"
#include "CPPFile.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// -------
// CPPFile
// -------
/*
 *
 */
CPPFile::CPPFile()
{
  // nothing
}


// -----------------------------------------------------------------------------
// Setter methods                                                 Setter methods
// -----------------------------------------------------------------------------

// --------
// setBrief
// --------
/*
 *
 */
void CPPFile::setBrief( const string& cat1,
                        const string& cat2,
                        const string& cat3
                      )
{
  m_brief = cat1;
  m_brief.append(cat2);
  m_brief.append(cat3);
}
             
// ---------
// setAuthor
// ---------
/*
 *
 */
void CPPFile::setAuthor(const string& author)
{
  m_author = author;
}

// ----------
// setVersion
// ----------
/*
 *
 */
void CPPFile::setVersion(const string& version)
{
  m_version = version;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// --------
// getBrief
// --------
/*
 *
 */
string CPPFile::getBrief() const
{
  return m_brief;
}

// ---------
// getAuthor
// ---------
/*
 *
 */
string CPPFile::getAuthor() const
{
  return m_author;
}

// ----------
// getVersion
// ----------
/*
 *
 */
string CPPFile::getVersion() const
{
  return m_version;
}


// -----------------------------------------------------------------------------
// Internal methods                                             Internal methods
// -----------------------------------------------------------------------------

// ------------
// createFileID
// ------------
/*
 *
 */
string CPPFile::createFileID(const string& filename) const
{
  // the return value
  string fileID("");

  // create file ID
  for(string::size_type i = 0; i < filename.size(); i++)
  {
    // get current character
    const unsigned char& uc = filename[i];

    // digits
    if ( (uc >= '0') && (uc <= '9') )
    {
      fileID += uc;
    }

    // capital letters
    else if ( (uc >= 'A') && (uc <= 'Z') )
    {
      fileID += uc;
    }

    // small letters
    else if ( (uc >= 'a') && (uc <= 'z') )
    {
      fileID += (uc - 32);
    }

    // other characters
    else
    {
      fileID += '_';
    }
  }

  // add constant part
  fileID.append("_INCLUDE_NO1");

  return fileID;
}

// --------------
// printLongFrame
// --------------
/*
 *
 */
void CPPFile::printLongFrame( ofstream&      target,
                              const string&  word,
                              unsigned       indent
                            ) const
{
  // number of characters per line
  const unsigned lineLength = 80;

  // check indent + '// '
  if (indent > (lineLength - 3))
  {
    // notify user
    msg::err( msg::cat("indent is too large: ", msg::str(indent)) );

    // don't print anything
    return;
  }

  // check indent + '// ' + word
  if (word.size() > (lineLength - indent - 3))
  {
    // notify user
    msg::err("given word is too long for indented line");

    // don't print anything
    return;
  }

  // number of dashes
  unsigned ndashes = lineLength - indent - 3;

  // check word size
  if ( (2 * word.size()) > ndashes )
  {
    // notify user
    msg::wrn( msg::catq("given word is too long to repeat: ", word) );

    // print upper frame
    target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;

    // print framed word
    target << string(indent, ' ') << "// " << word << endl;

    // print lower frame
    target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;

  }

  // number of blanks between both words
  unsigned nblanks = ndashes - 2 * word.size();

  // print upper frame
  target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;

  // print framed word
  target << string(indent, ' ') << "// " << word << string(nblanks, ' ') << word << endl;

  // print lower frame
  target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;
}

// ---------------
// printTightFrame
// ---------------
/*
 *
 */
void CPPFile::printTightFrame( ofstream&      target,
                               const string&  word,
                               unsigned       indent
                             ) const
{
  // number of characters per line
  const unsigned lineLength = 80;

  // check indent + '// '
  if (indent > (lineLength - 3))
  {
    // notify user
    msg::err( msg::cat("indent is too large: ", msg::str(indent)) );

    // don't print anything
    return;
  }

  // check indent + '// ' + word
  if (word.size() > (lineLength - indent - 3))
  {
    // notify user
    msg::err("given word is too long for indented line");

    // don't print anything
    return;
  }

  // number of dashes
  unsigned ndashes = word.size();

  // print upper frame
  target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;

  // print framed word
  target << string(indent, ' ') << "// " << word << endl;

  // print lower frame
  target << string(indent, ' ') << "// " << string(ndashes, '-') << endl;
}

// -----------
// printHeader
// -----------
/*
 *
 */
void CPPFile::printHeader(ofstream& target, bool mainpage) const
{
  printLongFrame(target, getFilename(), 0);

  target << "/**"                             << endl;
  target << " * @file"                        << endl;
  target << " * @brief      " << getBrief()   << endl;
  target << " * @author     " << getAuthor()  << endl;
  target << " * @version    " << getVersion() << endl;
  target << " * @copyright  " << getLicense() << endl;

  if (mainpage)
  {
    target << " *" << endl;
    target << " * @mainpage" << endl;
    target << " *" << endl;
    target << " * @section issue What is the issue here?" << endl;
    target << " *   Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod" << endl;
    target << " *   tempor incidunt ut labore et dolore magna aliqua. Ut enim ad minim" << endl;
    target << " *   veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid" << endl;
    target << " *   ex ea commodi consequat. Quis aute iure reprehenderit in voluptate" << endl;
    target << " *   velit esse cillum dolore eu fugiat nulla pariatur." << endl;
    target << " *   Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui" << endl;
    target << " *   officia deserunt mollit anim id est laborum." << endl;
  }

  target << " */" << endl;
}

