#ifndef BLACKBOARDHPP
#define BLACKBOARDHPP
#include <bullet/BulletDynamics/Character/btCharacterControllerInterface.h_pmoc.hpp>
#include <bullet/btBulletDynamicsCommon.h_pmoc.hpp>
#include <osg/AlphaFunc_pmoc.hpp>
#include <osg/AnimationPath_pmoc.hpp>
#include <osg/ApplicationUsage_pmoc.hpp>
#include <osg/ArgumentParser_pmoc.hpp>
#include <osg/Array_pmoc.hpp>
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <osg/AudioStream_pmoc.hpp>
#include <osg/AutoTransform_pmoc.hpp>
#include <osg/Billboard_pmoc.hpp>
#include <osg/BlendColor_pmoc.hpp>
#include <osg/BlendEquation_pmoc.hpp>
#include <osg/BlendEquationi_pmoc.hpp>
#include <osg/BlendFunc_pmoc.hpp>
#include <osg/BlendFunci_pmoc.hpp>
#include <osg/BoundingBox_pmoc.hpp>
#include <osg/BoundingSphere_pmoc.hpp>
#include <osg/BoundsChecking_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferTemplate_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
#include <osg/Camera_pmoc.hpp>
#include <osg/CameraView_pmoc.hpp>
#include <osg/Capability_pmoc.hpp>
#include <osg/ClampColor_pmoc.hpp>
#include <osg/ClearNode_pmoc.hpp>
#include <osg/ClipControl_pmoc.hpp>
#include <osg/ClipNode_pmoc.hpp>
#include <osg/ClipPlane_pmoc.hpp>
#include <osg/ClusterCullingCallback_pmoc.hpp>
#include <osg/CollectOccludersVisitor_pmoc.hpp>
#include <osg/ColorMask_pmoc.hpp>
#include <osg/ColorMaski_pmoc.hpp>
#include <osg/ColorMatrix_pmoc.hpp>
#include <osg/ComputeBoundsVisitor_pmoc.hpp>
#include <osg/Config_pmoc.hpp>
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
#include <osg/ConvexPlanarPolygon_pmoc.hpp>
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <osg/CopyOp_pmoc.hpp>
#include <osg/CullFace_pmoc.hpp>
#include <osg/CullSettings_pmoc.hpp>
#include <osg/CullStack_pmoc.hpp>
#include <osg/CullingSet_pmoc.hpp>
#include <osg/DeleteHandler_pmoc.hpp>
#include <osg/Depth_pmoc.hpp>
#include <osg/DisplaySettings_pmoc.hpp>
#include <osg/DrawPixels_pmoc.hpp>
#include <osg/Drawable_pmoc.hpp>
#include <osg/Endian_pmoc.hpp>
#include <osg/Export_pmoc.hpp>
#include <osg/Fog_pmoc.hpp>
#include <osg/FragmentProgram_pmoc.hpp>
#include <osg/FrameBufferObject_pmoc.hpp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/FrontFace_pmoc.hpp>
#include <osg/GL_pmoc.hpp>
#include <osg/GL2Extensions_pmoc.hpp>
#include <osg/GLBeginEndAdapter_pmoc.hpp>
#include <osg/GLDefines_pmoc.hpp>
#include <osg/GLExtensions_pmoc.hpp>
#include <osg/GLExtensions~_pmoc.hpp>
#include <osg/GLObjects_pmoc.hpp>
#include <osg/GLU_pmoc.hpp>
#include <osg/Geode_pmoc.hpp>
#include <osg/Geometry_pmoc.hpp>
#include <osg/GraphicsContext_pmoc.hpp>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/Group_pmoc.hpp>
#include <osg/Hint_pmoc.hpp>
#include <osg/Image_pmoc.hpp>
#include <osg/ImageSequence_pmoc.hpp>
#include <osg/ImageStream_pmoc.hpp>
#include <osg/ImageUtils_pmoc.hpp>
#include <osg/KdTree_pmoc.hpp>
#include <osg/LOD_pmoc.hpp>
#include <osg/Light_pmoc.hpp>
#include <osg/LightModel_pmoc.hpp>
#include <osg/LightSource_pmoc.hpp>
#include <osg/Light~_pmoc.hpp>
#include <osg/LineSegment_pmoc.hpp>
#include <osg/LineStipple_pmoc.hpp>
#include <osg/LineWidth_pmoc.hpp>
#include <osg/LogicOp_pmoc.hpp>
#include <osg/Material_pmoc.hpp>
#include <osg/Math_pmoc.hpp>
#include <osg/Matrix_pmoc.hpp>
#include <osg/MatrixTransform_pmoc.hpp>
#include <osg/Matrixd_pmoc.hpp>
#include <osg/Matrixd~_pmoc.hpp>
#include <osg/Matrixf_pmoc.hpp>
#include <osg/Matrixs_pmoc.hpp>
#include <osg/MixinVector_pmoc.hpp>
#include <osg/Multisample_pmoc.hpp>
#include <osg/Node_pmoc.hpp>
#include <osg/NodeCallback_pmoc.hpp>
#include <osg/NodeTrackerCallback_pmoc.hpp>
#include <osg/NodeVisitor_pmoc.hpp>
#include <osg/Notify_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Object~_pmoc.hpp>
#include <osg/Observer_pmoc.hpp>
#include <osg/ObserverNodePath_pmoc.hpp>
#include <osg/OccluderNode_pmoc.hpp>
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <osg/OperationThread_pmoc.hpp>
#include <osg/PagedLOD_pmoc.hpp>
#include <osg/PatchParameter_pmoc.hpp>
#include <osg/Plane_pmoc.hpp>
#include <osg/Point_pmoc.hpp>
#include <osg/PointSprite_pmoc.hpp>
#include <osg/PolygonMode_pmoc.hpp>
#include <osg/PolygonOffset_pmoc.hpp>
#include <osg/PolygonStipple_pmoc.hpp>
#include <osg/Polytope_pmoc.hpp>
#include <osg/PositionAttitudeTransform_pmoc.hpp>
#include <osg/PrimitiveRestartIndex_pmoc.hpp>
#include <osg/PrimitiveSet_pmoc.hpp>
#include <osg/Program_pmoc.hpp>
#include <osg/Projection_pmoc.hpp>
#include <osg/ProxyNode_pmoc.hpp>
#include <osg/Quat_pmoc.hpp>
#include <osg/Referenced_pmoc.hpp>
#include <osg/Referenced~_pmoc.hpp>
#include <osg/RenderInfo_pmoc.hpp>
#include <osg/SampleMaski_pmoc.hpp>
#include <osg/Scissor_pmoc.hpp>
#include <osg/ScriptEngine_pmoc.hpp>
#include <osg/Sequence_pmoc.hpp>
#include <osg/ShadeModel_pmoc.hpp>
#include <osg/Shader_pmoc.hpp>
#include <osg/ShaderAttribute_pmoc.hpp>
#include <osg/ShaderComposer_pmoc.hpp>
#include <osg/ShadowVolumeOccluder_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
#include <osg/ShapeDrawable_pmoc.hpp>
#include <osg/State_pmoc.hpp>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/StateAttributeCallback_pmoc.hpp>
#include <osg/StateSet_pmoc.hpp>
#include <osg/Stats_pmoc.hpp>
#include <osg/Stencil_pmoc.hpp>
#include <osg/StencilTwoSided_pmoc.hpp>
#include <osg/Switch_pmoc.hpp>
#include <osg/TemplatePrimitiveFunctor_pmoc.hpp>
#include <osg/TexEnv_pmoc.hpp>
#include <osg/TexEnvCombine_pmoc.hpp>
#include <osg/TexEnvFilter_pmoc.hpp>
#include <osg/TexGen_pmoc.hpp>
#include <osg/TexGenNode_pmoc.hpp>
#include <osg/TexMat_pmoc.hpp>
#include <osg/Texture_pmoc.hpp>
#include <osg/Texture1D_pmoc.hpp>
#include <osg/Texture2D_pmoc.hpp>
#include <osg/Texture2DArray_pmoc.hpp>
#include <osg/Texture2DMultisample_pmoc.hpp>
#include <osg/Texture3D_pmoc.hpp>
#include <osg/TextureBuffer_pmoc.hpp>
#include <osg/TextureCubeMap_pmoc.hpp>
#include <osg/TextureRectangle_pmoc.hpp>
#include <osg/Timer_pmoc.hpp>
#include <osg/TransferFunction_pmoc.hpp>
#include <osg/Transform_pmoc.hpp>
#include <osg/TriangleFunctor_pmoc.hpp>
#include <osg/TriangleIndexFunctor_pmoc.hpp>
#include <osg/TriangleLinePointIndexFunctor_pmoc.hpp>
#include <osg/TriangleLinePointIndexFunctor~_pmoc.hpp>
#include <osg/Types_pmoc.hpp>
#include <osg/Uniform_pmoc.hpp>
#include <osg/UserDataContainer_pmoc.hpp>
#include <osg/ValueObject_pmoc.hpp>
#include <osg/ValueObject_pmoc.cpp_pmoc.hpp>
#include <osg/Vec2_pmoc.hpp>
#include <osg/Vec2b_pmoc.hpp>
#include <osg/Vec2d_pmoc.hpp>
#include <osg/Vec2f_pmoc.hpp>
#include <osg/Vec2i_pmoc.hpp>
#include <osg/Vec2s_pmoc.hpp>
#include <osg/Vec2ub_pmoc.hpp>
#include <osg/Vec2ui_pmoc.hpp>
#include <osg/Vec2us_pmoc.hpp>
#include <osg/Vec3_pmoc.hpp>
#include <osg/Vec3b_pmoc.hpp>
#include <osg/Vec3d_pmoc.hpp>
#include <osg/Vec3f_pmoc.hpp>
#include <osg/Vec3i_pmoc.hpp>
#include <osg/Vec3s_pmoc.hpp>
#include <osg/Vec3ub_pmoc.hpp>
#include <osg/Vec3ui_pmoc.hpp>
#include <osg/Vec3us_pmoc.hpp>
#include <osg/Vec4_pmoc.hpp>
#include <osg/Vec4b_pmoc.hpp>
#include <osg/Vec4d_pmoc.hpp>
#include <osg/Vec4f_pmoc.hpp>
#include <osg/Vec4i_pmoc.hpp>
#include <osg/Vec4s_pmoc.hpp>
#include <osg/Vec4ub_pmoc.hpp>
#include <osg/Vec4ui_pmoc.hpp>
#include <osg/Vec4us_pmoc.hpp>
#include <osg/Version_pmoc.hpp>
#include <osg/VertexAttribDivisor_pmoc.hpp>
#include <osg/VertexProgram_pmoc.hpp>
#include <osg/View_pmoc.hpp>
#include <osg/Viewport_pmoc.hpp>
#include <osg/buffered_value_pmoc.hpp>
#include <osg/fast_back_stack_pmoc.hpp>
#include <osg/io_utils_pmoc.hpp>
#include <osg/observer_ptr_pmoc.hpp>
#include <osg/ref_ptr_pmoc.hpp>
#include <osg/ref_ptr~_pmoc.hpp>
#include <osgParticle/AccelOperator_pmoc.hpp>
#include <osgParticle/AngularAccelOperator_pmoc.hpp>
#include <osgParticle/AngularDampingOperator_pmoc.hpp>
#include <osgParticle/BounceOperator_pmoc.hpp>
#include <osgParticle/BoxPlacer_pmoc.hpp>
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <osgParticle/CompositePlacer_pmoc.hpp>
#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <osgParticle/ConstantRateCounter_pmoc.hpp>
#include <osgParticle/Counter_pmoc.hpp>
#include <osgParticle/DampingOperator_pmoc.hpp>
#include <osgParticle/DomainOperator_pmoc.hpp>
#include <osgParticle/Emitter_pmoc.hpp>
#include <osgParticle/ExplosionDebrisEffect_pmoc.hpp>
#include <osgParticle/ExplosionEffect_pmoc.hpp>
#include <osgParticle/ExplosionOperator_pmoc.hpp>
#include <osgParticle/Export_pmoc.hpp>
#include <osgParticle/FireEffect_pmoc.hpp>
#include <osgParticle/FluidFrictionOperator_pmoc.hpp>
#include <osgParticle/FluidProgram_pmoc.hpp>
#include <osgParticle/ForceOperator_pmoc.hpp>
#include <osgParticle/Interpolator_pmoc.hpp>
#include <osgParticle/LinearInterpolator_pmoc.hpp>
#include <osgParticle/ModularEmitter_pmoc.hpp>
#include <osgParticle/ModularProgram_pmoc.hpp>
#include <osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/OrbitOperator_pmoc.hpp>
#include <osgParticle/Particle_pmoc.hpp>
#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/PointPlacer_pmoc.hpp>
#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <osgParticle/Program_pmoc.hpp>
#include <osgParticle/RadialShooter_pmoc.hpp>
#include <osgParticle/RandomRateCounter_pmoc.hpp>
#include <osgParticle/SectorPlacer_pmoc.hpp>
#include <osgParticle/SegmentPlacer_pmoc.hpp>
#include <osgParticle/Shooter_pmoc.hpp>
#include <osgParticle/SinkOperator_pmoc.hpp>
#include <osgParticle/SmokeEffect_pmoc.hpp>
#include <osgParticle/SmokeTrailEffect_pmoc.hpp>
#include <osgParticle/VariableRateCounter_pmoc.hpp>
#include <osgParticle/Version_pmoc.hpp>
#include <osgParticle/range_pmoc.hpp>
#include <osgShadow/ConvexPolyhedron_pmoc.hpp>
#include <osgShadow/DebugShadowMap_pmoc.hpp>
#include <osgShadow/Export_pmoc.hpp>
#include <osgShadow/LightSpacePerspectiveShadowMap_pmoc.hpp>
#include <osgShadow/MinimalCullBoundsShadowMap_pmoc.hpp>
#include <osgShadow/MinimalDrawBoundsShadowMap_pmoc.hpp>
#include <osgShadow/MinimalShadowMap_pmoc.hpp>
#include <osgShadow/OccluderGeometry_pmoc.hpp>
#include <osgShadow/ParallelSplitShadowMap_pmoc.hpp>
#include <osgShadow/ProjectionShadowMap_pmoc.hpp>
#include <osgShadow/ShadowMap_pmoc.hpp>
#include <osgShadow/ShadowSettings_pmoc.hpp>
#include <osgShadow/ShadowTechnique_pmoc.hpp>
#include <osgShadow/ShadowTexture_pmoc.hpp>
#include <osgShadow/ShadowVolume_pmoc.hpp>
#include <osgShadow/ShadowedScene_pmoc.hpp>
#include <osgShadow/SoftShadowMap_pmoc.hpp>
#include <osgShadow/StandardShadowMap_pmoc.hpp>
#include <osgShadow/Version_pmoc.hpp>
#include <osgShadow/ViewDependentShadowMap_pmoc.hpp>
#include <osgShadow/ViewDependentShadowTechnique_pmoc.hpp>
#include <osgUtil/ConvertVec_pmoc.hpp>
#include <osgUtil/CubeMapGenerator_pmoc.hpp>
#include <osgUtil/CullVisitor_pmoc.hpp>
#include <osgUtil/DelaunayTriangulator_pmoc.hpp>
#include <osgUtil/DisplayRequirementsVisitor_pmoc.hpp>
#include <osgUtil/DrawElementTypeSimplifier_pmoc.hpp>
#include <osgUtil/EdgeCollector_pmoc.hpp>
#include <osgUtil/Export_pmoc.hpp>
#include <osgUtil/GLObjectsVisitor_pmoc.hpp>
#include <osgUtil/HalfWayMapGenerator_pmoc.hpp>
#include <osgUtil/HighlightMapGenerator_pmoc.hpp>
#include <osgUtil/IncrementalCompileOperation_pmoc.hpp>
#include <osgUtil/IntersectVisitor_pmoc.hpp>
#include <osgUtil/IntersectionVisitor_pmoc.hpp>
#include <osgUtil/LineSegmentIntersector_pmoc.hpp>
#include <osgUtil/MeshOptimizers_pmoc.hpp>
#include <osgUtil/OperationArrayFunctor_pmoc.hpp>
#include <osgUtil/Optimizer_pmoc.hpp>
#include <osgUtil/PerlinNoise_pmoc.hpp>
#include <osgUtil/PlaneIntersector_pmoc.hpp>
#include <osgUtil/PolytopeIntersector_pmoc.hpp>
#include <osgUtil/PositionalStateContainer_pmoc.hpp>
#include <osgUtil/PrintVisitor_pmoc.hpp>
#include <osgUtil/RayIntersector_pmoc.hpp>
#include <osgUtil/ReflectionMapGenerator_pmoc.hpp>
#include <osgUtil/RenderBin_pmoc.hpp>
#include <osgUtil/RenderLeaf_pmoc.hpp>
#include <osgUtil/RenderStage_pmoc.hpp>
#include <osgUtil/ReversePrimitiveFunctor_pmoc.hpp>
#include <osgUtil/SceneGraphBuilder_pmoc.hpp>
#include <osgUtil/SceneView_pmoc.hpp>
#include <osgUtil/ShaderGen_pmoc.hpp>
#include <osgUtil/Simplifier_pmoc.hpp>
#include <osgUtil/SmoothingVisitor_pmoc.hpp>
#include <osgUtil/StateGraph_pmoc.hpp>
#include <osgUtil/Statistics_pmoc.hpp>
#include <osgUtil/TangentSpaceGenerator_pmoc.hpp>
#include <osgUtil/Tessellator_pmoc.hpp>
#include <osgUtil/TransformAttributeFunctor_pmoc.hpp>
#include <osgUtil/TransformCallback_pmoc.hpp>
#include <osgUtil/TriStripVisitor_pmoc.hpp>
#include <osgUtil/UpdateVisitor_pmoc.hpp>
#include <osgUtil/Version_pmoc.hpp>
#include <osgUtil/osgUtil/EdgeCollector_pmoc.hpp>
#include <osgUtil/osgUtil/IntersectionVisitor_pmoc.hpp>
#include <osgUtil/osgUtil/SmoothingVisitor_pmoc.hpp>
#include <osgUtil/osgUtil/Tessellator_pmoc.hpp>
#include <osgUtil/osgUtil/TriStripVisitor_pmoc.hpp>
#endif
