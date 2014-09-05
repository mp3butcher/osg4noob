#ifndef GLOBAL_CPP_CONTEXT_H
#define GLOBAL_CPP_CONTEXT_H

//#include <pmoc.blackboard.hpp>
#include <list>
#include <map>
#include <MetaQQuickLibrary.h>
#include <memory>
namespace osgUtil{
struct AddRangeOperator;
class BaseOptimizerVisitor;
class CubeMapGenerator;
class CullVisitor;
class DelaunayConstraint;
class DelaunayTriangulator;
class DisplayRequirementsVisitor;
class DrawElementTypeSimplifier;
class DrawElementTypeSimplifierVisitor;
class EdgeCollector;
class GLObjectsOperation;
class GLObjectsVisitor;
class GeometryCollector;
class HalfWayMapGenerator;
class HighlightMapGenerator;
class Hit;
class IncrementalCompileOperation;
class IndexMeshVisitor;
class IntersectVisitor;
class IntersectionVisitor;
class Intersector;
class IntersectorGroup;
struct LessDepthSortFunctor;
class LineSegmentIntersector;
struct MultiplyRangeOperator;
class Optimizer;
class PerlinNoise;
class PickVisitor;
class PlaneIntersector;
class PolytopeIntersector;
class PositionalStateContainer;
class PrintVisitor;
class ReflectionMapGenerator;
class RenderBin;
class RenderLeaf;
class RenderStage;
class ReversePrimitiveFunctor;
class SceneGraphBuilder;
class SceneView;
class ShaderGenCache;
class ShaderGenVisitor;
class Simplifier;
class SmoothingVisitor;
class StateGraph;
class StateToCompile;
class Statistics;
class StatsVisitor;
class TangentSpaceGenerator;
class Tessellator;
class TransformAttributeFunctor;
class TransformCallback;
class TriStripVisitor;
class UpdateVisitor;
class VertexAccessOrderVisitor;
class VertexCacheMissVisitor;
class VertexCacheVisitor;
struct dereference_clear;
struct dereference_less;
};

namespace pmoc{
	class osgUtil_UIEditor: public MetaQQuickLibrary{
	private:
 public:
 //virtual Instance createClassInstance(const std::string&);

	///TODO all products of the factory (hierarchyleafs)
		//osg::Group * managedPointer_osg_Group;
		//osg::MatrixTransform * managed_osg_Matrix;
	public:
///Add  object whose lifecycle is not managed by the context
//carefull to the crash if you operate them after you delete
//perhaps a type_info could be bettet
//void addObject(osg::Node*n){ Instance o((void*)n, getClassByID("osg::Node"), false); if (o.model != 0){ managedobjects.push_back(o); objectrecord[o.MetaClass].push_back(&managedobjects.back()) } else{ cerr << "osg.Node class not managed" << endl; } }
//...etc..
osgUtil_UIEditor();
~osgUtil_UIEditor();
	///setup metaclass children and parents (require dependancies to be loaded)
virtual void setupRelations() ;
 };

}
#endif

