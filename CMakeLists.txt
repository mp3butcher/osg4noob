PROJECT(AutoEditor2)
include_directories(../osgQtQuick/include  )
if(WIN32)
SET(OSGBULLET_LIBRARY  "D:/SRC/bullet/lib/Release/LinearMath.lib" 
#"D:/SRC/bullet/lib/Release/BulletMultiThreaded.lib" 
"D:/SRC/bullet/lib/Release/BulletCollision.lib" 
"D:/SRC/bullet/lib/Release/BulletDynamics.lib" 
"D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbCollision.lib" 
"D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbDynamics.lib"  
"D:/SRC/OpenSceneGraph-3.2/osgbullet/lib/Release/osgbInteraction.lib")

include_directories("D:/SRC/Bullet/src")
set(OSGAUDIO_LIBRARY 
"D:/SRC/OpenSceneGraph-3.2/osgaudio/lib/Release/osgaudio.lib" 
"D:/SRC/OpenSceneGraph-3.2/osgaudio/lib/Release/openalpp.lib")
SET(OSGCAL2_LIBRARY   "D:/SRC/osgCal2/lib/Release/osgCal.lib")
SET(OSGWORKS_LIBRARY
  "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwControls.lib"  
"D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwMX.lib"
 "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwQuery.lib"
  "D:/SRC/OpenSceneGraph-3.2/osgworks/lib/Release/osgwTools.lib")
  	
include_directories("D:/SRC/cal3dXGIT/src" "D:/SRC/openal/openal-soft-1.11.753/include" "D:/SRC/openal/freealut.git/trunk/include" "D:/SRC/openal/vorbis/include" "D:/SRC/openal/libogg/include")
SET(OPENAL_LIBRARIES "D:/SRC/openal/freealut.git/trunk/src/Release/alut.lib" "D:/SRC/openal/libogg/win32/VS2010/x64/Release/libogg.lib"   "D:/SRC/openal/openal-soft-1.11.753/Release/OpenAL32.lib" "D:/SRC/openal/vorbis/win32/VS2010/x64/Release/libvorbisfile.lib" "d:/SRC/openal/vorbis/win32/VS2010/x64/Release/libvorbis.lib")
endif()

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

find_package(Qt5 COMPONENTS
   Quick
	Core
	Gui
   OpenGL
 )
  



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

FILE(TO_CMAKE_PATH ${CMAKE_HOME_DIRECTORY}/CMake GL3FLuidVolumeOctree_MODULE_PATH)
SET (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${GL3FLuidVolumeOctree_MODULE_PATH})

find_package(QScintilla REQUIRED)
find_package(OpenSceneGraph 3.2.0 REQUIRED
    osg
	osgAnimation
    osgDB
    osgGA
    osgUtil
    osgViewer
    osgText
	osgPresentation
	osgManipulator
	osgFX
    osgVolume
    osgParticle
	osgWidget
	osgSim
	osgTerrain
	osgShadow

	)



INCLUDE_directories(${OSG_INCLUDE_DIR})


FILE(GLOB_RECURSE  UI_GENERATOR_CONFIG_FILE UI_Generator.conf)
if(  UI_GENERATOR_CONFIG_FILE STREQUAL "")
message("UI_Generator.conf not found!!!!!!!!!")
endif()
FILE(GLOB_RECURSE  CONTEXT_GENERATOR_CONFIG_FILE ContextGenerator.conf)
if(  CONTEXT_GENERATOR_CONFIG_FILE STREQUAL "")
message("ContextGenerator.conf not found!!!!!!!!!")
endif()
#HEADER TO SCAN are in current directory
set (PATHTOHEADER ${PROJECT_SOURCE_DIR}/../src/)

