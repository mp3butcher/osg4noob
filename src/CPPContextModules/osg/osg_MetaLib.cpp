#include "osg_AlphaFunc.hpp"
#include "osg_AnimationPath.hpp"
#include "osg_AnimationPathCallback.hpp"
#include "osg_ApplicationUsage.hpp"
#include "osg_ApplicationUsageProxy.hpp"
#include "osg_ArgumentParser.hpp"
#include "osg_Array.hpp"
#include "osg_ArrayDispatchers.hpp"
#include "osg_ArrayVisitor.hpp"
#include "osg_AtomicCounterBufferBinding.hpp"
#include "osg_AtomicCounterBufferObject.hpp"
#include "osg_AttributeDispatch.hpp"
#include "osg_AudioSink.hpp"
#include "osg_AudioStream.hpp"
#include "osg_AutoTransform.hpp"
#include "osg_BarrierOperation.hpp"
#include "osg_Billboard.hpp"
#include "osg_BlendColor.hpp"
#include "osg_BlendEquation.hpp"
#include "osg_BlendFunc.hpp"
#include "osg_BlockAndFlushOperation.hpp"
#include "osg_Box.hpp"
#include "osg_BufferData.hpp"
#include "osg_BufferIndexBinding.hpp"
#include "osg_BufferObject.hpp"
#include "osg_BufferObjectProfile.hpp"
#include "osg_Camera.hpp"
#include "osg_CameraView.hpp"
#include "osg_Capsule.hpp"
#include "osg_ClampColor.hpp"
#include "osg_ClampedLinearCostFunction1D.hpp"
#include "osg_ClearNode.hpp"
#include "osg_ClipNode.hpp"
#include "osg_ClipPlane.hpp"
#include "osg_ClusterCullingCallback.hpp"
#include "osg_CollectOccludersVisitor.hpp"
#include "osg_ColorMask.hpp"
#include "osg_ColorMatrix.hpp"
#include "osg_CompositeShape.hpp"
#include "osg_ComputeBoundsVisitor.hpp"
#include "osg_Cone.hpp"
#include "osg_ConstArrayVisitor.hpp"
#include "osg_ConstShapeVisitor.hpp"
#include "osg_ConstValueVisitor.hpp"
#include "osg_ConvexHull.hpp"
#include "osg_ConvexPlanarOccluder.hpp"
#include "osg_ConvexPlanarPolygon.hpp"
#include "osg_CoordinateSystemNode.hpp"
#include "osg_CopyOp.hpp"
#include "osg_CullFace.hpp"
#include "osg_CullSettings.hpp"
#include "osg_CullStack.hpp"
#include "osg_CullingSet.hpp"
#include "osg_Cylinder.hpp"
#include "osg_DefaultUserDataContainer.hpp"
#include "osg_DeleteHandler.hpp"
#include "osg_Depth.hpp"
#include "osg_DisplaySettings.hpp"
#include "osg_DrawArrayLengths.hpp"
#include "osg_DrawArrays.hpp"
#include "osg_DrawElements.hpp"
#include "osg_DrawElementsUByte.hpp"
#include "osg_DrawElementsUInt.hpp"
#include "osg_DrawElementsUShort.hpp"
#include "osg_DrawPixels.hpp"
#include "osg_Drawable.hpp"
#include "osg_ElapsedTime.hpp"
#include "osg_ElementBufferObject.hpp"
#include "osg_EllipsoidModel.hpp"
#include "osg_EndOfDynamicDrawBlock.hpp"
#include "osg_FBOExtensions.hpp"
#include "osg_FlushDeletedGLObjectsOperation.hpp"
#include "osg_Fog.hpp"
#include "osg_FragmentProgram.hpp"
#include "osg_FrameBufferAttachment.hpp"
#include "osg_FrameBufferObject.hpp"
#include "osg_FrameStamp.hpp"
#include "osg_FrontFace.hpp"
#include "osg_GL2Extensions.hpp"
#include "osg_GLBeginEndAdapter.hpp"
#include "osg_GLBufferObject.hpp"
#include "osg_GLBufferObjectManager.hpp"
#include "osg_GLBufferObjectSet.hpp"
#include "osg_Geode.hpp"
#include "osg_Geometry.hpp"
#include "osg_GeometryCostEstimator.hpp"
#include "osg_GraphicsContext.hpp"
#include "osg_GraphicsCostEstimator.hpp"
#include "osg_GraphicsOperation.hpp"
#include "osg_GraphicsThread.hpp"
#include "osg_Group.hpp"
#include "osg_HeightField.hpp"
#include "osg_Hint.hpp"
#include "osg_Image.hpp"
#include "osg_ImageSequence.hpp"
#include "osg_ImageStream.hpp"
#include "osg_IndexArray.hpp"
#include "osg_InfinitePlane.hpp"
#include "osg_KdTree.hpp"
#include "osg_KdTreeBuilder.hpp"
#include "osg_LOD.hpp"
#include "osg_Light.hpp"
#include "osg_LightModel.hpp"
#include "osg_LightSource.hpp"
#include "osg_LineSegment.hpp"
#include "osg_LineStipple.hpp"
#include "osg_LineWidth.hpp"
#include "osg_LogicOp.hpp"
#include "osg_Material.hpp"
#include "osg_MatrixTransform.hpp"
#include "osg_Matrixd.hpp"
#include "osg_Matrixf.hpp"
#include "osg_Multisample.hpp"
#include "osg_Node.hpp"
#include "osg_NodeAcceptOp.hpp"
#include "osg_NodeCallback.hpp"
#include "osg_NodeTrackerCallback.hpp"
#include "osg_NodeVisitor.hpp"
#include "osg_NotifyHandler.hpp"
#include "osg_Object.hpp"
#include "osg_Observer.hpp"
#include "osg_ObserverNodePath.hpp"
#include "osg_ObserverSet.hpp"
#include "osg_OccluderNode.hpp"
#include "osg_OcclusionQueryNode.hpp"
#include "osg_Operation.hpp"
#include "osg_OperationQueue.hpp"
#include "osg_OperationThread.hpp"
#include "osg_PagedLOD.hpp"
#include "osg_PatchParameter.hpp"
#include "osg_PixelBufferObject.hpp"
#include "osg_PixelDataBufferObject.hpp"
#include "osg_PixelStorageModes.hpp"
#include "osg_Plane.hpp"
#include "osg_Point.hpp"
#include "osg_PointSprite.hpp"
#include "osg_PolygonMode.hpp"
#include "osg_PolygonOffset.hpp"
#include "osg_PolygonStipple.hpp"
#include "osg_Polytope.hpp"
#include "osg_PositionAttitudeTransform.hpp"
#include "osg_PrimitiveFunctor.hpp"
#include "osg_PrimitiveIndexFunctor.hpp"
#include "osg_PrimitiveRestartIndex.hpp"
#include "osg_PrimitiveSet.hpp"
#include "osg_Program.hpp"
#include "osg_ProgramCostEstimator.hpp"
#include "osg_Projection.hpp"
#include "osg_ProxyNode.hpp"
#include "osg_Quat.hpp"
#include "osg_QueryGeometry.hpp"
#include "osg_RefBlock.hpp"
#include "osg_RefBlockCount.hpp"
#include "osg_RefMatrixd.hpp"
#include "osg_RefMatrixf.hpp"
#include "osg_Referenced.hpp"
#include "osg_ReleaseContext_Block_MakeCurrentOperation.hpp"
#include "osg_RenderBuffer.hpp"
#include "osg_RenderInfo.hpp"
#include "osg_RunOperations.hpp"
#include "osg_SampleMaski.hpp"
#include "osg_Scissor.hpp"
/*
#include "osg_Script.hpp"
#include "osg_ScriptCallback.hpp"
#include "osg_ScriptEngine.hpp"*/
#include "osg_Sequence.hpp"
#include "osg_ShadeModel.hpp"
#include "osg_Shader.hpp"
#include "osg_ShaderAttribute.hpp"
#include "osg_ShaderBinary.hpp"
#include "osg_ShaderComponent.hpp"
#include "osg_ShaderComposer.hpp"
#include "osg_ShadowVolumeOccluder.hpp"
#include "osg_Shape.hpp"
#include "osg_ShapeDrawable.hpp"
#include "osg_ShapeVisitor.hpp"
#include "osg_Sphere.hpp"
#include "osg_StandardNotifyHandler.hpp"
#include "osg_State.hpp"
#include "osg_StateAttribute.hpp"
#include "osg_StateAttributeCallback.hpp"
#include "osg_StateSet.hpp"
#include "osg_Stats.hpp"
#include "osg_Stencil.hpp"
#include "osg_StencilTwoSided.hpp"
#include "osg_SwapBuffersOperation.hpp"
#include "osg_Switch.hpp"
#include "osg_TessellationHints.hpp"
#include "osg_TestResult.hpp"
#include "osg_TexEnv.hpp"
#include "osg_TexEnvCombine.hpp"
#include "osg_TexEnvFilter.hpp"
#include "osg_TexGen.hpp"
#include "osg_TexGenNode.hpp"
#include "osg_TexMat.hpp"
#include "osg_Texture.hpp"
#include "osg_Texture1D.hpp"
#include "osg_Texture2D.hpp"
#include "osg_Texture2DArray.hpp"
#include "osg_Texture2DMultisample.hpp"
#include "osg_Texture3D.hpp"
#include "osg_TextureBuffer.hpp"
#include "osg_TextureCostEstimator.hpp"
#include "osg_TextureCubeMap.hpp"
#include "osg_TextureRectangle.hpp"
#include "osg_Timer.hpp"
#include "osg_TransferFunction.hpp"
#include "osg_TransferFunction1D.hpp"
#include "osg_Transform.hpp"
#include "osg_TransformFeedbackBufferBinding.hpp"
#include "osg_TriangleMesh.hpp"
#include "osg_Uniform.hpp"
#include "osg_UniformBufferBinding.hpp"
#include "osg_UniformBufferObject.hpp"
#include "osg_UserDataContainer.hpp"
#include "osg_ValueObject.hpp"
#include "osg_ValueVisitor.hpp"
#include "osg_Vec2b.hpp"
#include "osg_Vec2d.hpp"
#include "osg_Vec2f.hpp"
#include "osg_Vec2i.hpp"
#include "osg_Vec2s.hpp"
#include "osg_Vec2ub.hpp"
#include "osg_Vec2ui.hpp"
#include "osg_Vec2us.hpp"
#include "osg_Vec3b.hpp"
#include "osg_Vec3d.hpp"
#include "osg_Vec3f.hpp"
#include "osg_Vec3i.hpp"
#include "osg_Vec3s.hpp"
#include "osg_Vec3ub.hpp"
#include "osg_Vec3ui.hpp"
#include "osg_Vec3us.hpp"
#include "osg_Vec4b.hpp"
#include "osg_Vec4d.hpp"
#include "osg_Vec4f.hpp"
#include "osg_Vec4i.hpp"
#include "osg_Vec4s.hpp"
#include "osg_Vec4ub.hpp"
#include "osg_Vec4ui.hpp"
#include "osg_Vec4us.hpp"
#include "osg_VertexAttribAlias.hpp"
#include "osg_VertexBufferObject.hpp"
#include "osg_VertexProgram.hpp"
#include "osg_View.hpp"
#include "osg_Viewport.hpp"

