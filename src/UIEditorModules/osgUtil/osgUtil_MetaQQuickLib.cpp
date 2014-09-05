#include "osgUtil_AddRangeOperatorQQQ.hpp"
#include "osgUtil_BaseOptimizerVisitorQQQ.hpp"
#include "osgUtil_CubeMapGeneratorQQQ.hpp"
#include "osgUtil_CullVisitorQQQ.hpp"
#include "osgUtil_DelaunayConstraintQQQ.hpp"
#include "osgUtil_DelaunayTriangulatorQQQ.hpp"
#include "osgUtil_DisplayRequirementsVisitorQQQ.hpp"
#include "osgUtil_DrawElementTypeSimplifierQQQ.hpp"
#include "osgUtil_DrawElementTypeSimplifierVisitorQQQ.hpp"
#include "osgUtil_EdgeCollectorQQQ.hpp"
#include "osgUtil_GLObjectsOperationQQQ.hpp"
#include "osgUtil_GLObjectsVisitorQQQ.hpp"
#include "osgUtil_GeometryCollectorQQQ.hpp"
#include "osgUtil_HalfWayMapGeneratorQQQ.hpp"
#include "osgUtil_HighlightMapGeneratorQQQ.hpp"
#include "osgUtil_HitQQQ.hpp"
#include "osgUtil_IncrementalCompileOperationQQQ.hpp"
#include "osgUtil_IndexMeshVisitorQQQ.hpp"
#include "osgUtil_IntersectVisitorQQQ.hpp"
#include "osgUtil_IntersectionVisitorQQQ.hpp"
#include "osgUtil_IntersectorQQQ.hpp"
#include "osgUtil_IntersectorGroupQQQ.hpp"
#include "osgUtil_LessDepthSortFunctorQQQ.hpp"
#include "osgUtil_LineSegmentIntersectorQQQ.hpp"
#include "osgUtil_MultiplyRangeOperatorQQQ.hpp"
#include "osgUtil_OptimizerQQQ.hpp"
#include "osgUtil_PerlinNoiseQQQ.hpp"
#include "osgUtil_PickVisitorQQQ.hpp"
#include "osgUtil_PlaneIntersectorQQQ.hpp"
#include "osgUtil_PolytopeIntersectorQQQ.hpp"
#include "osgUtil_PositionalStateContainerQQQ.hpp"
#include "osgUtil_PrintVisitorQQQ.hpp"
#include "osgUtil_ReflectionMapGeneratorQQQ.hpp"
#include "osgUtil_RenderBinQQQ.hpp"
#include "osgUtil_RenderLeafQQQ.hpp"
#include "osgUtil_RenderStageQQQ.hpp"
#include "osgUtil_ReversePrimitiveFunctorQQQ.hpp"
#include "osgUtil_SceneGraphBuilderQQQ.hpp"
#include "osgUtil_SceneViewQQQ.hpp"
#include "osgUtil_ShaderGenCacheQQQ.hpp"
#include "osgUtil_ShaderGenVisitorQQQ.hpp"
#include "osgUtil_SimplifierQQQ.hpp"
#include "osgUtil_SmoothingVisitorQQQ.hpp"
#include "osgUtil_StateGraphQQQ.hpp"
#include "osgUtil_StateToCompileQQQ.hpp"
#include "osgUtil_StatisticsQQQ.hpp"
#include "osgUtil_StatsVisitorQQQ.hpp"
#include "osgUtil_TangentSpaceGeneratorQQQ.hpp"
#include "osgUtil_TessellatorQQQ.hpp"
#include "osgUtil_TransformAttributeFunctorQQQ.hpp"
#include "osgUtil_TransformCallbackQQQ.hpp"
#include "osgUtil_TriStripVisitorQQQ.hpp"
#include "osgUtil_UpdateVisitorQQQ.hpp"
#include "osgUtil_VertexAccessOrderVisitorQQQ.hpp"
#include "osgUtil_VertexCacheMissVisitorQQQ.hpp"
#include "osgUtil_VertexCacheVisitorQQQ.hpp"
#include "osgUtil_dereference_clearQQQ.hpp"
#include "osgUtil_dereference_lessQQQ.hpp"
//#include <pmoc.blackboard.hpp>
#include <MetaQQuickLibraryRegistry.h>
#include "osgUtil_MetaQQuickLib.hpp"
using namespace pmoc;
REGISTER_MetaQQuickLibrary(osgUtil_UIEditor);
 osgUtil_UIEditor::osgUtil_UIEditor():MetaQQuickLibrary("osgUtil"){
_components.insert( new osgUtil_AddRangeOperatorQQQ()); 
_components.insert( new osgUtil_BaseOptimizerVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_CubeMapGeneratorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_CullVisitorQQQ()); 
addDependency("osg");
addDependency("osg");
_components.insert( new osgUtil_DelaunayConstraintQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_DelaunayTriangulatorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_DisplayRequirementsVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_DrawElementTypeSimplifierQQQ()); 
_components.insert( new osgUtil_DrawElementTypeSimplifierVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_EdgeCollectorQQQ()); 
_components.insert( new osgUtil_GLObjectsOperationQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_GLObjectsVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_GeometryCollectorQQQ()); 
_components.insert( new osgUtil_HalfWayMapGeneratorQQQ()); 
_components.insert( new osgUtil_HighlightMapGeneratorQQQ()); 
_components.insert( new osgUtil_HitQQQ()); 
_components.insert( new osgUtil_IncrementalCompileOperationQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_IndexMeshVisitorQQQ()); 
_components.insert( new osgUtil_IntersectVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_IntersectionVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_IntersectorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_IntersectorGroupQQQ()); 
_components.insert( new osgUtil_LessDepthSortFunctorQQQ()); 
_components.insert( new osgUtil_LineSegmentIntersectorQQQ()); 
_components.insert( new osgUtil_MultiplyRangeOperatorQQQ()); 
_components.insert( new osgUtil_OptimizerQQQ()); 
_components.insert( new osgUtil_PerlinNoiseQQQ()); 
_components.insert( new osgUtil_PickVisitorQQQ()); 
_components.insert( new osgUtil_PlaneIntersectorQQQ()); 
_components.insert( new osgUtil_PolytopeIntersectorQQQ()); 
_components.insert( new osgUtil_PositionalStateContainerQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_PrintVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_ReflectionMapGeneratorQQQ()); 
_components.insert( new osgUtil_RenderBinQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_RenderLeafQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_RenderStageQQQ()); 
_components.insert( new osgUtil_ReversePrimitiveFunctorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_SceneGraphBuilderQQQ()); 
_components.insert( new osgUtil_SceneViewQQQ()); 
addDependency("osg");
addDependency("osg");
_components.insert( new osgUtil_ShaderGenCacheQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_ShaderGenVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_SimplifierQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_SmoothingVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_StateGraphQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_StateToCompileQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_StatisticsQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_StatsVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_TangentSpaceGeneratorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_TessellatorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_TransformAttributeFunctorQQQ()); 
_components.insert( new osgUtil_TransformCallbackQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_TriStripVisitorQQQ()); 
_components.insert( new osgUtil_UpdateVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_VertexAccessOrderVisitorQQQ()); 
_components.insert( new osgUtil_VertexCacheMissVisitorQQQ()); 
addDependency("osg");
_components.insert( new osgUtil_VertexCacheVisitorQQQ()); 
_components.insert( new osgUtil_dereference_clearQQQ()); 
_components.insert( new osgUtil_dereference_lessQQQ()); 

}
osgUtil_UIEditor::~osgUtil_UIEditor(){}
	///setup metaclass children and parents (require dependancies to be loaded)
 void osgUtil_UIEditor::setupRelations() {MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::TriStripVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::HalfWayMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::HighlightMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ReflectionMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CullVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CullStack")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CullVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DelaunayConstraint")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DelaunayTriangulator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DisplayRequirementsVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DrawElementTypeSimplifierVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GLObjectsOperation")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::GraphicsOperation")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GLObjectsVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IndexMeshVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexAccessOrderVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexCacheVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::HalfWayMapGenerator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::HighlightMapGenerator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IncrementalCompileOperation")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::GraphicsOperation")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IndexMeshVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectVisitor")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PickVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectionVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectorGroup")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::LineSegmentIntersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PlaneIntersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PolytopeIntersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectorGroup")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::LineSegmentIntersector")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PickVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PlaneIntersector")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PolytopeIntersector")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Intersector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PositionalStateContainer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PrintVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ReflectionMapGenerator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CubeMapGenerator")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderBin")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderBin")->addChild(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderStage")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderLeaf")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderStage")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::RenderBin")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ReversePrimitiveFunctor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PrimitiveIndexFunctor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::SceneView")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CullSettings")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::SceneView")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ShaderGenCache")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ShaderGenVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Simplifier")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::SmoothingVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::StateGraph")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::StateToCompile")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Statistics")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PrimitiveFunctor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::StatsVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::TangentSpaceGenerator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Tessellator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Referenced")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::TransformCallback")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeCallback")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::TriStripVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::UpdateVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexAccessOrderVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexCacheMissVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor")); 
MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexCacheVisitor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector")); 
}
 