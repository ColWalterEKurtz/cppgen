// -----------------------------------------------------------------------------
// SrcClassImplementation.h                             SrcClassImplementation.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcClassImplementation class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCCLASSIMPLEMENTATION_H_INCLUDE_NO1
#define SRCCLASSIMPLEMENTATION_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CPPFile.h"


// ----------------------
// SrcClassImplementation
// ----------------------
/**
 *
 */
class SrcClassImplementation : public CPPFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // ----------------------
  // SrcClassImplementation
  // ----------------------
  /**
   * The constructor.
   */
  SrcClassImplementation();


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

  // -------------
  // setHeaderFile
  // -------------
  /**
   * @param name
   */
  void setHeaderFile(const std::string& name);


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

  // -------------
  // getHeaderFile
  // -------------
  /**
   *
   */
  std::string getHeaderFile() const;


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

  /// the name of the header file to include
  std::string m_hdrname;

};

#endif  /* #ifndef SRCCLASSIMPLEMENTATION_H_INCLUDE_NO1 */

