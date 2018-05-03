// -----------------------------------------------------------------------------
// CodeFile.h                                                         CodeFile.h
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the definition of the CodeFile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-05-03
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// One-Definition-Rule                                       One-Definition-Rule
// -----------------------------------------------------------------------------
#ifndef CODEFILE_H_INCLUDE_NO1
#define CODEFILE_H_INCLUDE_NO1


// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include <string>
#include <fstream>


// --------
// CodeFile
// --------
/**
 *
 */
class CodeFile
{

public:

  // ---------------------------------------------------------------------------
  // Construction                                                   Construction
  // ---------------------------------------------------------------------------

  // --------
  // CodeFile
  // --------
  /**
   * The standard-constructor.
   */
  CodeFile();

  // ---------
  // ~CodeFile
  // ---------
  /**
   * The destructor is virtual.
   */  
  virtual ~CodeFile();


  // ---------------------------------------------------------------------------
  // Handling                                                           Handling
  // ---------------------------------------------------------------------------

  // ----------
  // isReadable
  // ----------
  /**
   *
   */
  bool isReadable() const;

  // ------
  // create
  // ------
  /**
   *
   */
  bool create() const;


  // ---------------------------------------------------------------------------
  // Getter methods                                               Getter methods
  // ---------------------------------------------------------------------------

  // -----------
  // getFilename
  // -----------
  /**
   *
   */
  std::string getFilename() const;

  // ----------
  // getLicense
  // ----------
  /**
   *
   */
  std::string getLicense() const;


  // ---------------------------------------------------------------------------
  // Setter methods                                               Setter methods
  // ---------------------------------------------------------------------------

  // -----------
  // setFilename
  // -----------
  /**
   * @param filename
   */
  void setFilename(const std::string& filename);

  // ----------
  // setLicense
  // ----------
  /**
   * @param license
   */
  void setLicense(const std::string& license);


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

  /// the name of the file to create
  std::string m_filename;

  /// the file's license
  std::string m_license;

};

#endif  /* #ifndef CODEFILE_H_INCLUDE_NO1 */

