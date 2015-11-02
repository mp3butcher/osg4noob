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
   #set(file_troc )

file(APPEND fileslist.txt "#include <${_file}>\n"  )
   message (${PATHTOHEADER})
   message (${_file})
   message (${file_troc})

if(0)
set(BoxerOutputs)
 list(APPEND BoxerOutputs ${file_tro})
 list(APPEND BoxerOutputs ${file_troc})
if(not EXISTS ${file_custom_tro})
 list(APPEND BoxerOutputs ${file_custom_tro})
endif()
if(not EXISTS ${file_custom_troc})
 list(APPEND BoxerOutputs ${file_custom_troc})
endif()

  add_custom_command(
    OUTPUT ${BoxerOutputs}
    COMMAND mylex  ${_file}  -o ../output/osg/ --conf ../output/ContextGenerator.conf
    DEPENDS mylex
WORKING_DIRECTORY ${PATHTOHEADER}

  )
else()
 add_custom_command(
    OUTPUT ${file_tro} ${file_troc}  #BEWARE: remove stubs after first generation in order not to be remove on clean  ${file_custom_tro} ${file_custom_troc}
    COMMAND mylex  ${_file}  -o ../output/osg/ --conf ../output/ContextGenerator.conf
    DEPENDS mylex  ${PATHTOHEADER}/${_file}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
endif()
  list(APPEND hpp_gen ${file_tro})
  list(APPEND cpp_gen ${file_troc})
   list(APPEND hpp_gen ${file_custom_tro})
   list(APPEND cpp_gen ${file_custom_troc})
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

QT5_WRAP_CPP(PROJECT_INCLUDES_MOC_OSG    ${PROJECT_ADDITIONAL_INCLUDES}  ${hpp_gen} )
#QT5_WRAP_CPP(ADDITIONAL_MOC  )

#generate Plugin from filelist.txt
  set(pluginfile_tro ${CMAKE_BINARY_DIR}/src/output/osg/plugin.h)
set(pluginfile_troc ${CMAKE_BINARY_DIR}/src/output/osg/plugin.cpp)
add_custom_command(

    OUTPUT ${pluginfile_tro} ${pluginfile_troc}
    COMMAND mylex  --genplugin ../output/osg/fileslist.txt --conf ../output/ContextGenerator.conf -o ../output/osg/plugin
    DEPENDS mylex ${hpp_gen} ${PROJECT_INCLUDES_MOC_OSG}
WORKING_DIRECTORY ${PATHTOHEADER}

  )
 list(APPEND hpp_gen ${pluginfile_tro})
 list(APPEND cpp_gen ${pluginfile_troc})

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






#ADD_LIBRARY(${PROJECT_NAME} SHARED ${cpp_gen} )


#qt5_use_modules(testcompil Widgets)

#TARGET_LINK_LIBRARIES(${PROJECT_NAME}
#${BOOST_REGEX_LIBRARIES}
#${Boost_LIBRARIES}
#${OPENTHREADS_LIBRARIES}  ${OPENSCENEGRAPH_LIBRARIES} ${OSGVOLUME_LIBRARY} #${OSGTEXT_LIBRARY} #
#${OSGWORKS_LIBRARY}
#${OSGCAL2_LIBRARY}  ${OSGBULLET_LIBRARY} ${OSGAUDIO_LIBRARY} ${OSGMULTIGRID_LIBRARY} )

#qt5_use_modules(${PROJECT_NAME}  Quick Gui OpenGL Core Widgets)

#SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "DownCast Library"  COMPILE_FLAGS -std=c++11 )


	#INCLUDE_DIRECTORIES("../../../MetaInterfaceLib")
	INCLUDE_DIRECTORIES("../../../MetaQMLInterfaceLib")
include_directories(
${CMAKE_CURRENT_BINARY_DIR}
"${CMAKE_CURRENT_BINARY_DIR}/include"
)


#set(CMAKE_AUTOMOC ON)


SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)
ADD_LIBRARY(${PROJECT_NAME} MODULE ${cpp_gen}  ${PROJECT_ADDITIONAL_SRC} #${PROJECT_INCLUDES_MOC_OSG}
${ADDITIONAL_MOC})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
MetaQQuickLibraryLib ${QSCINTILLA_LIBRARY}
${OPENSCENEGRAPH_LIBRARIES} 

)
 
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module UIEditor_osg"  COMPILE_FLAGS -std=c++11  
 LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
LIBRARY_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_HOME_DIRECTORY}/bin/PlugIns
 )
#
