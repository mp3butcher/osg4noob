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


#create include file list
set(hpp_gen)
set(cpp_gen)
set(hpp_gen_custom)
set(cpp_gen_custom)
file(REMOVE includefileslist.hpp)
foreach(_file ${OSG_INCLUDES})
##  string(REPLACE "." "_" file_tro ${_file})
  set(file_tro ${CMAKE_BINARY_DIR}/src/output/osg/${_file}_pmoc.hpp)
set(file_troc ${CMAKE_BINARY_DIR}/src/output/osg/${_file}_pmoc.cpp)
  set(file_custom_tro ${CMAKE_BINARY_DIR}/src/output/osg/customCode/${_file}_pmoc.hpp)
set(file_custom_troc ${CMAKE_BINARY_DIR}/src/output/osg/customCode/${_file}_pmoc.cpp)
  

file(APPEND includefileslist.hpp "#include <${_file}>\n"  )
   #message (${PATHTOHEADER})
  # message (${_file})
  # message (${file_troc})

 
  list(APPEND hpp_gen ${file_tro})
  list(APPEND cpp_gen ${file_troc})
   list(APPEND hpp_gen_custom ${file_custom_tro})
   list(APPEND cpp_gen_custom ${file_custom_troc})
  endforeach()
 
if(1)
set(PROJECT_ADDITIONAL_INCLUDES
customCode/osg/AttribListModel.hpp
customCode/osg/PagedLodListModel.hpp
)
set(PROJECT_ADDITIONAL_SRC
customCode/osg/AttribListModel.cpp
customCode/osg/PagedLodListModel.cpp
)
endif()

#QT5_WRAP_CPP(ADDITIONAL_MOC  )

#generate Plugin from include file list (includefilelist.hpp)
  set(pluginfile_tro ${CMAKE_BINARY_DIR}/src/output/osg/plugin${PROJECT_NAME}.h)
set(pluginfile_troc ${CMAKE_BINARY_DIR}/src/output/osg/plugin${PROJECT_NAME}.cpp)
 

QT5_WRAP_CPP(PROJECT_INCLUDES_MOC_OSG    ${PROJECT_ADDITIONAL_INCLUDES}  )
 



#INCLUDE_DIRECTORIES( "../mylex/")
INCLUDE_DIRECTORIES( "${CMAKE_BINARY_DIR}/src/output/osg")
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    "${CMAKE_BINARY_DIR}/src/include"
    ${OPENSCENEGRAPH_INCLUDE_DIRS})
# INCLUDE_DIRECTORIES( ${BOOST_INCLUDE_PATH})
# include_directories(${Boost_INCLUDE_DIR})
# include_directories(${Qt5Widgets_INCLUDES})
# include_directories(${Qt5OpenGL_INCLUDES})
# include_directories(${Qt5Core_INCLUDES})
# include_directories(${Qt5_INCLUDES})







	#INCLUDE_DIRECTORIES("../../../MetaInterfaceLib")
	INCLUDE_DIRECTORIES("../../../MetaQMLInterfaceLib")
include_directories(
${CMAKE_CURRENT_BINARY_DIR}
"${CMAKE_CURRENT_BINARY_DIR}/include"
)


#set(CMAKE_AUTOMOC ON)

FIND_PACKAGE(PMOC REQUIRED)
 



 
set(pmoc_cpp)
PMOC_BOX_HPP(pmoc_cpp  "${OSG_INCLUDES}" "--conf ../output/ContextGenerator.conf --exportmacro   OSG_EXPORT" "${PATHTOHEADER}")

SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)
ADD_LIBRARY(${PROJECT_NAME} MODULE ${pmoc_cpp}    ${PROJECT_ADDITIONAL_SRC} #${PROJECT_INCLUDES_MOC_OSG}
${ADDITIONAL_MOC})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
MetaQQuickLibraryLib ${QSCINTILLA_LIBRARY}
${Boost_LIBRARIES}
${OPENSCENEGRAPH_LIBRARIES}
)

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module PMOC_osg"
LIBRARY_OUTPUT_DIRECTORY ${LIBRARY_OUTPUT_PATH}
LIBRARY_OUTPUT_DIRECTORY_DEBUG ${LIBRARY_OUTPUT_PATH}
LIBRARY_OUTPUT_DIRECTORY_RELEASE ${LIBRARY_OUTPUT_PATH}
  COMPILE_FLAGS -std=c++11 )
#
