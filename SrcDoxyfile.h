// -----------------------------------------------------------------------------
// SrcDoxyfile.h                                                   SrcDoxyfile.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcDoxyfile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCDOXYFILE_H_INCLUDE_NO1
#define SRCDOXYFILE_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CodeFile.h"


// -----------
// SrcDoxyfile
// -----------
/**
 *
 */
class SrcDoxyfile : public CodeFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // -----------
  // SrcDoxyfile
  // -----------
  /**
   * The constructor.
   */
  SrcDoxyfile();


  // ---------------------------------------------------------------------------
  // Setter methods                                               Setter methods
  // ---------------------------------------------------------------------------

  // ---------
  // setBinary
  // ---------
  /**
   * @param name
   */
  void setBinary(const std::string& name);

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

  // ---------
  // getBinary
  // ---------
  /**
   *
   */
  std::string getBinary() const;

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

  // ----------
  // printLines
  // ----------
  /**
   * This method prints the file's content.
   */
  virtual void printLines(std::ofstream& target) const;


private:

  // ---------------------------------------------------------------------------
  // Attributes                                                       Attributes
  // ---------------------------------------------------------------------------

  /// the name of the binary to create
  std::string m_binary;

  /// the source file's version
  std::string m_version;

};

#endif  /* #ifndef SRCDOXYFILE_H_INCLUDE_NO1 */

