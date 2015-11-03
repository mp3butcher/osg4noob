#ifndef METAQQUICKINTERFACE_PMOC_EXPORT_
#define METAQQUICKINTERFACE_PMOC_EXPORT_ 1

// define USE_DEPRECATED_API is used to include in API which is being fazed out
// if you can compile your apps with this turned off you are
// well placed for compatibility with future versions.
#define USE_DEPRECATED_API

// disable VisualStudio warnings
#if defined(_MSC_VER) && defined(METAINTERFACE_PMOC_DISABLE_MSVC_WARNINGS)
#pragma warning( disable : 4244 )
#pragma warning( disable : 4251 )
#pragma warning( disable : 4275 )
#pragma warning( disable : 4512 )
#pragma warning( disable : 4267 )
#pragma warning( disable : 4702 )
#pragma warning( disable : 4511 )
#endif

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( METAQQUICKINTERFACE_PMOC_LIBRARY_STATIC )
#    define METAQQUICKINTERFACE_PMOC_EXPORT
#  elif defined( METAQQUICKINTERFACE_PMOC_LIBRARY )
#    define METAQQUICKINTERFACE_PMOC_EXPORT   __declspec(dllexport)
#  else
#    define METAQQUICKINTERFACE_PMOC_EXPORT   __declspec(dllimport)
#  endif
#else
#  define METAQQUICKINTERFACE_PMOC_EXPORT
#endif

// set up define for whether member templates are supported by VisualStudio compilers.
#ifdef _MSC_VER
# if (_MSC_VER >= 1300)
#  define __STL_MEMBER_TEMPLATES
# endif
#endif

/* Define NULL pointer value */

#ifndef NULL
#ifdef  __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

/**

\namespace osg

The core osg library provides the basic scene graph classes such as Nodes,
State and Drawables, and maths and general helper classes.
*/

#endif