INCLUDE_directories(${PATHTOHEADER})
 FILE(GLOB_RECURSE  OSG_INCLUDES RELATIVE ${PATHTOHEADER}/inputinclude/osg  ${PATHTOHEADER}/inputinclude/osg/*[^.]*
 #inputinclude/osg/*
#inputinclude/osgUtil/*
#inputinclude/osgParticle/*
 )
SET(CMAKE_CURRENT_SOURCE_DIR inputinclude)
 #   message(${OSG_INCLUDES})
 link_directories(${Boost_LIBRARY_DIRS})
#SET(SOURCES_UI  osgQtOctreeFluid/mainwindow.ui )
#QT5_WRAP_UI(SOURCES_UI_H  ${SOURCES_UI})

SET(PROJECT_INCLUDES
#osg/Node
#osg/Geometry
${OSG_INCLUDES}
)

INCLUDE_DIRECTORIES("../MetaInterfaceLib")
INCLUDE_DIRECTORIES("../MetaQQuickInterfaceLib")
#INCLUDE_DIRECTORIES( "../mylex/")
INCLUDE_DIRECTORIES( "src")
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
  
  
SET(${configUIfile} REQUIRED)
set(h_gen)
set(cpp_gen)
foreach(_file ${PROJECT_INCLUDES})
#GUI COmponents
  set(file_tro "${_file}QModel_pmoc.hpp")
set(file_troc "${_file}QModel_pmoc.cpp")
 #list(APPEND h_gen ${file_tro}) #CANTBE KNOW AT ADVANCE...
 #list(APPEND cpp_gen ${file_troc})
endforeach()
 #..SO SEARCH HARD
# FILE(GLOB_RECURSE  SOURCES_HPP RELATIVE ${PROJECT_SOURCE_DIR}  src/*.hpp)
#  FILE(GLOB_RECURSE  SOURCES_CPP RELATIVE ${PROJECT_SOURCE_DIR}  src/*.cpp)
SET(SOURCES_CPP
osgQtWindowing/mainwindow.cpp 
osgQtWindowing/QtToOSGView.cpp
   UIEditorMAIN.cpp
   src/UIEditor.cpp
baseqwindow.cpp
TreeNodeModel.cpp
TreeNodeItem.cpp
#fok the declarativeextension plugin colorcomponentsplugin/colorcomponentsplugin.cpp
colorcomponentsplugin/colorcomponents.cpp
   )
SET (SOURCES_HPP 
baseqwindow.hpp
osgQtWindowing/mainwindow.h 
   osgQtWindowing/QtToOSGView.h 
   UIEditorMAIN.h
   src/UIEditor.hpp
TreeNodeModel.h
TreeNodeItem.h
#fok the declarativeextension plugin colorcomponentsplugin/colorcomponentsplugin.h
colorcomponentsplugin/colorcomponents.h

   
   )
SET(SOURCES_UI  mainwindow.ui )
QT5_WRAP_UI(SOURCES_UI_H  ${SOURCES_UI})
 
#set(CMAKE_AUTOMOC ON)
list(APPEND SOURCES_CPP ${SOURCES_UI_H})


#Meta Object Factory (all generated)
#set(file_tro "src/CPPContext_pmoc.hpp")
#set(file_troc "src/CPPContext_pmoc.cpp")
#list(APPEND h_gen ${file_tro})
# list(APPEND cpp_gen ${file_troc})
#Generated GUI Editor skeleton(holes to fill)
 set(file_tro "src/UIEditor_pmoc.hpp")
set(file_troc "src/UIEditor_pmoc.cpp")
# list(APPEND h_gen ${file_tro})
# list(APPEND cpp_gen ${file_troc})

 

subdirs(
src/CPPContextModules/osg
src/UIEditorModules/osg
src/CPPContextModules/osgUtil
src/UIEditorModules/osgUtil
)
foreach(_file ${OSG_INCLUDES})
##  string(REPLACE "." "_" file_tro ${_file})
  set(file_tro "output/${_file}_pmoc.hpp")
set(file_troc "src/CPPContextModules/osg/osg_${_file}.cpp")
list(APPEND generated ${file_troc})
endforeach()

message( ${generated}  )
if  (DYNAMIC_OPENSCENEGRAPH)

else()  
 #call the precompilo to generate "langage helper" ${SOURCES_HPP} UIEditorMAIN.hsrc/UIEditor.cpp
   #message (${file_troc})
message("mylex4dll --generateCPPContext ${CONTEXT_GENERATOR_CONFIG_FILE} -o ../../EditorGenerator2/src  --generateCMakeLists osg  --generateGUIEditor ${UI_GENERATOR_CONFIG_FILE} ")

  add_custom_command(
    OUTPUT ${cpp_gen}   ${generated} 
    COMMAND mylex4dll --generateCPPContext ${CONTEXT_GENERATOR_CONFIG_FILE} -o ../../EditorGenerator2/src  --generateCMakeLists osg  --generateGUIEditor ${UI_GENERATOR_CONFIG_FILE} 
    WORKING_DIRECTORY ${PATHTOHEADER}/inputinclude
    DEPENDS  mylex4dll
  )
endif()
#  list(APPEND obfuscate_shaders ${file_tro})
#  list(APPEND cpp_gen ${file_troc})

 # list(APPEND PROJECT_INCLUDES )
 #${PROJECT_INCLUDES} 

#QT5_WRAP_CPP(${PROJECT_NAME} PROJECT__MOC ${h_gen}     ${SOURCES_CPP}) 

#SOURCE_GROUP( "Interface Files" ".*frag")
#SOURCE_GROUP( "Resources Files" ".*\\.qrc")${QT_LIBRARIES}
#SET(QT_USE_QTOPENGL yes)

message(${SOURCES_HPP})
QT5_WRAP_CPP(PROJECT_INCLUDES_MOC1  ${SOURCES_HPP}  ) 
ADD_EXECUTABLE(${PROJECT_NAME} ${cpp_gen} ${h_gen} ${SOURCES_CPP}  ${PROJECT_INCLUDES_MOC1})


#qt5_use_modules(${PROJECT_NAME}  Widgets)

TARGET_LINK_LIBRARIES(${PROJECT_NAME}    
#${BOOST_REGEX_LIBRARIES}
osgQtQuick
MetaLibraryLib
MetaQQuickLibraryLib
${Boost_LIBRARIES}
${OPENTHREADS_LIBRARIES}  ${OPENSCENEGRAPH_LIBRARIES} ${OSGVOLUME_LIBRARY}  ${OSGSHADOW_LIBRARY}  ${OSGUTIL_LIBRARY}  ${OSGTEXT_LIBRARY} ${OSGPARTICLES_LIBRARY} ${OSGTERRAIN_LIBRARY} ${OSGSIM_LIBRARY} ${OSGVIEWER_LIBRARY} ${OSGWIDGET_LIBRARY}
 ${OSGBULLET_LIBRARY} ${OSGAUDIO_LIBRARY} ${OSGWORKS_LIBRARY} ${OSGCAL2_LIBRARY} ${OSGWORKS_LIBRARY} ${OSGBULLET_LIBRARY} ${OSGAUDIO_LIBRARY}
${QSCINTILLA_LIBRARY}
)

qt5_use_modules(${PROJECT_NAME}  Quick Gui OpenGL Core Widgets )

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Application CPPLibAutoEditor2" COMPILE_FLAGS -std=c++11  )
#
