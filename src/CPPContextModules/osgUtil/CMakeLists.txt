PROJECT(Module_osgUtil_MetaLibrary)
SET(PATH_TO_OSG_LIBRARY   "D:/SRC/OpenSceneGraph-3.2/lib/osg.lib")
ADD_DEFINITIONS(-DMETALIBRARY_osgUtil_LIBRARY )
set(PATHTOHEADER ${PROJECT_SOURCE_DIR}/../src/ )
	INCLUDE_directories(${PATHTOHEADER})
			SET(SOURCES_CPP 
osgUtil_MetaLib.cpp
osgUtil_AddRangeOperator.cpp
osgUtil_BaseOptimizerVisitor.cpp
osgUtil_CubeMapGenerator.cpp
osgUtil_CullVisitor.cpp
osgUtil_DelaunayConstraint.cpp
osgUtil_DelaunayTriangulator.cpp
osgUtil_DisplayRequirementsVisitor.cpp
osgUtil_DrawElementTypeSimplifier.cpp
osgUtil_DrawElementTypeSimplifierVisitor.cpp
osgUtil_EdgeCollector.cpp
osgUtil_GLObjectsOperation.cpp
osgUtil_GLObjectsVisitor.cpp
osgUtil_GeometryCollector.cpp
osgUtil_HalfWayMapGenerator.cpp
osgUtil_HighlightMapGenerator.cpp
osgUtil_Hit.cpp
osgUtil_IncrementalCompileOperation.cpp
osgUtil_IndexMeshVisitor.cpp
osgUtil_IntersectVisitor.cpp
osgUtil_IntersectionVisitor.cpp
osgUtil_Intersector.cpp
osgUtil_IntersectorGroup.cpp
osgUtil_LessDepthSortFunctor.cpp
osgUtil_LineSegmentIntersector.cpp
osgUtil_MultiplyRangeOperator.cpp
osgUtil_Optimizer.cpp
osgUtil_PerlinNoise.cpp
osgUtil_PickVisitor.cpp
osgUtil_PlaneIntersector.cpp
osgUtil_PolytopeIntersector.cpp
osgUtil_PositionalStateContainer.cpp
osgUtil_PrintVisitor.cpp
osgUtil_ReflectionMapGenerator.cpp
osgUtil_RenderBin.cpp
osgUtil_RenderLeaf.cpp
osgUtil_RenderStage.cpp
osgUtil_ReversePrimitiveFunctor.cpp
osgUtil_SceneGraphBuilder.cpp
osgUtil_SceneView.cpp
osgUtil_ShaderGenCache.cpp
osgUtil_ShaderGenVisitor.cpp
osgUtil_Simplifier.cpp
osgUtil_SmoothingVisitor.cpp
osgUtil_StateGraph.cpp
osgUtil_StateToCompile.cpp
osgUtil_Statistics.cpp
osgUtil_StatsVisitor.cpp
osgUtil_TangentSpaceGenerator.cpp
osgUtil_Tessellator.cpp
osgUtil_TransformAttributeFunctor.cpp
osgUtil_TransformCallback.cpp
osgUtil_TriStripVisitor.cpp
osgUtil_UpdateVisitor.cpp
osgUtil_VertexAccessOrderVisitor.cpp
osgUtil_VertexCacheMissVisitor.cpp
osgUtil_VertexCacheVisitor.cpp
osgUtil_dereference_clear.cpp
osgUtil_dereference_less.cpp
	)
	SET(PROJECT_INCLUDES
osgUtil_MetaLib.hpp
)
	INCLUDE_DIRECTORIES("../../../../MetaInterfaceLib")
include_directories(
${CMAKE_CURRENT_BINARY_DIR}
"${CMAKE_CURRENT_BINARY_DIR}/include"
)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/bin/PlugIns)

ADD_LIBRARY(${PROJECT_NAME} MODULE ${SOURCES_CPP})
TARGET_LINK_LIBRARIES(${PROJECT_NAME}
MetaLibraryLib
${Boost_LIBRARIES}
)
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PROJECT_LABEL "Module CPPContext_osgUtil"  COMPILE_FLAGS -std=c++11 )
