// -----------------------------------------------------------------------------
// SrcDoxyfile.cpp                                               SrcDoxyfile.cpp
// -----------------------------------------------------------------------------
/**
 * @file
 * @brief      This file holds the implementation of the SrcDoxyfile class.
 * @author     Col. Walter E. Kurtz
 * @version    2018-06-01
 * @copyright  GNU General Public License - Version 3.0
 */

// -----------------------------------------------------------------------------
// Includes                                                             Includes
// -----------------------------------------------------------------------------
#include "SrcDoxyfile.h"


// -----------------------------------------------------------------------------
// Used namespaces                                               Used namespaces
// -----------------------------------------------------------------------------
using namespace std;


// -----------------------------------------------------------------------------
// Construction                                                     Construction
// -----------------------------------------------------------------------------

// -----------
// SrcDoxyfile
// -----------
/*
 *
 */
SrcDoxyfile::SrcDoxyfile()
{
  // nothing
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
void SrcDoxyfile::setBinary(const string& name)
{
  m_binary = name;
}

// ----------
// setVersion
// ----------
/*
 *
 */
void SrcDoxyfile::setVersion(const string& version)
{
  m_version = version;
}


// -----------------------------------------------------------------------------
// Getter methods                                                 Getter methods
// -----------------------------------------------------------------------------

// ---------
// getBinary
// ---------
/*
 *
 */
string SrcDoxyfile::getBinary() const
{
  return m_binary;
}

// ----------
// getVersion
// ----------
/*
 *
 */
string SrcDoxyfile::getVersion() const
{
  return m_version;
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
void SrcDoxyfile::printLines(ofstream& target) const
{
  target << "# Doxyfile 1.8.11" << endl;
  target << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Project related configuration options" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "DOXYFILE_ENCODING      = UTF-8" << endl;
  target << "PROJECT_NAME           = \"" << getBinary() << "\"" << endl;
  target << "PROJECT_NUMBER         = \"" << getVersion() << "\"" << endl;
  target << "PROJECT_BRIEF          = \"This is " << getBinary() << ".\"" << endl;
  target << "PROJECT_LOGO           =" << endl;
  target << "OUTPUT_DIRECTORY       = \"doc\"" << endl;
  target << "CREATE_SUBDIRS         = NO" << endl;
  target << "ALLOW_UNICODE_NAMES    = NO" << endl;
  target << "OUTPUT_LANGUAGE        = English" << endl;
  target << "BRIEF_MEMBER_DESC      = YES" << endl;
  target << "REPEAT_BRIEF           = YES" << endl;
  target << "ABBREVIATE_BRIEF       =" << endl;
  target << "ALWAYS_DETAILED_SEC    = YES" << endl;
  target << "INLINE_INHERITED_MEMB  = YES" << endl;
  target << "FULL_PATH_NAMES        = YES" << endl;
  target << "STRIP_FROM_PATH        =" << endl;
  target << "STRIP_FROM_INC_PATH    =" << endl;
  target << "SHORT_NAMES            = NO" << endl;
  target << "JAVADOC_AUTOBRIEF      = NO" << endl;
  target << "QT_AUTOBRIEF           = NO" << endl;
  target << "MULTILINE_CPP_IS_BRIEF = NO" << endl;
  target << "INHERIT_DOCS           = YES" << endl;
  target << "SEPARATE_MEMBER_PAGES  = NO" << endl;
  target << "TAB_SIZE               = 2" << endl;
  target << "ALIASES                =" << endl;
  target << "TCL_SUBST              =" << endl;
  target << "OPTIMIZE_OUTPUT_FOR_C  = NO" << endl;
  target << "OPTIMIZE_OUTPUT_JAVA   = NO" << endl;
  target << "OPTIMIZE_FOR_FORTRAN   = NO" << endl;
  target << "OPTIMIZE_OUTPUT_VHDL   = NO" << endl;
  target << "EXTENSION_MAPPING      =" << endl;
  target << "MARKDOWN_SUPPORT       = YES" << endl;
  target << "AUTOLINK_SUPPORT       = YES" << endl;
  target << "BUILTIN_STL_SUPPORT    = YES" << endl;
  target << "CPP_CLI_SUPPORT        = NO" << endl;
  target << "SIP_SUPPORT            = NO" << endl;
  target << "IDL_PROPERTY_SUPPORT   = YES" << endl;
  target << "DISTRIBUTE_GROUP_DOC   = NO" << endl;
  target << "GROUP_NESTED_COMPOUNDS = NO" << endl;
  target << "SUBGROUPING            = YES" << endl;
  target << "INLINE_GROUPED_CLASSES = NO" << endl;
  target << "INLINE_SIMPLE_STRUCTS  = NO" << endl;
  target << "TYPEDEF_HIDES_STRUCT   = NO" << endl;
  target << "LOOKUP_CACHE_SIZE      = 2" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Build related configuration options" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "EXTRACT_ALL            = YES" << endl;
  target << "EXTRACT_PRIVATE        = YES" << endl;
  target << "EXTRACT_PACKAGE        = YES" << endl;
  target << "EXTRACT_STATIC         = YES" << endl;
  target << "EXTRACT_LOCAL_CLASSES  = YES" << endl;
  target << "EXTRACT_LOCAL_METHODS  = YES" << endl;
  target << "EXTRACT_ANON_NSPACES   = YES" << endl;
  target << "HIDE_UNDOC_MEMBERS     = NO" << endl;
  target << "HIDE_UNDOC_CLASSES     = NO" << endl;
  target << "HIDE_FRIEND_COMPOUNDS  = NO" << endl;
  target << "HIDE_IN_BODY_DOCS      = NO" << endl;
  target << "INTERNAL_DOCS          = NO" << endl;
  target << "CASE_SENSE_NAMES       = YES" << endl;
  target << "HIDE_SCOPE_NAMES       = NO" << endl;
  target << "HIDE_COMPOUND_REFERENCE= NO" << endl;
  target << "SHOW_INCLUDE_FILES     = YES" << endl;
  target << "SHOW_GROUPED_MEMB_INC  = YES" << endl;
  target << "FORCE_LOCAL_INCLUDES   = YES" << endl;
  target << "INLINE_INFO            = YES" << endl;
  target << "SORT_MEMBER_DOCS       = YES" << endl;
  target << "SORT_BRIEF_DOCS        = NO" << endl;
  target << "SORT_MEMBERS_CTORS_1ST = NO" << endl;
  target << "SORT_GROUP_NAMES       = NO" << endl;
  target << "SORT_BY_SCOPE_NAME     = NO" << endl;
  target << "STRICT_PROTO_MATCHING  = YES" << endl;
  target << "GENERATE_TODOLIST      = YES" << endl;
  target << "GENERATE_TESTLIST      = YES" << endl;
  target << "GENERATE_BUGLIST       = YES" << endl;
  target << "GENERATE_DEPRECATEDLIST= YES" << endl;
  target << "ENABLED_SECTIONS       =" << endl;
  target << "MAX_INITIALIZER_LINES  = 30" << endl;
  target << "SHOW_USED_FILES        = YES" << endl;
  target << "SHOW_FILES             = YES" << endl;
  target << "SHOW_NAMESPACES        = YES" << endl;
  target << "FILE_VERSION_FILTER    =" << endl;
  target << "LAYOUT_FILE            =" << endl;
  target << "CITE_BIB_FILES         =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to warning and progress messages" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "QUIET                  = NO" << endl;
  target << "WARNINGS               = YES" << endl;
  target << "WARN_IF_UNDOCUMENTED   = YES" << endl;
  target << "WARN_IF_DOC_ERROR      = YES" << endl;
  target << "WARN_NO_PARAMDOC       = YES" << endl;
  target << "WARN_AS_ERROR          = NO" << endl;
  target << "WARN_FORMAT            = \"$file:$line: $text\"" << endl;
  target << "WARN_LOGFILE           =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the input files" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "INPUT                  =" << endl;
  target << "INPUT_ENCODING         = UTF-8" << endl;
  target << "FILE_PATTERNS          =" << endl;
  target << "RECURSIVE              = NO" << endl;
  target << "EXCLUDE                =" << endl;
  target << "EXCLUDE_SYMLINKS       = NO" << endl;
  target << "EXCLUDE_PATTERNS       = *.d" << endl;
  target << "EXCLUDE_SYMBOLS        =" << endl;
  target << "EXAMPLE_PATH           =" << endl;
  target << "EXAMPLE_PATTERNS       =" << endl;
  target << "EXAMPLE_RECURSIVE      = NO" << endl;
  target << "IMAGE_PATH             = ." << endl;
  target << "INPUT_FILTER           =" << endl;
  target << "FILTER_PATTERNS        =" << endl;
  target << "FILTER_SOURCE_FILES    = NO" << endl;
  target << "FILTER_SOURCE_PATTERNS =" << endl;
  target << "USE_MDFILE_AS_MAINPAGE =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to source browsing" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "SOURCE_BROWSER         = YES" << endl;
  target << "INLINE_SOURCES         = NO" << endl;
  target << "STRIP_CODE_COMMENTS    = NO" << endl;
  target << "REFERENCED_BY_RELATION = NO" << endl;
  target << "REFERENCES_RELATION    = NO" << endl;
  target << "REFERENCES_LINK_SOURCE = YES" << endl;
  target << "SOURCE_TOOLTIPS        = YES" << endl;
  target << "USE_HTAGS              = NO" << endl;
  target << "VERBATIM_HEADERS       = YES" << endl;
  target << "CLANG_ASSISTED_PARSING = NO" << endl;
  target << "CLANG_OPTIONS          =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the alphabetical class index" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "ALPHABETICAL_INDEX     = YES" << endl;
  target << "COLS_IN_ALPHA_INDEX    = 5" << endl;
  target << "IGNORE_PREFIX          =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the HTML output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_HTML          = YES" << endl;
  target << "HTML_OUTPUT            = html" << endl;
  target << "HTML_FILE_EXTENSION    = .html" << endl;
  target << "HTML_HEADER            =" << endl;
  target << "HTML_FOOTER            =" << endl;
  target << "HTML_STYLESHEET        =" << endl;
  target << "HTML_EXTRA_STYLESHEET  =" << endl;
  target << "HTML_EXTRA_FILES       =" << endl;
  target << "HTML_COLORSTYLE_HUE    = 220" << endl;
  target << "HTML_COLORSTYLE_SAT    = 100" << endl;
  target << "HTML_COLORSTYLE_GAMMA  = 80" << endl;
  target << "HTML_TIMESTAMP         = YES" << endl;
  target << "HTML_DYNAMIC_SECTIONS  = NO" << endl;
  target << "HTML_INDEX_NUM_ENTRIES = 100" << endl;
  target << "GENERATE_DOCSET        = NO" << endl;
  target << "DOCSET_FEEDNAME        = \"Doxygen generated docs\"" << endl;
  target << "DOCSET_BUNDLE_ID       = org.doxygen.Project" << endl;
  target << "DOCSET_PUBLISHER_ID    = org.doxygen.Publisher" << endl;
  target << "DOCSET_PUBLISHER_NAME  = Publisher" << endl;
  target << "GENERATE_HTMLHELP      = NO" << endl;
  target << "CHM_FILE               =" << endl;
  target << "HHC_LOCATION           =" << endl;
  target << "GENERATE_CHI           = NO" << endl;
  target << "CHM_INDEX_ENCODING     =" << endl;
  target << "BINARY_TOC             = NO" << endl;
  target << "TOC_EXPAND             = NO" << endl;
  target << "GENERATE_QHP           = NO" << endl;
  target << "QCH_FILE               =" << endl;
  target << "QHP_NAMESPACE          = org.doxygen.Project" << endl;
  target << "QHP_VIRTUAL_FOLDER     = doc" << endl;
  target << "QHP_CUST_FILTER_NAME   =" << endl;
  target << "QHP_CUST_FILTER_ATTRS  =" << endl;
  target << "QHP_SECT_FILTER_ATTRS  =" << endl;
  target << "QHG_LOCATION           =" << endl;
  target << "GENERATE_ECLIPSEHELP   = NO" << endl;
  target << "ECLIPSE_DOC_ID         = org.doxygen.Project" << endl;
  target << "DISABLE_INDEX          = NO" << endl;
  target << "GENERATE_TREEVIEW      = NO" << endl;
  target << "ENUM_VALUES_PER_LINE   = 4" << endl;
  target << "TREEVIEW_WIDTH         = 250" << endl;
  target << "EXT_LINKS_IN_WINDOW    = NO" << endl;
  target << "FORMULA_FONTSIZE       = 14" << endl;
  target << "FORMULA_TRANSPARENT    = YES" << endl;
  target << "USE_MATHJAX            = NO" << endl;
  target << "MATHJAX_FORMAT         = HTML-CSS" << endl;
  target << "MATHJAX_RELPATH        = http://cdn.mathjax.org/mathjax/latest" << endl;
  target << "MATHJAX_EXTENSIONS     =" << endl;
  target << "MATHJAX_CODEFILE       =" << endl;
  target << "SEARCHENGINE           = YES" << endl;
  target << "SERVER_BASED_SEARCH    = NO" << endl;
  target << "EXTERNAL_SEARCH        = NO" << endl;
  target << "SEARCHENGINE_URL       =" << endl;
  target << "SEARCHDATA_FILE        = searchdata.xml" << endl;
  target << "EXTERNAL_SEARCH_ID     =" << endl;
  target << "EXTRA_SEARCH_MAPPINGS  =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the LaTeX output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_LATEX         = NO" << endl;
  target << "LATEX_OUTPUT           = latex" << endl;
  target << "LATEX_CMD_NAME         = latex" << endl;
  target << "MAKEINDEX_CMD_NAME     = makeindex" << endl;
  target << "COMPACT_LATEX          = NO" << endl;
  target << "PAPER_TYPE             = a4" << endl;
  target << "EXTRA_PACKAGES         = amsmath" << endl;
  target << "LATEX_HEADER           =" << endl;
  target << "LATEX_FOOTER           =" << endl;
  target << "LATEX_EXTRA_STYLESHEET =" << endl;
  target << "LATEX_EXTRA_FILES      =" << endl;
  target << "PDF_HYPERLINKS         = YES" << endl;
  target << "USE_PDFLATEX           = YES" << endl;
  target << "LATEX_BATCHMODE        = NO" << endl;
  target << "LATEX_HIDE_INDICES     = NO" << endl;
  target << "LATEX_SOURCE_CODE      = NO" << endl;
  target << "LATEX_BIB_STYLE        = plain" << endl;
  target << "LATEX_TIMESTAMP        = NO" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the RTF output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_RTF           = NO" << endl;
  target << "RTF_OUTPUT             = rtf" << endl;
  target << "COMPACT_RTF            = NO" << endl;
  target << "RTF_HYPERLINKS         = NO" << endl;
  target << "RTF_STYLESHEET_FILE    =" << endl;
  target << "RTF_EXTENSIONS_FILE    =" << endl;
  target << "RTF_SOURCE_CODE        = NO" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the man page output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_MAN           = NO" << endl;
  target << "MAN_OUTPUT             = man" << endl;
  target << "MAN_EXTENSION          = .3" << endl;
  target << "MAN_SUBDIR             =" << endl;
  target << "MAN_LINKS              = NO" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the XML output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_XML           = NO" << endl;
  target << "XML_OUTPUT             = xml" << endl;
  target << "XML_PROGRAMLISTING     = YES" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the DOCBOOK output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_DOCBOOK       = NO" << endl;
  target << "DOCBOOK_OUTPUT         = docbook" << endl;
  target << "DOCBOOK_PROGRAMLISTING = NO" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options for the AutoGen Definitions output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_AUTOGEN_DEF   = NO" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the Perl module output" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "GENERATE_PERLMOD       = NO" << endl;
  target << "PERLMOD_LATEX          = NO" << endl;
  target << "PERLMOD_PRETTY         = YES" << endl;
  target << "PERLMOD_MAKEVAR_PREFIX =" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the preprocessor" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "ENABLE_PREPROCESSING   = YES" << endl;
  target << "MACRO_EXPANSION        = YES" << endl;
  target << "EXPAND_ONLY_PREDEF     = NO" << endl;
  target << "SEARCH_INCLUDES        = YES" << endl;
  target << "INCLUDE_PATH           =" << endl;
  target << "INCLUDE_FILE_PATTERNS  =" << endl;
  target << "PREDEFINED             =" << endl;
  target << "EXPAND_AS_DEFINED      =" << endl;
  target << "SKIP_FUNCTION_MACROS   = YES" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to external references" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "TAGFILES               =" << endl;
  target << "GENERATE_TAGFILE       =" << endl;
  target << "ALLEXTERNALS           = NO" << endl;
  target << "EXTERNAL_GROUPS        = YES" << endl;
  target << "EXTERNAL_PAGES         = YES" << endl;
  target << "PERL_PATH              = /usr/bin/perl" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "# Configuration options related to the dot tool" << endl;
  target << "#---------------------------------------------------------------------------" << endl;
  target << "CLASS_DIAGRAMS         = YES" << endl;
  target << "MSCGEN_PATH            =" << endl;
  target << "DIA_PATH               =" << endl;
  target << "HIDE_UNDOC_RELATIONS   = NO" << endl;
  target << "HAVE_DOT               = YES" << endl;
  target << "DOT_NUM_THREADS        = 0" << endl;
  target << "DOT_FONTNAME           = Helvetica" << endl;
  target << "DOT_FONTSIZE           = 10" << endl;
  target << "DOT_FONTPATH           =" << endl;
  target << "CLASS_GRAPH            = YES" << endl;
  target << "COLLABORATION_GRAPH    = YES" << endl;
  target << "GROUP_GRAPHS           = YES" << endl;
  target << "UML_LOOK               = NO" << endl;
  target << "UML_LIMIT_NUM_FIELDS   = 10" << endl;
  target << "TEMPLATE_RELATIONS     = YES" << endl;
  target << "INCLUDE_GRAPH          = YES" << endl;
  target << "INCLUDED_BY_GRAPH      = YES" << endl;
  target << "CALL_GRAPH             = YES" << endl;
  target << "CALLER_GRAPH           = YES" << endl;
  target << "GRAPHICAL_HIERARCHY    = YES" << endl;
  target << "DIRECTORY_GRAPH        = YES" << endl;
  target << "DOT_IMAGE_FORMAT       = png" << endl;
  target << "INTERACTIVE_SVG        = NO" << endl;
  target << "DOT_PATH               =" << endl;
  target << "DOTFILE_DIRS           =" << endl;
  target << "MSCFILE_DIRS           =" << endl;
  target << "DIAFILE_DIRS           =" << endl;
  target << "PLANTUML_JAR_PATH      =" << endl;
  target << "PLANTUML_INCLUDE_PATH  =" << endl;
  target << "DOT_GRAPH_MAX_NODES    = 50" << endl;
  target << "MAX_DOT_GRAPH_DEPTH    = 0" << endl;
  target << "DOT_TRANSPARENT        = NO" << endl;
  target << "DOT_MULTI_TARGETS      = YES" << endl;
  target << "GENERATE_LEGEND        = NO" << endl;
  target << "DOT_CLEANUP            = YES" << endl;
}

