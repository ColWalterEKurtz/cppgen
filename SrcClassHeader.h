// -----------------------------------------------------------------------------
// SrcClassHeader.h                                             SrcClassHeader.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcClassHeader class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCCLASSHEADER_H_INCLUDE_NO1
#define SRCCLASSHEADER_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CPPFile.h"


// --------------
// SrcClassHeader
// --------------
/**
 *
 */
class SrcClassHeader : public CPPFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // --------------
  // SrcClassHeader
  // --------------
  /**
   * The constructor.
   */
  SrcClassHeader();


  // ---------------------------------------------------------------------------
  // Setter methods                                               Setter methods
  // ---------------------------------------------------------------------------

  // ------------
  // setClassName
  // ------------
  /**
   * @param name
   */
  void setClassName(const std::string& name);


  // ---------------------------------------------------------------------------
  // Getter methods                                               Getter methods
  // ---------------------------------------------------------------------------

  // ------------
  // getClassName
  // ------------
  /**
   *
   */
  std::string getClassName() const;


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

  /// the name of the class
  std::string m_clsname;

};

#endif  /* #ifndef SRCCLASSHEADER_H_INCLUDE_NO1 */

