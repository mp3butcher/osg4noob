PROJECT(Module_QQQosgParticle_Library)
SET(PATH_TO_osgParticle_LIBRARY   "D:/SRC/OpenSceneGraph-3.2/lib/osgParticle.lib")

ADD_DEFINITIONS(-DosgParticlePMOC_LIBRARY)
set(PATHTOHEADEER ${PROJECT_SOURCE_DIR}/../src/ )
	INCLUDE_directories(${PATHTOHEADEER})

find_package(Qt5 COMPONENTS
   Quick
	Core
	Gui
   OpenGL
 )

find_package(OpenSceneGraph 3.2.0 REQUIRED
    osgParticle
)

INCLUDE_directories(${OSG_INCLUDE_DIR})
INCLUDE_directories(${CMAKE_BINARY_DIR}/src/output)
INCLUDE_directories(${CMAKE_BINARY_DIR}/src/output/osg)

#HEADER TO SCAN are in current directory
set (PATHTOHEADER ${CMAKE_BINARY_DIR}/src/inputinclude )
message("PATHTOHEDER" ${PATHTOHEADER})

INCLUDE_directories(${PATHTOHEADER})
message("projectsourcedir ${CMAKE_BINARY_DIR}/src/inputinclude")
 FILE(GLOB_RECURSE  OSG_INCLUDES RELATIVE ${CMAKE_BINARY_DIR}/src/inputinclude      ${CMAKE_BINARY_DIR}/src/inputinclude/osgParticle/*
)


#SET(CMAKE_CURRENT_SOURCE_DIR  ${PATHTOHEADER})
    message(${OSG_INCLUDES})
 link_directories(${Boost_LIBRARY_DIRS})
#SET(SOURCES_UI  osgParticleQtOctreeFluid/mainwindow.ui )
#QT5_WRAP_UI(SOURCES_UI_H  ${SOURCES_UI})

SET(PROJECT_INCLUDES
#osgParticle/Node
#osgParticle/Geometry
#${OSG_INCLUDES}
)

set(hpp_gen)
set(cpp_gen)
file(REMOVE fileslist.txt)
foreach(_file ${OSG_INCLUDES})
##  string(REPLACE "." "_" file_tro ${_file})
  set(file_tro ${CMAKE_BINARY_DIR}/src/output/osgParticle/${_file}_pmoc.hpp)
set(file_troc ${CMAKE_BINARY_DIR}/src/output/osgParticle/${_file}_pmoc.cpp)
  set(file_custom_tro ${CMAKE_BINARY_DIR}/src/output/osgParticle/customCode/${_file}_pmoc.hpp)
set(file_custom_troc ${CMAKE_BINARY_DIR}/src/output/osgParticle/customCode/${_file}_pmoc.cpp)
   #set(file_troc )

file(APPEND fileslist.txt "#include <${_file}>\n"  )
   message (${PATHTOHEADER})
   message (${_file})
   message (${file_troc})

if(0)

 add_custom_command(
    OUTPUT ${file_tro} ${file_troc}  #BEWARE: remove stubs after first generation in order not to be remove on clean  ${file_custom_tro} ${file_custom_troc}
    COMMAND pmoc  ${_file}  -o ../output/osgParticle/ --conf ../output/ContextGenerator.conf
    DEPENDS pmoc  ${PATHTOHEADER}/${_file}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
endif()
  list(APPEND hpp_gen ${file_tro})
  list(APPEND cpp_gen ${file_troc})
   list(APPEND hpp_gen ${file_custom_tro})
   list(APPEND cpp_gen ${file_custom_troc})
  endforeach()

if(0)
set(PROJECT_ADDITIONAL_INCLUDES
customCode/osgParticle/AttribListModel.hpp
)
set(PROJECT_ADDITIONAL_SRC
customCode/osgParticle/AttribListModel.cpp
)
endif()

QT5_WRAP_CPP(PROJECT_INCLUDES_MOC_OSG    ${PROJECT_ADDITIONAL_INCLUDES}  ${hpp_gen} )
#QT5_WRAP_CPP(ADDITIONAL_MOC  )
if(0)
#generate Plugin from filelist.txt
  set(pluginfile_tro ${CMAKE_BINARY_DIR}/src/output/osgParticle/plugin.h)
set(pluginfile_troc ${CMAKE_BINARY_DIR}/src/output/osgParticle/plugin.cpp)
add_custom_command(

    OUTPUT ${pluginfile_tro} ${pluginfile_troc}
    COMMAND pmoc  --genplugin ../output/osgParticle/fileslist.txt --conf ../output/ContextGenerator.conf -o ../output/osgParticle/plugin
    DEPENDS pmoc ${hpp_gen} ${PROJECT_INCLUDES_MOC_OSG}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
endif()
 list(APPEND hpp_gen ${pluginfile_tro})
 list(APPEND cpp_gen ${pluginfile_troc})

#INCLUDE_DIRECTORIES( "../pmoc/")
INCLUDE_DIRECTORIES( "${CMAKE_BINARY_DIR}/src/output/osgParticle")
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    "${CMAKE_BINARY_DIR}/src/include"
    ${OPENSCENEGRAPH_INCLUDE_DIRS})
	
	INCLUDE_DIRECTORIES("../../../include")
include_directories(
${CMAKE_CURRENT_BINARY_DIR}
"${CMAKE_CURRENT_BINARY_DIR}/include"
)

 


SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)
ADD_LIBRARY(${PROJECT_NAME} MODULE ${cpp_gen}  ${PROJECT_ADDITIONAL_SRC}  #${PROJECT_INCLUDES_MOC_OSG}
${ADDITIONAL_MOC})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
#MetaQQuickLibraryLib ${QSCINTILLA_LIBRARY}
"../../../lib/msvc2013-x64/lib/MetaQQuickLibraryLib.lib"
${Boost_LIBRARIES}
${OPENSCENEGRAPH_LIBRARIES}
)
qt5_use_modules(${PROJECT_NAME} Quick Gui OpenGL Core Widgets)

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module UIEditor_osgParticle"  COMPILE_FLAGS -std=c++11 
 LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
 )