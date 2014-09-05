#ifndef GLOBAL_CPP_CONTEXT_H
#define GLOBAL_CPP_CONTEXT_H 

//#include <pmoc.blackboard.hpp>
#include <list> 
#include <map>
#include <MetaLibrary.h>
#include <memory>
#include <osg/ref_ptr>
namespace osg{
class AlphaFunc; 
class AnimationPath; 
class AnimationPathCallback; 
class ApplicationUsage; 
class ApplicationUsageProxy; 
class ArgumentParser; 
class Array; 
class ArrayDispatchers; 
class ArrayVisitor; 
class AtomicCounterBufferBinding; 
class AtomicCounterBufferObject; 
struct AttributeDispatch; 
class AttributeDispatchMap; 
class AudioSink; 
class AudioStream; 
class AutoTransform; 
struct BarrierOperation; 
class Billboard; 
class BlendColor; 
class BlendEquation; 
class BlendFunc; 
struct BlockAndFlushOperation; 
class Box; 
class BufferData; 
class BufferIndexBinding; 
class BufferObject; 
class BufferObjectProfile; 
class Camera; 
class CameraView; 
class Capsule; 
class ClampColor; 
struct ClampedLinearCostFunction1D; 
class ClearNode; 
class ClipNode; 
class ClipPlane; 
class ClusterCullingCallback; 
class CollectOccludersVisitor; 
class ColorMask; 
class ColorMatrix; 
class CompositeShape; 
class ComputeBoundsVisitor; 
class Cone; 
class ConstArrayVisitor; 
class ConstShapeVisitor; 
class ConstValueVisitor; 
class ConvexHull; 
class ConvexPlanarOccluder; 
class ConvexPlanarPolygon; 
class CoordinateSystemNode; 
class CopyOp; 
class CullFace; 
class CullSettings; 
class CullStack; 
class CullingSet; 
class Cylinder; 
class DefaultUserDataContainer; 
class DeleteHandler; 
class Depth; 
class DisplaySettings; 
class DrawArrayLengths; 
class DrawArrays; 
class DrawElements; 
class DrawElementsUByte; 
class DrawElementsUInt; 
class DrawElementsUShort; 
class DrawPixels; 
class Drawable; 
class ElapsedTime; 
class ElementBufferObject; 
class EllipsoidModel; 
class EndOfDynamicDrawBlock; 
class FBOExtensions; 
struct FlushDeletedGLObjectsOperation; 
class Fog; 
class FragmentProgram; 
class FrameBufferAttachment; 
class FrameBufferObject; 
class FrameStamp; 
class FrontFace; 
class GL2Extensions; 
class GLBeginEndAdapter; 
class GLBufferObject; 
class GLBufferObjectManager; 
class GLBufferObjectSet; 
struct GLUtesselator; 
class Geode; 
class Geometry; 
class GeometryCostEstimator; 
class GraphicsContext; 
class GraphicsCostEstimator; 
struct GraphicsOperation; 
class GraphicsThread; 
class Group; 
class HeightField; 
class Hint; 
class Image; 
class ImageSequence; 
class ImageStream; 
class IndexArray; 
class InfinitePlane; 
class KdTree; 
class KdTreeBuilder; 
class LOD; 
class Light; 
class LightModel; 
class LightSource; 
class LineSegment; 
class LineStipple; 
class LineWidth; 
class LogicOp; 
class Material; 
class MatrixTransform; 
class Matrixd; 
class Matrixf; 
class Multisample; 
class Node; 
class NodeAcceptOp; 
class NodeCallback; 
class NodeTrackerCallback; 
class NodeVisitor; 
class NotifyHandler; 
class Object; 
class Observer; 
class ObserverNodePath; 
class ObserverSet; 
class OccluderNode; 
class OccluderVolume; 
class OcclusionQueryNode; 
class Operation; 
class OperationQueue; 
class OperationThread; 
class PagedLOD; 
class PatchParameter; 
class PixelBufferObject; 
class PixelDataBufferObject; 
struct PixelStorageModes; 
class Plane; 
class Point; 
class PointSprite; 
class PolygonMode; 
class PolygonOffset; 
class PolygonStipple; 
class Polytope; 
class PositionAttitudeTransform; 
class PrimitiveFunctor; 
class PrimitiveIndexFunctor; 
class PrimitiveRestartIndex; 
class PrimitiveSet; 
class Program; 
class ProgramCostEstimator; 
class Projection; 
class ProxyNode; 
class Quat; 
class QueryGeometry; 
class RefBlock; 
class RefBlockCount; 
class RefMatrixd; 
class RefMatrixf; 
class Referenced; 
struct ReleaseContext_Block_MakeCurrentOperation; 
class RenderBuffer; 
class RenderInfo; 
class RunOperations; 
class SampleMaski; 
class Scissor; 
class Script; 
class ScriptCallback; 
class ScriptEngine; 
class Sequence; 
class ShadeModel; 
class Shader; 
class ShaderAttribute; 
class ShaderBinary; 
class ShaderComponent; 
class ShaderComposer; 
class ShadowVolumeOccluder; 
class Shape; 
class ShapeDrawable; 
class ShapeVisitor; 
class Sphere; 
class StandardNotifyHandler; 
class State; 
class StateAttribute; 
class StateAttributeCallback; 
class StateSet; 
class Stats; 
class Stencil; 
class StencilTwoSided; 
struct SwapBuffersOperation; 
class Switch; 
class TessellationHints; 
class TestResult; 
class TexEnv; 
class TexEnvCombine; 
class TexEnvFilter; 
class TexGen; 
class TexGenNode; 
class TexMat; 
class Texture; 
class Texture1D; 
class Texture2D; 
class Texture2DArray; 
class Texture2DMultisample; 
class Texture3D; 
class TextureBuffer; 
class TextureCostEstimator; 
class TextureCubeMap; 
class TextureRectangle; 
class Timer; 
class TransferFunction; 
class TransferFunction1D; 
class Transform; 
class TransformFeedbackBufferBinding; 
class TriangleMesh; 
class Uniform; 
class UniformBufferBinding; 
class UniformBufferObject; 
class UserDataContainer; 
class ValueObject; 
class ValueVisitor; 
class Vec2b; 
class Vec2d; 
class Vec2f; 
class Vec2i; 
class Vec2s; 
class Vec2ub; 
class Vec2ui; 
class Vec2us; 
class Vec3b; 
class Vec3d; 
class Vec3f; 
class Vec3i; 
class Vec3s; 
class Vec3ub; 
class Vec3ui; 
class Vec3us; 
class Vec4b; 
class Vec4d; 
class Vec4f; 
class Vec4i; 
class Vec4s; 
class Vec4ub; 
class Vec4ui; 
class Vec4us; 
class VertexAttribAlias; 
class VertexBufferObject; 
class VertexProgram; 
class View; 
class Viewport; 
class WinDebugNotifyHandler; 
}; 
#include<osg/AlphaFunc>
#include<osg/AnimationPath>
#include<osg/AnimationPath>
#include<osg/ApplicationUsage>
#include<osg/ArrayDispatchers>
#include<osg/BufferIndexBinding>
#include<osg/BufferObject>
#include<osg/ArrayDispatchers>
#include<osg/AutoTransform>
#include<osg/GraphicsThread>
#include<osg/Billboard>
#include<osg/BlendColor>
#include<osg/BlendEquation>
#include<osg/BlendFunc>
#include<osg/GraphicsThread>
#include<osg/BufferIndexBinding>
#include<osg/Camera>
#include<osg/CameraView>
#include<osg/ClampColor>
#include<osg/ClearNode>
#include<osg/ClipNode>
#include<osg/ClipPlane>
#include<osg/ClusterCullingCallback>
#include<osg/CollectOccludersVisitor>
#include<osg/ColorMask>
#include<osg/ColorMatrix>
#include<osg/ComputeBoundsVisitor>
#include<osg/ConvexPlanarOccluder>
#include<osg/CoordinateSystemNode>
#include<osg/CullFace>
#include<osg/CullingSet>
#include<osg/UserDataContainer>
#include<osg/Depth>
#include<osg/DisplaySettings>
#include<osg/PrimitiveSet>
#include<osg/PrimitiveSet>
#include<osg/PrimitiveSet>
#include<osg/PrimitiveSet>
#include<osg/PrimitiveSet>
#include<osg/DrawPixels>
#include<osg/BufferObject>
#include<osg/CoordinateSystemNode>
#include<osg/GraphicsThread>
#include<osg/FrameBufferObject>
#include<osg/GraphicsThread>
#include<osg/Fog>
#include<osg/FragmentProgram>
#include<osg/FrameBufferObject>
#include<osg/FrameStamp>
#include<osg/FrontFace>
#include<osg/GL2Extensions>
#include<osg/BufferObject>
#include<osg/BufferObject>
#include<osg/BufferObject>
#include<osg/Geode>
#include<osg/Geometry>
#include<osg/GraphicsCostEstimator>
#include<osg/GraphicsCostEstimator>
#include<osg/GraphicsThread>
#include<osg/GraphicsThread>
#include<osg/Group>
#include<osg/Hint>
#include<osg/Image>
#include<osg/ImageSequence>
#include<osg/ImageStream>
#include<osg/KdTree>
#include<osg/LOD>
#include<osg/Light>
#include<osg/LightModel>
#include<osg/LightSource>
#include<osg/LineSegment>
#include<osg/LineStipple>
#include<osg/LineWidth>
#include<osg/LogicOp>
#include<osg/Material>
#include<osg/MatrixTransform>
#include<osg/Multisample>
#include<osg/Node>
#include<osg/NodeCallback>
#include<osg/NodeTrackerCallback>
#include<osg/NodeVisitor>
#include<osg/Observer>
#include<osg/OccluderNode>
#include<osg/OcclusionQueryNode>
#include<osg/OperationThread>
#include<osg/OperationThread>
#include<osg/PagedLOD>
#include<osg/PatchParameter>
#include<osg/BufferObject>
#include<osg/BufferObject>
#include<osg/Point>
#include<osg/PointSprite>
#include<osg/PolygonMode>
#include<osg/PolygonOffset>
#include<osg/PolygonStipple>
#include<osg/PositionAttitudeTransform>
#include<osg/PrimitiveRestartIndex>
#include<osg/Program>
#include<osg/GraphicsCostEstimator>
#include<osg/Projection>
#include<osg/ProxyNode>
#include<osg/OcclusionQueryNode>
#include<osg/OperationThread>
#include<osg/OperationThread>
#include<osg/Matrixd>
#include<osg/Matrixf>
#include<osg/GraphicsThread>
#include<osg/FrameBufferObject>
#include<osg/GraphicsThread>
#include<osg/SampleMaski>
#include<osg/Scissor>

