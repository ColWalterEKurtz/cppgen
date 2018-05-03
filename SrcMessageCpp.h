// -----------------------------------------------------------------------------
// SrcMessageCpp.h                                               SrcMessageCpp.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcMessageCpp class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCMESSAGECPP_H_INCLUDE_NO1
#define SRCMESSAGECPP_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CPPFile.h"


// -------------
// SrcMessageCpp
// -------------
/**
 *
 */
class SrcMessageCpp : public CPPFile
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

#endif  /* #ifndef SRCMESSAGECPP_H_INCLUDE_NO1 */

