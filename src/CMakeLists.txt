PROJECT(DownCast)
if(WIN32)
SET(OSGBULLET_LIBRARY  "D:/SRC/bullet/lib/Release/LinearMath.lib" "D:/SRC/bullet/lib/Release/BulletMultiThreaded.lib" "D:/SRC/bullet/lib/Release/BulletCollision.lib" "D:/SRC/bullet/lib/Release/BulletDynamics.lib" "D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbCollision.lib" "D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbDynamics.lib"  "D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbInteraction.lib")

include_directories("D:/SRC/Bullet/src")
set(OSGAUDIO_LIBRARY "D:/SRC/OpenSceneGraph-3.2/osgaudio/lib/Release/osgaudio.lib" "D:/SRC/OpenSceneGraph-3.2/osgaudio/lib/Release/openalpp.lib")
SET(OSGWORKS_LIBRARY  "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwControls.lib"  "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwMX.lib" "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwQuery.lib" "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwTools.lib")	
include_directories("D:/SRC/cal3dXGIT/src" "D:/SRC/openal/openal-soft-1.11.753/include" "D:/SRC/openal/freealut.git/trunk/include" "D:/SRC/openal/vorbis/include" "D:/SRC/openal/libogg/include")
SET(OPENAL_LIBRARIES "D:/SRC/openal/freealut.git/trunk/src/Release/alut.lib" "D:/SRC/openal/libogg/win32/VS2010/x64/Release/libogg.lib"   "D:/SRC/openal/openal-soft-1.11.753/Release/OpenAL32.lib" "D:/SRC/openal/vorbis/win32/VS2010/x64/Release/libvorbisfile.lib" "d:/SRC/openal/vorbis/win32/VS2010/x64/Release/libvorbis.lib")

else(WIN32)

SET(OSGMULTIGRID_LIBRARY /home/xeul/SRC/osgFluidGIT/osgMultigrid/libosgMG.so)
include_directories(/home/xeul/SRC/osgFluidGIT/osgMultigrid)
include_directories(/home/xeul/SRC/cal3dXGIT/src)


FIND_PACKAGE(OpenAL)
SET(OSGBULLET_LIBRARY
/home/xeul/SRC/bullet-2.82-r2704/src/BulletMultiThreaded/libBulletMultiThreaded.so
/home/xeul/SRC/bullet-2.82-r2704/src/BulletCollision/libBulletCollision.so
/home/xeul/SRC/bullet-2.82-r2704/src/BulletDynamics/libBulletDynamics.so
/home/xeul/SRC/bullet-2.82-r2704/src/LinearMath/libLinearMath.so
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgbullet/lib/libosgbCollision.so
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgbullet/lib/libosgbDynamics.so
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgbullet/lib/libosgbInteraction.so
)

set(OSGAUDIO_LIBRARY  
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgaudio/lib/libosgAudio.so 
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgaudio/lib/libopenalpp.so
)

SET(OSGWORKS_LIBRARY 
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgworks/lib/libosgwControls.so 
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgworks/lib/libosgwMx.so 
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgworks/lib/libosgwQuery.so  
/home/xeul/SRC/OpenSceneGraph3.2GIT/osgworks/lib/libosgwTools.so 
)

SET(OSGCAL2_LIBRARY   /home/xeul/SRC/osgCal2/lib/libosgCal.so)	
SET(OSGQTQUICK_LIBRARY  /home/xeul/SRC/osgCastWizard2/bin/libosgQtQuick.so) 
    include_directories(/home/xeul/SRC/bullet-2.82-r2704/src/)
    include_directories(/home/xeul/SRC/osgCastWizard2/src/output)
    include_directories(/home/xeul/SRC/osgFluidSVN2/osgQtQuick/include)
    include_directories(/home/xeul/SRC/osgCal2/include )
   # include_directories( /usr/include/bullet )
    include_directories( $ENV{OSG_ROOT}/osgworks/include )
    include_directories( $ENV{OSG_ROOT}/osgbullet/include )
    include_directories( $ENV{OSG_ROOT}/osgaudio/include )

endif(WIN32)
set(Boost_USE_STATIC_LIBS        ON)
FIND_PACKAGE(Boost
REQUIRED
)
link_directories(${Boost_LIBRARY_DIRS})
include_directories( ${Boost_INCLUDE_DIR} )

#include(/usr/lib/x86_64-linux-gnu/cmake/Qt5Config.cmake)


#	get_filename_component(_qt5_install_prefix \"${CMAKE_CURRENT_LIST_DIR}/$${CMAKE_RELATIVE_INSTALL_DIR}\" ABSOLUTE)

#set(_qt5_install_prefix /usr/lib/x86_64-linux-gnu/cmake ${_qt5_install_prefix})
#FIND_PACKAGE(OpenSceneGraph REQUIRED)
if(DYNAMIC_OPENSCENEGRAPH)
    add_definitions(-DOSGQTQUICK_LIBRARY)
else()
    add_definitions(-DOSG_LIBRARY_STATIC)
endif()

#add_definitions(-DOSG_NOTIFY_LEVEL=DEBUG)

#find_package(Qt5 COMPONENTS
 #   Quick
	#Core
	#Gui
#   OpenGL
# )
  



find_package(osgVolume REQUIRED)
#SET(QT_USE_QTOPENGL yes)

#include_directories(${QT5_INCLUDE_DIR} ../osgQtQuick/include )



set(Boost_USE_STATIC_LIBS        ON)
#set(Boost_USE_MULTITHREADED      ON)
 #set(Boost_USE_STATIC_RUNTIME    OFF)

