#ifndef METAQQUICKLIBRARY_osg_PMOC_EXPORT
#define METAQQUICKLIBRARY_osg_PMOC_EXPORT 1
#define USE_DEPRECATED_API
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
#  if defined( METAQQUICKLIBRARY_osg_LIBRARY_STATIC )
#    define METAQQUICKLIBRARY_osg_EXPORT
#  elif defined( METAQQUICKLIBRARY_osg_LIBRARY )
#    define METAQQUICKLIBRARY_osg_EXPORT   __declspec(dllexport)
    #  else
    #    define METAQQUICKLIBRARY_osg_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define METAQQUICKLIBRARY_osg_EXPORT
#endif
#ifdef _MSC_VER
# if (_MSC_VER >= 1300)
#  define __STL_MEMBER_TEMPLATES
# endif
#endif
#endif
