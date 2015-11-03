PROJECT(Module_QQQosg_Library)
SET(PATH_TO_osg_LIBRARY   "D:/SRC/OpenSceneGraph-3.2/lib/osg.lib")

ADD_DEFINITIONS(-DosgPMOC_LIBRARY)
set(PATHTOHEADEER ${PROJECT_SOURCE_DIR}/../src/ )
	INCLUDE_directories(${PATHTOHEADEER})

find_package(Qt5 COMPONENTS
   Quick
	Core
	Gui
   OpenGL
 )

find_package(OpenSceneGraph 3.2.0 REQUIRED
    osg
)

INCLUDE_directories(${OSG_INCLUDE_DIR})
INCLUDE_directories(${CMAKE_BINARY_DIR}/src/output)
#INCLUDE_directories(${CMAKE_BINARY_DIR}/osgQtQuick/include)

#HEADER TO SCAN are in current directory
set (PATHTOHEADER ${CMAKE_BINARY_DIR}/src/inputinclude )
message("PATHTOHEDER" ${PATHTOHEADER})

INCLUDE_directories(${PATHTOHEADER})
message("projectsourcedir ${CMAKE_BINARY_DIR}/src/inputinclude")
 FILE(GLOB_RECURSE  OSG_INCLUDES RELATIVE ${CMAKE_BINARY_DIR}/src/inputinclude      ${CMAKE_BINARY_DIR}/src/inputinclude/osg/*
)

 
#SET(CMAKE_CURRENT_SOURCE_DIR  ${PATHTOHEADER})
    message(${OSG_INCLUDES})
 link_directories(${Boost_LIBRARY_DIRS})
#SET(SOURCES_UI  osgQtOctreeFluid/mainwindow.ui )
#QT5_WRAP_UI(SOURCES_UI_H  ${SOURCES_UI})

SET(PROJECT_INCLUDES
#osg/Node
#osg/Geometry
#${OSG_INCLUDES}
)

set(hpp_gen)
set(cpp_gen)
file(REMOVE fileslist.txt)
foreach(_file ${OSG_INCLUDES})
##  string(REPLACE "." "_" file_tro ${_file})
set(file_tro ${CMAKE_BINARY_DIR}/src/output/osg/${_file}_pmoc.hpp)
set(file_troc ${CMAKE_BINARY_DIR}/src/output/osg/${_file}_pmoc.cpp)
set(file_custom_tro ${CMAKE_BINARY_DIR}/src/output/osg/customCode/${_file}_pmoc.hpp)
set(file_custom_troc ${CMAKE_BINARY_DIR}/src/output/osg/customCode/${_file}_pmoc.cpp)

file(APPEND fileslist.txt "#include <${_file}>\n"  )
   message (${PATHTOHEADER})
   message (${_file})
   message (${file_troc})
if(0)
 add_custom_command(
    OUTPUT ${file_tro} ${file_troc}  #BEWARE: remove stubs after first generation in order not to be remove on clean  ${file_custom_tro} ${file_custom_troc}
    COMMAND pmoc  ${_file}  -o ../output/osg/ --conf ../output/ContextGenerator.conf
    DEPENDS pmoc  ${PATHTOHEADER}/${_file}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
endif()
  list(APPEND hpp_gen ${file_tro})
  list(APPEND cpp_gen ${file_troc})
   list(APPEND hpp_gen ${file_custom_tro})
   list(APPEND cpp_gen ${file_custom_troc})
  endforeach()
 
set(PROJECT_ADDITIONAL_INCLUDES
customCode/osg/AttribListModel.hpp
customCode/osg/PagedLodListModel.hpp
)
set(PROJECT_ADDITIONAL_SRC
customCode/osg/AttribListModel.cpp
customCode/osg/PagedLodListModel.cpp
) 

QT5_WRAP_CPP(PROJECT_INCLUDES_MOC_OSG   ${PROJECT_ADDITIONAL_INCLUDES}  ${hpp_gen} )
#QT5_WRAP_CPP(ADDITIONAL_MOC  )

#generate Plugin from filelist.txt
  set(pluginfile_tro ${CMAKE_BINARY_DIR}/src/output/osg/plugin.h)
set(pluginfile_troc ${CMAKE_BINARY_DIR}/src/output/osg/plugin.cpp)

if(0)
add_custom_command(

    OUTPUT ${pluginfile_tro} ${pluginfile_troc}
    COMMAND pmoc  --genplugin ../output/osg/fileslist.txt --conf ../output/ContextGenerator.conf -o ../output/osg/plugin
    DEPENDS pmoc ${hpp_gen} ${PROJECT_INCLUDES_MOC_OSG}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
else()
#FAKE just for depends
add_custom_command(
    OUTPUT ${pluginfile_tro} ${pluginfile_troc}
    COMMAND echo off
    DEPENDS  ${hpp_gen} ${PROJECT_INCLUDES_MOC_OSG}
WORKING_DIRECTORY ${PATHTOHEADER}
  )
endif()  
 list(APPEND hpp_gen ${pluginfile_tro})
 list(APPEND cpp_gen ${pluginfile_troc})

#INCLUDE_DIRECTORIES( "../pmoc/")
INCLUDE_DIRECTORIES( "${CMAKE_BINARY_DIR}/src/output/osg")
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    "${CMAKE_BINARY_DIR}/src/include"
    ${OPENSCENEGRAPH_INCLUDE_DIRS})
 

	INCLUDE_DIRECTORIES("../../../include")
include_directories(
${CMAKE_CURRENT_BINARY_DIR}
"${CMAKE_CURRENT_BINARY_DIR}/include"
)


#set(CMAKE_AUTOMOC ON)


SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)
ADD_LIBRARY(${PROJECT_NAME} MODULE ${cpp_gen}  ${PROJECT_ADDITIONAL_SRC} #${PROJECT_INCLUDES_MOC_OSG}
${ADDITIONAL_MOC})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
#MetaQQuickLibraryLib 
"../../../lib/msvc2013-x64/lib/MetaQQuickLibraryLib"
${QSCINTILLA_LIBRARY}
${OPENSCENEGRAPH_LIBRARIES} 

)
 
qt5_use_modules(${PROJECT_NAME} Quick Gui OpenGL Core Widgets)
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module UIEditor_osg"  COMPILE_FLAGS -std=c++11  
 LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
 )
#
