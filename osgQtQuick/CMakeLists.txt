project(osgQtQuick)

cmake_minimum_required(VERSION 2.8)

#cmake_policy(SET CMP0020 NEW)

SET(DYNAMIC_OPENSCENEGRAPH True)

if(DYNAMIC_OPENSCENEGRAPH)
    add_definitions(-DOSGQTQUICK_LIBRARY)
	message("add_definitions(-DOSGQTQUICK_LIBRARY)")
else()
    add_definitions(-DOSG_LIBRARY_STATIC)
		message("OSG STATIC LINK SETTED")
endif()
 
find_package(Qt5 COMPONENTS
    Quick
	Core
	Gui
# 	QtCore
   OpenGL
)

# include_directories( $ENV{QTDIR}/5.1.1/gcc_64/include/)

#ADD_DEFINITIONS(-fPIC)
  include_directories(${Qt5Widgets_INCLUDES})
  include_directories(${Qt5OpenGL_INCLUDES})
  include_directories(${Qt5Core_INCLUDES})
  include_directories(${Qt5Gui_INCLUDES})
 include_directories(${Qt5_INCLUDES})

  include_directories(${QT5_INCLUDE_DIRS})
find_package(OpenSceneGraph 3.2.0 REQUIRED
    osg
    osgDB
    osgGA
    osgUtil
    osgViewer
    osgText
#    osgQt
)

find_package(OpenGL)
if(OPENGL_FOUND)
   MESSAGE("OpenGL Correctly Found")
   include_directories(${OPENGL_INCLUDE_DIR})
else(OPENGL_FOUND)
   MESSAGE("OpenGL environment missing")
endif(OPENGL_FOUND)

#aux_source_directory(. SRC_LIST)

SET (PROJECT_INCLUDES
include/osgQtQuick/OSGNodeFile.hpp 
 include/osgQtQuick/OSGNode.hpp  
include/osgQtQuick/OSGTextNode.hpp  
include/osgQtQuick/OSGViewport.hpp  
include/osgQtQuick/QuickWindowViewer.hpp  
include/osgQtQuick/Utility.hpp
#
)

  SET (TES src/OSGViewport.cpp   src/QuickWindowViewer.cpp)
QT5_WRAP_CPP( PROJECT_INCLUDES_MOC ${PROJECT_INCLUDES}  )
#QT5_WRAP_CPP( PROJECT_SRC_MOC ${TES} )
INCLUDE_DIRECTORIES(  ./include/osgQtQuick/)
SET(PROJECT_SOURCES
${PROJECT_INCLUDES_MOC}
${PROJECT_SRC_MOC}
 #${PROJECT_INCLUDES}

               src/OSGNode.cpp             src/OSGTextNode.cpp     
   src/Utility.cpp        src/OSGNodeFile.cpp       
  src/OSGViewport.cpp   src/QuickWindowViewer.cpp


)

#QT_WRAP_CPP( PROJECT_SRC_MOC   src/OSGViewport.cpp   src/QuickWindowViewer.cpp )

set(CMAKE_AUTOMOC ON)
#set(AUTOMOC_MOC_OPTIONS  -I/home/xeul/SRC/osgFluidSVN/osgQtQuick/include/osgQtQuick)
#set(CMAKE_AUTOMOC_RELAXED_MODE  true)
#set(CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES /home/xeul/SRC/osgFluidSVN/osgQtQuick/include/osgQtQuick #${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
#INCLUDE_DIRECTORIES(/home/xeul/SRC/osgFluidSVN/osgQtQuick/include/osgQtQuick)
#add_executable
add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES} )
ADD_DEFINITIONS(-DOSGQTQUICK_LIBRARY)

qt5_use_modules(${PROJECT_NAME} Quick Gui OpenGL Core Widgets)
target_link_libraries(${PROJECT_NAME}
    Qt5::Quick
Qt5::Gui    Qt5::OpenGL
    ${OPENGL_LIBRARIES}
    ${OPENSCENEGRAPH_LIBRARIES})

#set_target_properties(${PROJECT_NAME} #PROPERTIES
 #   AUTOMOC TRUE
  #  COMPILE_FLAGS -std=c++11
#)

#file(GLOB TARGET_HDRS "include/*.hpp")
#foreach(THIS_HDR ${TARGET_HDRS})
#    get_filename_component(THIS_HDR_NAME_WE ${THIS_HDR} NAME_WE)
#    get_filename_component(THIS_HDR_ABSOLUTE ${THIS_HDR} ABSOLUTE)


#    set(THIS_HDR_INC_NAME
#        "${CMAKE_CURRENT_BINARY_DIR}/include/osgQtQuick/${THIS_HDR_NAME_WE}")
#    if(NOT EXISTS ${THIS_HDR_INC_NAME})
#        file(WRITE
 #           ${THIS_HDR_INC_NAME}
  #          "#include \"${THIS_HDR_ABSOLUTE}\"\n"
  #      ) 
  #  endif(NOT EXISTS ${THIS_HDR_INC_NAME})

   # install(FILES ${THIS_HDR}
    #    RENAME ${THIS_HDR_NAME_WE}
     #   DESTINATION "include/osgQtQuick"
   #    COMPONENT osgqtquick
 #   )
#endforeach(THIS_HDR ${TARGET_HDRS})

include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    "${CMAKE_CURRENT_BINARY_DIR}/include"
    ${OPENSCENEGRAPH_INCLUDE_DIRS})
