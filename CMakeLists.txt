#Fluid Opengl no cuda


# Note set CUDA_BUILD_EMULATION to OFF to enable Device mode compilation.

cmake_minimum_required(VERSION 2.8.9)

project(osg4noob)
# automatically add CMAKE_CURRENT_SOURCE_DIR and CMAKE_CURRENT_BINARY_DIR to the include directories in every directory
#SET(CMAKE_INCLUDE_CURRENT_DIR yes)
set(CMAKE_PREFIX_PATH "$ENV{QTDIR}/lib/cmake;$ENV{WINSDKDIR};${CMAKE_PREFIX_PATH}"   )

#set(CMAKE_PREFIX_PATH    ${CMAKE_PREFIX_PATH} )
#SET(CMAKE_IMPORT_LIBRARY_SUFFIX ".a")
#SET(CMAKE_STATIC_LIBRARY_SUFFIX ".a")
#set (CMAKE_CXX_COMPILER D:\Qt\Qt5.1.1mingw\Tools\mingw48_32\bin\mingw32-g++.exe)
#FILE(TO_CMAKE_PATH ${CMAKE_HOME_DIRECTORY}/CMake  INSTANCING_MODULE_PATH)
SET (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_HOME_DIRECTORY}/CMake)
#find_package(osgCal REQUIRED)
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

#set(CMAKE_PREFIX_PATH /usr/lib/x86_64-linux-gnu/cmake ${CMAKE_PREFIX_PATH})

#I
#find_package(CUDA QUIET REQUIRED)
# find_package(CUDA 2.1)
# find_package(CUDA 2.2)
# find_package(CUDA 2.3)
# find_package(CUDA 2.1 REQUIRED)
# find_package(CUDA 2.2 REQUIRED)
# find_package(CUDA 2.3 REQUIRED)
# find_package(CUDA 2.1 EXACT)
# find_package(CUDA 2.2 EXACT)
# find_package(CUDA 2.3 EXACT)
# find_package(CUDA 2.1 EXACT REQUIRED)
# find_package(CUDA 2.2 EXACT REQUIRED)
# find_package(CUDA 2.3 EXACT REQUIRED)
# find_package(CUDA 2.2 EXACT QUIET REQUIRED)

# if (CUDA_FOUND)
#   message("CUDA found")
# else()
#   message("CUDA not found")
# endif()

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin)
SET(RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_HOME_DIRECTORY}/bin)
SET(RUNTIME_OUTPUT_DIRECTORY_RELASE ${CMAKE_HOME_DIRECTORY}/bin)
SET(EXECUTABLE_OUTPUT_PATH_DEBUG ${CMAKE_HOME_DIRECTORY}/ar )
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "../bin/")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "../bin/")
#SET(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/bin)
#ADD_DEFINITIONS(-D${CMAKE_BUILD_TYPE})

SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin)
SET(MODULE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/ar)
SET(CMAKE_DEBUG_POSTFIX "d")  

subdirs(
#  src/output/bullet
  src/output/osg
#src/output/osgUtil
src/output/osgParticle
#src/output/osgShadow
#src/output/osgGA
#src/output/osgDB
#src/output/osgAnimation
#src/output/osgCal 
#src/output/osgManipulator
#src/output/osgViewer
#src/output/osgMG
#src/output/osgVolume
#pmoc
#MetaQMLInterfaceLib
 
osgGraphicalEditor
  #EditorGenerator2
 # EditorGenerator
  osgQtQuick
  )
