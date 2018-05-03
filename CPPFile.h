// -----------------------------------------------------------------------------
// CPPFile.h                                                           CPPFile.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the CPPFile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef CPPFILE_H_INCLUDE_NO1
#define CPPFILE_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CodeFile.h"


// -------
// CPPFile
// -------
/**
 * @brief  The base class for all .cpp and .h file generators.
 */
class CPPFile : public CodeFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // -------
  // CPPFile
  // -------
  /**
   * The standard-constructor.
   */
  CPPFile();


  // ---------------------------------------------------------------------------
  // Setter methods                                               Setter methods
  // ---------------------------------------------------------------------------

  // --------
  // setBrief
  // --------
  /**
   * @param cat1
   * @param cat2
   * @param cat3
   */
  void setBrief( const std::string& cat1,
                 const std::string& cat2 = "",
                 const std::string& cat3 = ""
               );

  // ---------
  // setAuthor
  // ---------
  /**
   * @param author
   */
  void setAuthor(const std::string& author);

  // ----------
  // setVersion
  // ----------
  /**
   * @param version
   */
  void setVersion(const std::string& version);


  // ---------------------------------------------------------------------------
  // Getter methods                                               Getter methods
  // ---------------------------------------------------------------------------

  // --------
  // getBrief
  // --------
  /**
   *
   */
  std::string getBrief() const;

  // ---------
  // getAuthor
  // ---------
  /**
   *
   */
  std::string getAuthor() const;

  // ----------
  // getVersion
  // ----------
  /**
   *
   */
  std::string getVersion() const;


protected:

  // ---------------------------------------------------------------------------
  // Internal methods                                           Internal methods
  // ---------------------------------------------------------------------------

  // ------------
  // createFileID
  // ------------
  /**
   *
   */
  std::string createFileID(const std::string& filename) const;

  // --------------
  // printLongFrame
  // --------------
  /**
   *
   */
  void printLongFrame( std::ofstream&      target,
                       const std::string&  word,
                       unsigned            indent
                     ) const;

  // ---------------
  // printTightFrame
  // ---------------
  /**
   *
   */
  void printTightFrame( std::ofstream&      target,
                        const std::string&  word,
                        unsigned            indent
                      ) const;

  // -----------
  // printHeader
  // -----------
  /**
   *
   */
  void printHeader(std::ofstream& target, bool mainpage = false) const;


private:

  // ---------------------------------------------------------------------------
  // Attributes                                                       Attributes
  // ---------------------------------------------------------------------------

  /// the source file's brief description
  std::string m_brief;

  /// the author of the source file
  std::string m_author;

  /// the source file's version
  std::string m_version;

};

#endif  /* #ifndef CPPFILE_H_INCLUDE_NO1 */

