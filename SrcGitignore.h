// -----------------------------------------------------------------------------
// SrcGitignore.h                                                 SrcGitignore.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcGitignore class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCGITIGNORE_H_INCLUDE_NO1
#define SRCGITIGNORE_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CodeFile.h"


// ------------
// SrcGitignore
// ------------
/**
 *
 */
class SrcGitignore : public CodeFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // ------------
  // SrcGitignore
  // ------------
  /**
   * The constructor.
   */
  SrcGitignore();


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

};

#endif  /* #ifndef SRCGITIGNORE_H_INCLUDE_NO1 */