#include<osg/Sequence>
#include<osg/ShadeModel>
#include<osg/Shader>
#include<osg/ShaderAttribute>
#include<osg/Shader>
#include<osg/Shader>
#include<osg/ShaderComposer>
#include<osg/ShapeDrawable>
#include<osg/Notify>
#include<osg/State>
#include<osg/StateAttributeCallback>
#include<osg/StateSet>
#include<osg/Stats>
#include<osg/Stencil>
#include<osg/StencilTwoSided>
#include<osg/GraphicsThread>
#include<osg/Switch>
#include<osg/ShapeDrawable>
#include<osg/OcclusionQueryNode>
#include<osg/TexEnv>
#include<osg/TexEnvCombine>
#include<osg/TexEnvFilter>
#include<osg/TexGen>
#include<osg/TexGenNode>
#include<osg/TexMat>
#include<osg/Texture1D>
#include<osg/Texture2D>
#include<osg/Texture2DArray>
#include<osg/Texture2DMultisample>
#include<osg/Texture3D>
#include<osg/TextureBuffer>
#include<osg/GraphicsCostEstimator>
#include<osg/TextureCubeMap>
#include<osg/TextureRectangle>
#include<osg/TransferFunction>
#include<osg/TransferFunction>
#include<osg/Transform>
#include<osg/BufferIndexBinding>
#include<osg/Uniform>
#include<osg/BufferIndexBinding>
#include<osg/BufferObject>
#include<osg/ValueObject>
#include<osg/BufferObject>
#include<osg/VertexProgram>
#include<osg/View>
#include<osg/Viewport>
#include<osg/Notify>

namespace pmoc{
	class osg_CPPContext: public MetaLibrary{
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
osg_CPPContext();
~osg_CPPContext();
	///setup metaclass children and parents (require dependancies to be loaded)
virtual void setupRelations() ;
 MetaClass *getClass(const std::type_info & ti);
};
		 
}
#endif

