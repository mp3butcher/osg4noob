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

 
if(0)
set(PROJECT_ADDITIONAL_INCLUDES
customCode/osgParticle/AttribListModel.hpp
)
set(PROJECT_ADDITIONAL_SRC
customCode/osgParticle/AttribListModel.cpp
)
endif()

 
QT5_WRAP_CPP(PROJECT_INCLUDES_MOC_OSG    ${PROJECT_ADDITIONAL_INCLUDES}   ) 
#INCLUDE_DIRECTORIES( "../mylex/")
INCLUDE_DIRECTORIES( "${CMAKE_BINARY_DIR}/src/output/osgParticle")
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


FIND_PACKAGE(PMOC REQUIRED)
  
set(pmoc_cpp)
PMOC_BOX_HPP(pmoc_cpp  "${OSG_INCLUDES}" "--conf ../output/ContextGenerator.conf --exportmacro   OSGPARTICLE_EXPORT" "${PATHTOHEADER}")
SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)
ADD_LIBRARY(${PROJECT_NAME} MODULE ${cpp_gen}  ${cpp_gen_custom} ${PROJECT_ADDITIONAL_SRC}  #${PROJECT_INCLUDES_MOC_OSG}
${ADDITIONAL_MOC})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
MetaQQuickLibraryLib ${QSCINTILLA_LIBRARY}
${Boost_LIBRARIES}
${OPENSCENEGRAPH_LIBRARIES}
)
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module UIEditor_osgParticle"
LIBRARY_OUTPUT_DIRECTORY ${LIBRARY_OUTPUT_PATH}
LIBRARY_OUTPUT_DIRECTORY_DEBUG ${LIBRARY_OUTPUT_PATH}
LIBRARY_OUTPUT_DIRECTORY_RELEASE ${LIBRARY_OUTPUT_PATH} 
  COMPILE_FLAGS -std=c++11 )
#
