// -----------------------------------------------------------------------------
// SrcCliCpp.h                                                       SrcCliCpp.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcCliCpp class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCCLICPP_H_INCLUDE_NO1
#define SRCCLICPP_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CPPFile.h"


// ---------
// SrcCliCpp
// ---------
/**
 *
 */
class SrcCliCpp : public CPPFile
{

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

};

#endif  /* #ifndef SRCCLICPP_H_INCLUDE_NO1 */