FIND_PACKAGE(Boost
COMPONENTS regex
REQUIRED
)
find_package(OpenSceneGraph 3.2.0 REQUIRED
    osg
    osgDB
osgParticle
osgSim
osgFX
osgShadow
osgAnimation
osgManipulator
osgPresentation
osgTerrain
osgViewer
    osgGA
    osgUtil
    osgViewer
    osgText
    osgVolume
osgWidget
	)



INCLUDE_directories(${OSG_INCLUDE_DIR})

#HEADER TO SCAN are in current directory
set (PATHTOHEADER ${PROJECT_SOURCE_DIR}/inputinclude )
message("PATHTOHEDER" ${PATHTOHEADER})

INCLUDE_directories(${PATHTOHEADER})
message("projectsourcedir ${PROJECT_SOURCE_DIR}/inputinclude")
 FILE(GLOB_RECURSE  OSG_INCLUDES RELATIVE ${PROJECT_SOURCE_DIR}/inputinclude      inputinclude/osg/*
#  inputinclude/osgAnimation/*
 # inputinclude/osgAudio/*
 # inputinclude/osgbCollision/*
  #inputinclude/osgbDynamics/*
 # inputinclude/osgbInteraction/*
 # inputinclude/osgCal/*
 #  inputinclude/osgDB/*
 # inputinclude/osgFX/*
  #inputinclude/osgGA/*
  #inputinclude/osgManipulator/*
 # inputinclude/osgParticle/*
 # inputinclude/osgPresentation/*
 # inputinclude/osgShadow/*
  #inputinclude/osgSim/*
 # inputinclude/osgTerrain/*
 # inputinclude/osgText/*
 # inputinclude/osgUtil/*
 # inputinclude/osgViewer/*
  #inputinclude/osgVolume/*
  #inputinclude/osgwControls/*
  #inputinclude/osgWidget/*
 # inputinclude/osgwMx/*
  #inputinclude/osgwQuery/*
  #inputinclude/osgwTools/*
#inputinclude/osgMG/*
#inputinclude/osgVolume/*


##inputinclude/osgUtil/*
##inputinclude/osgParticle/*
 )
SET(CMAKE_CURRENT_SOURCE_DIR  ${PATHTOHEADER})
    message(${OSG_INCLUDES})
 link_directories(${Boost_LIBRARY_DIRS})
#SET(SOURCES_UI  osgQtOctreeFluid/mainwindow.ui )
#QT5_WRAP_UI(SOURCES_UI_H  ${SOURCES_UI})
#set(CMAKE_AUTOMOC ON)
SET(PROJECT_INCLUDES
#osg/Node
#osg/Geometry
#${OSG_INCLUDES}
)

set(obfuscate_shaders)
set(cpp_gen)
foreach(_file ${OSG_INCLUDES})
##  string(REPLACE "." "_" file_tro ${_file})
  set(file_tro "output/${_file}_pmoc.hpp")
set(file_troc "output/${_file}_pmoc.cpp")
   #set(file_troc )
   message (${_file})
   message (${file_troc})



  add_custom_command(

    OUTPUT ${file_tro} ${file_troc} 
    COMMAND mylex  ${_file}  -o ../output/${_file}
    WORKING_DIRECTORY ${PATHTOHEADER}
    DEPENDS inputinclude/${_file} mylex 
  )

  list(APPEND obfuscate_shaders ${file_tro})
  list(APPEND cpp_gen ${file_troc})
  endforeach()

#INCLUDE_DIRECTORIES( "../mylex/")
INCLUDE_DIRECTORIES( "output")
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    "${CMAKE_CURRENT_BINARY_DIR}/include"
    ${OPENSCENEGRAPH_INCLUDE_DIRS})
# INCLUDE_DIRECTORIES( ${BOOST_INCLUDE_PATH})
# include_directories(${Boost_INCLUDE_DIR})
# include_directories(${Qt5Widgets_INCLUDES})
# include_directories(${Qt5OpenGL_INCLUDES})
# include_directories(${Qt5Core_INCLUDES})
# include_directories(${Qt5_INCLUDES})
  
  

 # list(APPEND PROJECT_INCLUDES )
 #${PROJECT_INCLUDES} 
#QT5_WRAP_CPP( PROJECT_INCLUDES_MOC ${obfuscate_shaders}) 


#SOURCE_GROUP( "Interface Files" ".*frag")
#SOURCE_GROUP( "Resources Files" ".*\\.qrc")${QT_LIBRARIES}
#SET(QT_USE_QTOPENGL yes)

add_definitions(-DDOWNCASTER_LIBRARY)

ADD_LIBRARY(${PROJECT_NAME} SHARED ${cpp_gen} )


#qt5_use_modules(testcompil Widgets)

TARGET_LINK_LIBRARIES(${PROJECT_NAME}    
#${BOOST_REGEX_LIBRARIES}
${Boost_LIBRARIES}
${OPENTHREADS_LIBRARIES}  ${OPENSCENEGRAPH_LIBRARIES} ${OSGVOLUME_LIBRARY} ${OSGTEXT_LIBRARY} 
${OSGWORKS_LIBRARY} 
${OSGCAL2_LIBRARY}  ${OSGBULLET_LIBRARY} ${OSGAUDIO_LIBRARY} ${OSGMULTIGRID_LIBRARY} )

#qt5_use_modules(${PROJECT_NAME}  Quick Gui OpenGL Core Widgets)

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "DownCast Library"  COMPILE_FLAGS -std=c++11 )

