#include "osgUtil_AddRangeOperator.hpp"
#include "osgUtil_BaseOptimizerVisitor.hpp"
#include "osgUtil_CubeMapGenerator.hpp"
#include "osgUtil_CullVisitor.hpp"
#include "osgUtil_DelaunayConstraint.hpp"
#include "osgUtil_DelaunayTriangulator.hpp"
#include "osgUtil_DisplayRequirementsVisitor.hpp"
#include "osgUtil_DrawElementTypeSimplifier.hpp"
#include "osgUtil_DrawElementTypeSimplifierVisitor.hpp"
#include "osgUtil_EdgeCollector.hpp"
#include "osgUtil_GLObjectsOperation.hpp"
#include "osgUtil_GLObjectsVisitor.hpp"
#include "osgUtil_GeometryCollector.hpp"
#include "osgUtil_HalfWayMapGenerator.hpp"
#include "osgUtil_HighlightMapGenerator.hpp"
#include "osgUtil_Hit.hpp"
#include "osgUtil_IncrementalCompileOperation.hpp"
#include "osgUtil_IndexMeshVisitor.hpp"
#include "osgUtil_IntersectVisitor.hpp"
#include "osgUtil_IntersectionVisitor.hpp"
#include "osgUtil_Intersector.hpp"
#include "osgUtil_IntersectorGroup.hpp"
#include "osgUtil_LessDepthSortFunctor.hpp"
#include "osgUtil_LineSegmentIntersector.hpp"
#include "osgUtil_MultiplyRangeOperator.hpp"
#include "osgUtil_Optimizer.hpp"
#include "osgUtil_PerlinNoise.hpp"
#include "osgUtil_PickVisitor.hpp"
#include "osgUtil_PlaneIntersector.hpp"
#include "osgUtil_PolytopeIntersector.hpp"
#include "osgUtil_PositionalStateContainer.hpp"
#include "osgUtil_PrintVisitor.hpp"
#include "osgUtil_ReflectionMapGenerator.hpp"
#include "osgUtil_RenderBin.hpp"
#include "osgUtil_RenderLeaf.hpp"
#include "osgUtil_RenderStage.hpp"
#include "osgUtil_ReversePrimitiveFunctor.hpp"
#include "osgUtil_SceneGraphBuilder.hpp"
#include "osgUtil_SceneView.hpp"
#include "osgUtil_ShaderGenCache.hpp"
#include "osgUtil_ShaderGenVisitor.hpp"
#include "osgUtil_Simplifier.hpp"
#include "osgUtil_SmoothingVisitor.hpp"
#include "osgUtil_StateGraph.hpp"
#include "osgUtil_StateToCompile.hpp"
#include "osgUtil_Statistics.hpp"
#include "osgUtil_StatsVisitor.hpp"
#include "osgUtil_TangentSpaceGenerator.hpp"
#include "osgUtil_Tessellator.hpp"
#include "osgUtil_TransformAttributeFunctor.hpp"
#include "osgUtil_TransformCallback.hpp"
#include "osgUtil_TriStripVisitor.hpp"
#include "osgUtil_UpdateVisitor.hpp"
#include "osgUtil_VertexAccessOrderVisitor.hpp"
#include "osgUtil_VertexCacheMissVisitor.hpp"
#include "osgUtil_VertexCacheVisitor.hpp"
#include "osgUtil_dereference_clear.hpp"
#include "osgUtil_dereference_less.hpp"
#include "MetaLibraryRegistry.h"
//#include <pmoc.blackboard.hpp>
#include "osgUtil_MetaLib.hpp"
using namespace pmoc;
REGISTER_METALIBRARY(osgUtil_CPPContext);
 osgUtil_CPPContext::osgUtil_CPPContext():MetaLibrary("osgUtil"){
_components.insert( new osgUtil_AddRangeOperator()); 
_components.insert( new osgUtil_BaseOptimizerVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_CubeMapGenerator()); 
addDependency("osg");
_components.insert( new osgUtil_CullVisitor()); 
addDependency("osg");
addDependency("osg");
_components.insert( new osgUtil_DelaunayConstraint()); 
addDependency("osg");
_components.insert( new osgUtil_DelaunayTriangulator()); 
addDependency("osg");
_components.insert( new osgUtil_DisplayRequirementsVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_DrawElementTypeSimplifier()); 
_components.insert( new osgUtil_DrawElementTypeSimplifierVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_EdgeCollector()); 
_components.insert( new osgUtil_GLObjectsOperation()); 
addDependency("osg");
_components.insert( new osgUtil_GLObjectsVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_GeometryCollector()); 
_components.insert( new osgUtil_HalfWayMapGenerator()); 
_components.insert( new osgUtil_HighlightMapGenerator()); 
_components.insert( new osgUtil_Hit()); 
_components.insert( new osgUtil_IncrementalCompileOperation()); 
addDependency("osg");
_components.insert( new osgUtil_IndexMeshVisitor()); 
_components.insert( new osgUtil_IntersectVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_IntersectionVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_Intersector()); 
addDependency("osg");
_components.insert( new osgUtil_IntersectorGroup()); 
_components.insert( new osgUtil_LessDepthSortFunctor()); 
_components.insert( new osgUtil_LineSegmentIntersector()); 
_components.insert( new osgUtil_MultiplyRangeOperator()); 
_components.insert( new osgUtil_Optimizer()); 
_components.insert( new osgUtil_PerlinNoise()); 
_components.insert( new osgUtil_PickVisitor()); 
_components.insert( new osgUtil_PlaneIntersector()); 
_components.insert( new osgUtil_PolytopeIntersector()); 
_components.insert( new osgUtil_PositionalStateContainer()); 
addDependency("osg");
_components.insert( new osgUtil_PrintVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_ReflectionMapGenerator()); 
_components.insert( new osgUtil_RenderBin()); 
addDependency("osg");
_components.insert( new osgUtil_RenderLeaf()); 
addDependency("osg");
_components.insert( new osgUtil_RenderStage()); 
_components.insert( new osgUtil_ReversePrimitiveFunctor()); 
addDependency("osg");
_components.insert( new osgUtil_SceneGraphBuilder()); 
_components.insert( new osgUtil_SceneView()); 
addDependency("osg");
addDependency("osg");
_components.insert( new osgUtil_ShaderGenCache()); 
addDependency("osg");
_components.insert( new osgUtil_ShaderGenVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_Simplifier()); 
addDependency("osg");
_components.insert( new osgUtil_SmoothingVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_StateGraph()); 
addDependency("osg");
_components.insert( new osgUtil_StateToCompile()); 
addDependency("osg");
_components.insert( new osgUtil_Statistics()); 
addDependency("osg");
_components.insert( new osgUtil_StatsVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_TangentSpaceGenerator()); 
addDependency("osg");
_components.insert( new osgUtil_Tessellator()); 
addDependency("osg");
_components.insert( new osgUtil_TransformAttributeFunctor()); 
_components.insert( new osgUtil_TransformCallback()); 
addDependency("osg");
_components.insert( new osgUtil_TriStripVisitor()); 
_components.insert( new osgUtil_UpdateVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_VertexAccessOrderVisitor()); 
_components.insert( new osgUtil_VertexCacheMissVisitor()); 
addDependency("osg");
_components.insert( new osgUtil_VertexCacheVisitor()); 
_components.insert( new osgUtil_dereference_clear()); 
_components.insert( new osgUtil_dereference_less()); 

}
osgUtil_CPPContext::~osgUtil_CPPContext(){}
	///setup metaclass children and parents (require dependancies to be loaded)
 void osgUtil_CPPContext::setupRelations() {MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TriStripVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::HalfWayMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::HighlightMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ReflectionMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CullVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CullVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DelaunayConstraint")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DelaunayTriangulator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DisplayRequirementsVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DrawElementTypeSimplifierVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GLObjectsOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GLObjectsVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IndexMeshVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexAccessOrderVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::HalfWayMapGenerator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::HighlightMapGenerator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IncrementalCompileOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IndexMeshVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PickVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectionVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectorGroup")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::LineSegmentIntersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PlaneIntersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PolytopeIntersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectorGroup")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::LineSegmentIntersector")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PickVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PlaneIntersector")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PolytopeIntersector")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PositionalStateContainer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PrintVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ReflectionMapGenerator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderBin")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderBin")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderStage")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderLeaf")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderStage")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderBin")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ReversePrimitiveFunctor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveIndexFunctor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SceneView")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SceneView")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ShaderGenCache")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ShaderGenVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Simplifier")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SmoothingVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StateGraph")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StateToCompile")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Statistics")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveFunctor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StatsVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TangentSpaceGenerator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Tessellator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TransformCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TriStripVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::UpdateVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexAccessOrderVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheMissVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector")); 
}
 