#include "MetaLibraryRegistry.h"
//#include <pmoc.blackboard.hpp>
#include "osg_MetaLib.hpp"
using namespace pmoc;
REGISTER_METALIBRARY(osg_CPPContext);
 osg_CPPContext::osg_CPPContext():MetaLibrary("osg"){
_components.insert( new osg_AlphaFunc());
_components.insert( new osg_AnimationPath());
_components.insert( new osg_AnimationPathCallback());
_components.insert( new osg_ApplicationUsage());
_components.insert( new osg_ApplicationUsageProxy());
_components.insert( new osg_ArgumentParser());
_components.insert( new osg_Array());
_components.insert( new osg_ArrayDispatchers());
_components.insert( new osg_ArrayVisitor());
_components.insert( new osg_AtomicCounterBufferBinding());
_components.insert( new osg_AtomicCounterBufferObject());
_components.insert( new osg_AttributeDispatch());
_components.insert( new osg_AudioSink());
_components.insert( new osg_AudioStream());
_components.insert( new osg_AutoTransform());
_components.insert( new osg_BarrierOperation());
_components.insert( new osg_Billboard());
_components.insert( new osg_BlendColor());
_components.insert( new osg_BlendEquation());
_components.insert( new osg_BlendFunc());
_components.insert( new osg_BlockAndFlushOperation());
_components.insert( new osg_Box());
_components.insert( new osg_BufferData());
_components.insert( new osg_BufferIndexBinding());
_components.insert( new osg_BufferObject());
_components.insert( new osg_BufferObjectProfile());
_components.insert( new osg_Camera());
_components.insert( new osg_CameraView());
_components.insert( new osg_Capsule());
_components.insert( new osg_ClampColor());
_components.insert( new osg_ClampedLinearCostFunction1D());
_components.insert( new osg_ClearNode());
_components.insert( new osg_ClipNode());
_components.insert( new osg_ClipPlane());
_components.insert( new osg_ClusterCullingCallback());
_components.insert( new osg_CollectOccludersVisitor());
_components.insert( new osg_ColorMask());
_components.insert( new osg_ColorMatrix());
_components.insert( new osg_CompositeShape());
_components.insert( new osg_ComputeBoundsVisitor());
_components.insert( new osg_Cone());
_components.insert( new osg_ConstArrayVisitor());
_components.insert( new osg_ConstShapeVisitor());
_components.insert( new osg_ConstValueVisitor());
_components.insert( new osg_ConvexHull());
_components.insert( new osg_ConvexPlanarOccluder());
_components.insert( new osg_ConvexPlanarPolygon());
_components.insert( new osg_CoordinateSystemNode());
_components.insert( new osg_CopyOp());
_components.insert( new osg_CullFace());
_components.insert( new osg_CullSettings());
_components.insert( new osg_CullStack());
_components.insert( new osg_CullingSet());
_components.insert( new osg_Cylinder());
_components.insert( new osg_DefaultUserDataContainer());
_components.insert( new osg_DeleteHandler());
_components.insert( new osg_Depth());
_components.insert( new osg_DisplaySettings());
_components.insert( new osg_DrawArrayLengths());
_components.insert( new osg_DrawArrays());
_components.insert( new osg_DrawElements());
_components.insert( new osg_DrawElementsUByte());
_components.insert( new osg_DrawElementsUInt());
_components.insert( new osg_DrawElementsUShort());
_components.insert( new osg_DrawPixels());
_components.insert( new osg_Drawable());
_components.insert( new osg_ElapsedTime());
_components.insert( new osg_ElementBufferObject());
_components.insert( new osg_EllipsoidModel());
_components.insert( new osg_EndOfDynamicDrawBlock());
_components.insert( new osg_FBOExtensions());
_components.insert( new osg_FlushDeletedGLObjectsOperation());
_components.insert( new osg_Fog());
_components.insert( new osg_FragmentProgram());
_components.insert( new osg_FrameBufferAttachment());
_components.insert( new osg_FrameBufferObject());
_components.insert( new osg_FrameStamp());
_components.insert( new osg_FrontFace());
_components.insert( new osg_GL2Extensions());
_components.insert( new osg_GLBeginEndAdapter());
_components.insert( new osg_GLBufferObject());
_components.insert( new osg_GLBufferObjectManager());
_components.insert( new osg_GLBufferObjectSet());
_components.insert( new osg_Geode());
_components.insert( new osg_Geometry());
_components.insert( new osg_GeometryCostEstimator());
_components.insert( new osg_GraphicsContext());
_components.insert( new osg_GraphicsCostEstimator());
_components.insert( new osg_GraphicsOperation());
_components.insert( new osg_GraphicsThread());
_components.insert( new osg_Group());
_components.insert( new osg_HeightField());
_components.insert( new osg_Hint());
_components.insert( new osg_Image());
_components.insert( new osg_ImageSequence());
_components.insert( new osg_ImageStream());
_components.insert( new osg_IndexArray());
_components.insert( new osg_InfinitePlane());
_components.insert( new osg_KdTree());
_components.insert( new osg_KdTreeBuilder());
_components.insert( new osg_LOD());
_components.insert( new osg_Light());
_components.insert( new osg_LightModel());
_components.insert( new osg_LightSource());
_components.insert( new osg_LineSegment());
_components.insert( new osg_LineStipple());
_components.insert( new osg_LineWidth());
_components.insert( new osg_LogicOp());
_components.insert( new osg_Material());
_components.insert( new osg_MatrixTransform());
_components.insert( new osg_Matrixd());
_components.insert( new osg_Matrixf());
_components.insert( new osg_Multisample());
_components.insert( new osg_Node());
_components.insert( new osg_NodeAcceptOp());
_components.insert( new osg_NodeCallback());
_components.insert( new osg_NodeTrackerCallback());
_components.insert( new osg_NodeVisitor());
_components.insert( new osg_NotifyHandler());
_components.insert( new osg_Object());
_components.insert( new osg_Observer());
_components.insert( new osg_ObserverNodePath());
_components.insert( new osg_ObserverSet());
_components.insert( new osg_OccluderNode());
_components.insert( new osg_OcclusionQueryNode());
_components.insert( new osg_Operation());
_components.insert( new osg_OperationQueue());
_components.insert( new osg_OperationThread());
_components.insert( new osg_PagedLOD());
_components.insert( new osg_PatchParameter());
_components.insert( new osg_PixelBufferObject());
_components.insert( new osg_PixelDataBufferObject());
_components.insert( new osg_PixelStorageModes());
_components.insert( new osg_Plane());
_components.insert( new osg_Point());
_components.insert( new osg_PointSprite());
_components.insert( new osg_PolygonMode());
_components.insert( new osg_PolygonOffset());
_components.insert( new osg_PolygonStipple());
_components.insert( new osg_Polytope());
_components.insert( new osg_PositionAttitudeTransform());
_components.insert( new osg_PrimitiveFunctor());
_components.insert( new osg_PrimitiveIndexFunctor());
_components.insert( new osg_PrimitiveRestartIndex());
_components.insert( new osg_PrimitiveSet());
_components.insert( new osg_Program());
_components.insert( new osg_ProgramCostEstimator());
_components.insert( new osg_Projection());
_components.insert( new osg_ProxyNode());
_components.insert( new osg_Quat());
_components.insert( new osg_QueryGeometry());
_components.insert( new osg_RefBlock());
_components.insert( new osg_RefBlockCount());
_components.insert( new osg_RefMatrixd());
_components.insert( new osg_RefMatrixf());
_components.insert( new osg_Referenced());
_components.insert( new osg_ReleaseContext_Block_MakeCurrentOperation());
_components.insert( new osg_RenderBuffer());
_components.insert( new osg_RenderInfo());
_components.insert( new osg_RunOperations());
_components.insert( new osg_SampleMaski());
_components.insert( new osg_Scissor());  
_components.insert( new osg_Sequence());
_components.insert( new osg_ShadeModel());
_components.insert( new osg_Shader());
_components.insert( new osg_ShaderAttribute());
_components.insert( new osg_ShaderBinary());
_components.insert( new osg_ShaderComponent());
_components.insert( new osg_ShaderComposer());
_components.insert( new osg_ShadowVolumeOccluder());
_components.insert( new osg_Shape());
_components.insert( new osg_ShapeDrawable());
_components.insert( new osg_ShapeVisitor());
_components.insert( new osg_Sphere());
_components.insert( new osg_StandardNotifyHandler());
_components.insert( new osg_State());
_components.insert( new osg_StateAttribute());
_components.insert( new osg_StateAttributeCallback());
_components.insert( new osg_StateSet());
_components.insert( new osg_Stats());
_components.insert( new osg_Stencil());
_components.insert( new osg_StencilTwoSided());
_components.insert( new osg_SwapBuffersOperation());
_components.insert( new osg_Switch());
_components.insert( new osg_TessellationHints());
_components.insert( new osg_TestResult());
_components.insert( new osg_TexEnv());
_components.insert( new osg_TexEnvCombine());
_components.insert( new osg_TexEnvFilter());
_components.insert( new osg_TexGen());
_components.insert( new osg_TexGenNode());
_components.insert( new osg_TexMat());
_components.insert( new osg_Texture());
_components.insert( new osg_Texture1D());
_components.insert( new osg_Texture2D());
_components.insert( new osg_Texture2DArray());
_components.insert( new osg_Texture2DMultisample());
_components.insert( new osg_Texture3D());
_components.insert( new osg_TextureBuffer());
_components.insert( new osg_TextureCostEstimator());
_components.insert( new osg_TextureCubeMap());
_components.insert( new osg_TextureRectangle());
_components.insert( new osg_Timer());
_components.insert( new osg_TransferFunction());
_components.insert( new osg_TransferFunction1D());
_components.insert( new osg_Transform());
_components.insert( new osg_TransformFeedbackBufferBinding());
_components.insert( new osg_TriangleMesh());
_components.insert( new osg_Uniform());
_components.insert( new osg_UniformBufferBinding());
_components.insert( new osg_UniformBufferObject());
_components.insert( new osg_UserDataContainer());
_components.insert( new osg_ValueObject());
_components.insert( new osg_ValueVisitor());
_components.insert( new osg_Vec2b());
_components.insert( new osg_Vec2d());
_components.insert( new osg_Vec2f());
_components.insert( new osg_Vec2i());
_components.insert( new osg_Vec2s());
_components.insert( new osg_Vec2ub());
_components.insert( new osg_Vec2ui());
_components.insert( new osg_Vec2us());
_components.insert( new osg_Vec3b());
_components.insert( new osg_Vec3d());
_components.insert( new osg_Vec3f());
_components.insert( new osg_Vec3i());
_components.insert( new osg_Vec3s());
_components.insert( new osg_Vec3ub());
_components.insert( new osg_Vec3ui());
_components.insert( new osg_Vec3us());
_components.insert( new osg_Vec4b());
_components.insert( new osg_Vec4d());
_components.insert( new osg_Vec4f());
_components.insert( new osg_Vec4i());
_components.insert( new osg_Vec4s());
_components.insert( new osg_Vec4ub());
_components.insert( new osg_Vec4ui());
_components.insert( new osg_Vec4us());
_components.insert( new osg_VertexAttribAlias());
_components.insert( new osg_VertexBufferObject());
_components.insert( new osg_VertexProgram());
_components.insert( new osg_View());
_components.insert( new osg_Viewport());


}
osg_CPPContext::~osg_CPPContext(){}
	///setup metaclass children and parents (require dependancies to be loaded)
 void osg_CPPContext::setupRelations() {MetaLibraryRegistry::instance()->getMetaClassByID("osg::AlphaFunc")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AnimationPath")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AnimationPathCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ApplicationUsage")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Array")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Array")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::IndexArray"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ArrayDispatchers")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AtomicCounterBufferBinding")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AtomicCounterBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AttributeDispatch")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AudioSink")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AudioStream")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::AutoTransform")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BarrierOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Billboard")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendColor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendEquation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendFunc")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlockAndFlushOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Box")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Array"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Image"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AtomicCounterBufferBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransformFeedbackBufferBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::UniformBufferBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AtomicCounterBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ElementBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PixelBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PixelDataBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::UniformBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::VertexBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Camera")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Camera")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CameraView")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Capsule")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClampColor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClearNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipPlane")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClusterCullingCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CollectOccludersVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CollectOccludersVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMask")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMatrix")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CompositeShape")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ComputeBoundsVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Cone")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ConvexHull")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TriangleMesh"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ConvexPlanarOccluder")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CoordinateSystemNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullFace")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Camera"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SceneView"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullSettings"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CollectOccludersVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullStack")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CullVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullingSet")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Cylinder")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DefaultUserDataContainer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::UserDataContainer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Depth")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DisplaySettings")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawArrayLengths")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawArrays")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUByte"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUInt"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUShort"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUByte")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUInt")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElementsUShort")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawPixels")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawPixels"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShapeDrawable"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ElementBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::EllipsoidModel")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FBOExtensions")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FlushDeletedGLObjectsOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Fog")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FragmentProgram")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrameBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrameStamp")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrontFace")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GL2Extensions")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObjectManager")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObjectSet")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geode")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Billboard"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("deprecated_osg::Geometry"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::QueryGeometry"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DelaunayConstraint"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GeometryCostEstimator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsContext")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsCostEstimator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlockAndFlushOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FlushDeletedGLObjectsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ReleaseContext_Block_MakeCurrentOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RunOperations"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::SwapBuffersOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GLObjectsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IncrementalCompileOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsThread")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationThread"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClearNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CoordinateSystemNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LOD"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightSource"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::OccluderNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::OcclusionQueryNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Projection"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ProxyNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Sequence"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Switch"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGenNode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::HeightField")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Hint")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Image")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Image")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageStream"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageSequence")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageStream"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageStream")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Image"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageStream")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ImageSequence"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::IndexArray")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Array"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::InfinitePlane")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Plane"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::InfinitePlane")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::KdTree")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::KdTreeBuilder")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LOD")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LOD")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PagedLOD"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Light")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightModel")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightSource")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineSegment")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineStipple")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineWidth")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::LogicOp")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Material")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::MatrixTransform")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Matrixd")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixd"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Matrixf")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixf"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Multisample")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AnimationPathCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClusterCullingCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeTrackerCallback")); 
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TransformCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeTrackerCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CollectOccludersVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ComputeBoundsVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::KdTreeBuilder"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CullVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DisplayRequirementsVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DrawElementTypeSimplifierVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GLObjectsVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectionVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PrintVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ShaderGenVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Simplifier"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SmoothingVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StateToCompile"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StatsVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::UpdateVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheMissVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NotifyHandler")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::NotifyHandler")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StandardNotifyHandler"));

MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AnimationPath"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AudioSink"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AudioStream"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ConvexPlanarOccluder"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::EllipsoidModel"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsContext"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixd"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixf"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RenderBuffer"));
 
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shader"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderBinary"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderComponent"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderComposer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttributeCallback"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TessellationHints"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Uniform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::UserDataContainer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ValueObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::View"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PositionalStateContainer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderBin"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SceneView"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Observer")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::State"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ObserverSet")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::OccluderNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::OcclusionQueryNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BarrierOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationQueue")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationThread")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationThread")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsThread"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PagedLOD")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LOD"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PatchParameter")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PixelBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PixelDataBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Plane")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::InfinitePlane"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Point")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PointSprite")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonMode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonOffset")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonStipple")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PositionAttitudeTransform")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveFunctor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Statistics"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveIndexFunctor")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ReversePrimitiveFunctor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveRestartIndex")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferData"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawArrayLengths"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawArrays"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveSet")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DrawElements"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Program")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ProgramCostEstimator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Projection")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ProxyNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::QueryGeometry")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlock")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlock")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ReleaseContext_Block_MakeCurrentOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlockCount")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixd")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Matrixd"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixd")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixf")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Matrixf"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefMatrixf")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ApplicationUsage"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ArrayDispatchers"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AttributeDispatch"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullingSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DisplaySettings"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FBOExtensions"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrameStamp"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GL2Extensions"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObjectManager"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GLBufferObjectSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GeometryCostEstimator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsCostEstimator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineSegment"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NotifyHandler"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ObserverSet"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Operation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationQueue"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::OperationThread"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ProgramCostEstimator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlock"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlockCount"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::State"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Stats"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TestResult"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureCostEstimator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CubeMapGenerator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DelaunayTriangulator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Intersector"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::RenderLeaf"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ShaderGenCache"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StateGraph"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TangentSpaceGenerator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Tessellator"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ReleaseContext_Block_MakeCurrentOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ReleaseContext_Block_MakeCurrentOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::RefBlock"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RenderBuffer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::RunOperations")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::SampleMaski")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Scissor")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
 
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Sequence")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShadeModel")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shader")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderAttribute")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderBinary")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderComponent")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderComposer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Box"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Capsule"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CompositeShape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Cone"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Cylinder"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::HeightField"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::InfinitePlane"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::KdTree"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Sphere"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TriangleMesh"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShapeDrawable")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Drawable"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Sphere")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StandardNotifyHandler")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::NotifyHandler"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::State")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Observer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::State")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AlphaFunc"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendColor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendEquation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendFunc"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClampColor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipPlane"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMask"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMatrix"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullFace"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Depth"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Fog"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FragmentProgram"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrameBufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrontFace"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Hint"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Light"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightModel"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineStipple"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineWidth"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::LogicOp"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Material"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Multisample"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PatchParameter"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Point"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PointSprite"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonMode"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonOffset"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonStipple"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveRestartIndex"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Program"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::SampleMaski"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Scissor"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShadeModel"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Stencil"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StencilTwoSided"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnv"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvCombine"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvFilter"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGen"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexMat"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::VertexProgram"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Viewport"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttributeCallback")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateSet")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Stats")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Stencil")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::StencilTwoSided")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::SwapBuffersOperation")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::GraphicsOperation"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Switch")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TessellationHints")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TestResult")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnv")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvCombine")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvFilter")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGen")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGenNode")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexMat")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture1D"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2D"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DArray"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DMultisample"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture3D"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureBuffer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureCubeMap"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureRectangle"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture1D")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2D")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DArray")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DMultisample")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture3D")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureBuffer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureCostEstimator")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Referenced"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureCubeMap")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureRectangle")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction1D"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction1D")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransferFunction"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::AutoTransform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Camera"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::CameraView"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::MatrixTransform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::PositionAttitudeTransform"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransformFeedbackBufferBinding")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TriangleMesh")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Shape"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::TriangleMesh")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::ConvexHull"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Uniform")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::UniformBufferBinding")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::UniformBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::UserDataContainer")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::UserDataContainer")->addChild(MetaLibraryRegistry::instance()->getMetaClassByID("osg::DefaultUserDataContainer"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::ValueObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::VertexBufferObject")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferObject"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::VertexProgram")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::View")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::Object"));
MetaLibraryRegistry::instance()->getMetaClassByID("osg::Viewport")->addParent(MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute"));

}
