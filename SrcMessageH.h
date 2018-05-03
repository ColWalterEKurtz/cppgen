// -----------------------------------------------------------------------------
// SrcMessageH.h                                                   SrcMessageH.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the SrcMessageH class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef SRCMESSAGEH_H_INCLUDE_NO1
#define SRCMESSAGEH_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "CPPFile.h"


// -----------
// SrcMessageH
// -----------
/**
 *
 */
class SrcMessageH : public CPPFile
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

#endif  /* #ifndef SRCMESSAGEH_H_INCLUDE_NO1 */

