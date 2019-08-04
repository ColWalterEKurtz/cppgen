// -----------------------------------------------------------------------------
// SrcMakefile.cpp                                               SrcMakefile.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcMakefile class.
 * @author     Col. Walter E. Kurtz
 * @version    2019-08-04
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcMakefile.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// -----------
// SrcMakefile
// -----------
/*
 *
 */
SrcMakefile::SrcMakefile()
{
  m_binary = "BinaryNotSet";
}


// -----------------------------------------------------------------------------
// Setter methods                                                 Setter methods
// -----------------------------------------------------------------------------

// ---------
// setBinary
// ---------
/*
 *
 */
void SrcMakefile::setBinary(const string& name)
{
  m_binary = name;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// ---------
// getBinary
// ---------
/**
 *
 */
string SrcMakefile::getBinary() const
{
  return m_binary;
}


// -----------------------------------------------------------------------------
// Internal methods                                             Internal methods
// -----------------------------------------------------------------------------

// ----------
// printLines
// ----------
/*
 *
 */
void SrcMakefile::printLines(ofstream& target) const
{
  target << "# " << getLicense() << endl;
  target << endl;
  target << "CC      := g++" << endl;
  target << "CFLAGS  := --std=c++14 -pedantic -Wall -O2" << endl;
  target << "HEADERS := $(shell find -maxdepth 1 -type f -name \"*.h\")" << endl;
  target << "SOURCES := $(shell find -maxdepth 1 -type f -name \"*.cpp\")" << endl;
  target << "OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))" << endl;
  target << "DPFILES := $(patsubst %.cpp,%.d,$(SOURCES))" << endl;
  target << "PROJECT := " << getBinary() << endl;
  target << "DOXYGEN := doc/html/index.html" << endl;
  target << endl;
  target << "# set default target" << endl;
  target << ".DEFAULT_GOAL = $(PROJECT)" << endl;
  target << endl;
  target << "# set phony targets" << endl;
  target << ".PHONY: all doc clean" << endl;
  target << endl;
  target << "# create binary and documentation" << endl;
  target << "all: $(PROJECT) $(DOXYGEN)" << endl;
  target << endl;
  target << "# create documentation" << endl;
  target << "doc: $(DOXYGEN)" << endl;
  target << endl;
  target << "# remove producible files" << endl;
  target << "clean:" << endl;
  target << "\t@rm -f *.d *.o $(PROJECT)" << endl;
  target << "\t@rm -rf doc/" << endl;
  target << endl;
  target << "# import dependencies (create if missing)" << endl;
  target << "ifneq ($(MAKECMDGOALS),clean)" << endl;
  target << "-include $(DPFILES)" << endl;
  target << "endif" << endl;
  target << endl;
  target << "# spot dependencies" << endl;
  target << "$(DPFILES): %.d: %.cpp" << endl;
  target << "\t$(CC) -MM $(CFLAGS) -o $@ $<" << endl;
  target << endl;
  target << "# link object files" << endl;
  target << "$(PROJECT): $(OBJECTS)" << endl;
  target << "\t$(CC) -o $(PROJECT) $+" << endl;
  target << endl;
  target << "# compile source code" << endl;
  target << "$(OBJECTS): %.o: %.cpp %.d" << endl;
  target << "\t$(CC) -c $(CFLAGS) -o $@ $<" << endl;
  target << endl;
  target << "# create documentation" << endl;
  target << "$(DOXYGEN): $(HEADERS) $(SOURCES)" << endl;
  target << "\t@doxygen $(PROJECT).doxyfile" << endl;
}

