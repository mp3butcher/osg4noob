#ifndef GLOBAL_CPP_CONTEXT_pluginModule_QQQosg_LibraryH
#define GLOBAL_CPP_CONTEXT_pluginModule_QQQosg_LibraryH 

 #include <list> 
#include <map>
#include <MetaQQuickLibrary.h>
#include <memory>
namespace osg{
class QReflect_Object; 
}
namespace osg{
class QReflect_Image; 
}
namespace osg{
class QReflect_StateSet; 
}
namespace osg{
class QReflect_Array; 
}
namespace osg{
class QReflect_Referenced; 
}
namespace osg{
class QReflect_NotifyHandler; 
}
namespace osg{
class QReflect_CallbackObject; 
}
namespace osg{
class QReflect_Vec4f; 
}
namespace osg{
class QReflect_Vec3f; 
}
namespace osg{
class QReflect_Geode; 
}
namespace osg{
class QReflect_Vec3i; 
}
namespace osg{
class QReflect_Geometry; 
}
#include <osg/AlphaFunc>
#include <osg/AnimationPath>
#include <osg/ApplicationUsage>
#include <osg/ArgumentParser>
#include <osg/Array>
#include <osg/ArrayDispatchers>
#include <osg/AudioStream>
#include <osg/AutoTransform>
#include <osg/Billboard>
#include <osg/BlendColor>
#include <osg/BlendEquation>
#include <osg/BlendEquationi>
#include <osg/BlendFunc>
#include <osg/BlendFunci>
#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/BoundsChecking>
#include <osg/BufferIndexBinding>
#include <osg/BufferObject>
#include <osg/BufferTemplate>
#include <osg/Callback>
#include <osg/Camera>
#include <osg/CameraView>
#include <osg/Capability>
#include <osg/ClampColor>
#include <osg/ClearNode>
#include <osg/ClipControl>
#include <osg/ClipNode>
#include <osg/ClipPlane>
#include <osg/ClusterCullingCallback>
#include <osg/CollectOccludersVisitor>
#include <osg/ColorMask>
#include <osg/ColorMaski>
#include <osg/ColorMatrix>
#include <osg/ComputeBoundsVisitor>
#include <osg/Config>
#include <osg/ConvexPlanarOccluder>
#include <osg/ConvexPlanarPolygon>
#include <osg/CoordinateSystemNode>
#include <osg/CopyOp>
#include <osg/CullFace>
#include <osg/CullSettings>
#include <osg/CullStack>
#include <osg/CullingSet>
#include <osg/DeleteHandler>
#include <osg/Depth>
#include <osg/DisplaySettings>
#include <osg/DrawPixels>
#include <osg/Drawable>
#include <osg/Endian>
#include <osg/Export>
#include <osg/Fog>
#include <osg/FragmentProgram>
#include <osg/FrameBufferObject>
#include <osg/FrameStamp>
#include <osg/FrontFace>
#include <osg/GL2Extensions>
#include <osg/GLBeginEndAdapter>
#include <osg/GLDefines>
#include <osg/GLExtensions>
#include <osg/GLObjects>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/GraphicsContext>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsThread>
#include <osg/Group>
#include <osg/Hint>
#include <osg/Image>
#include <osg/ImageSequence>
#include <osg/ImageStream>
#include <osg/ImageUtils>
#include <osg/KdTree>
#include <osg/LOD>
#include <osg/Light>
#include <osg/LightModel>
#include <osg/LightSource>
#include <osg/LineSegment>
#include <osg/LineStipple>
#include <osg/LineWidth>
#include <osg/LogicOp>
#include <osg/Material>
#include <osg/Math>
#include <osg/Matrix>
#include <osg/MatrixTransform>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/MixinVector>
#include <osg/Multisample>
#include <osg/Node>
#include <osg/NodeCallback>
#include <osg/NodeTrackerCallback>
#include <osg/NodeVisitor>
#include <osg/Notify>
#include <osg/Object>
#include <osg/Observer>
#include <osg/ObserverNodePath>
#include <osg/OccluderNode>
#include <osg/OcclusionQueryNode>
#include <osg/OperationThread>
#include <osg/PagedLOD>
#include <osg/PatchParameter>
#include <osg/Plane>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/PolygonMode>
#include <osg/PolygonOffset>
#include <osg/PolygonStipple>
#include <osg/Polytope>
#include <osg/PositionAttitudeTransform>
#include <osg/PrimitiveRestartIndex>
#include <osg/PrimitiveSet>
#include <osg/Program>
#include <osg/Projection>
#include <osg/ProxyNode>
#include <osg/Quat>
#include <osg/Referenced>
#include <osg/RenderInfo>
#include <osg/SampleMaski>
#include <osg/Scissor>
#include <osg/ScriptEngine>
#include <osg/Sequence>
#include <osg/ShadeModel>
#include <osg/Shader>
#include <osg/ShaderAttribute>
#include <osg/ShaderComposer>
#include <osg/ShadowVolumeOccluder>
#include <osg/Shape>
#include <osg/ShapeDrawable>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/StateAttributeCallback>
#include <osg/StateSet>
#include <osg/Stats>
#include <osg/Stencil>
#include <osg/StencilTwoSided>
#include <osg/Switch>
#include <osg/TemplatePrimitiveFunctor>
#include <osg/TexEnv>
#include <osg/TexEnvCombine>
#include <osg/TexEnvFilter>
#include <osg/TexGen>
#include <osg/TexGenNode>
#include <osg/TexMat>
#include <osg/Texture>
#include <osg/Texture1D>
#include <osg/Texture2D>
#include <osg/Texture2DArray>
#include <osg/Texture2DMultisample>
#include <osg/Texture3D>
#include <osg/TextureBuffer>
#include <osg/TextureCubeMap>
#include <osg/TextureRectangle>
#include <osg/Timer>
#include <osg/TransferFunction>
#include <osg/Transform>
#include <osg/TriangleFunctor>
#include <osg/TriangleIndexFunctor>
#include <osg/TriangleLinePointIndexFunctor>
#include <osg/Types>
#include <osg/Uniform>
#include <osg/UserDataContainer>
#include <osg/ValueObject>
#include <osg/Vec2>
#include <osg/Vec2b>
#include <osg/Vec2d>
#include <osg/Vec2f>
#include <osg/Vec2i>
#include <osg/Vec2s>
#include <osg/Vec2ub>
#include <osg/Vec2ui>
#include <osg/Vec2us>
#include <osg/Vec3>
#include <osg/Vec3b>
#include <osg/Vec3d>
#include <osg/Vec3f>
#include <osg/Vec3i>
#include <osg/Vec3s>
#include <osg/Vec3ub>
#include <osg/Vec3ui>
#include <osg/Vec3us>
#include <osg/Vec4>
#include <osg/Vec4b>
#include <osg/Vec4d>
#include <osg/Vec4f>
#include <osg/Vec4i>
#include <osg/Vec4s>
#include <osg/Vec4ub>
#include <osg/Vec4ui>
#include <osg/Vec4us>
#include <osg/Version>
#include <osg/VertexAttribDivisor>
#include <osg/VertexProgram>
#include <osg/View>
#include <osg/Viewport>
#include <osg/buffered_value>
#include <osg/fast_back_stack>
#include <osg/io_utils>
#include <osg/observer_ptr>
#include <osg/ref_ptr>
#include <osg/ref_ptr>

//static  CallbackObject * getCallbackObject( osg::Object * ,const  std::string &);
//static  Endian  getCpuByteOrder();
//static  Geode * createGeodeForImage( Image *);
//static  Geode * createGeodeForImage( Image * , float  , float );
//static  Geometry * createTexturedQuadGeometry(const  Vec3 & ,const  Vec3 & ,const  Vec3 & , float  , float );
//static  Geometry * createTexturedQuadGeometry(const  Vec3 & ,const  Vec3 & ,const  Vec3 & , float  , float  , float  , float );
//static  Matrix  computeEyeToLocal(const  Matrix & ,const  NodePath & , bool );
//static  Matrix  computeLocalToEye(const  Matrix & ,const  NodePath & , bool );
//static  Matrix  computeLocalToWorld(const  NodePath & , bool );
//static  Matrix  computeWorldToLocal(const  NodePath & , bool );
//static  NotifyHandler * getNotifyHandler();
//static  NotifySeverity  getNotifyLevel();
//static  Object * getUserObject( osg::Object * ,const  std::string &);
//static  T  absolute( T );
//static  T  clampAbove( T  , T );
//static  T  clampBelow( T  , T );
//static  T  clampBetween( T  , T  , T );
//static  T  clampTo( T  , T  , T );
//static  T * clone(const  T * ,const  osg::CopyOp &);
//static  T * clone(const  T * ,const  std::string & ,const  osg::CopyOp &);
//static  T * cloneType(const  T *);
//static  T  convertPointerType( R );
//static  T * get_pointer(const  ref_ptr<T> &);
//static  T  inRadians( T );
//static  T  maximum( T  , T );
//static  T  minimum( T  , T );
//static  T  sign( T );
//static  T  signOrZero( T );
//static  T  signedSquare( T );
//static  T  square( T );
//static  Vec2d  componentDivide(const  Vec2d & ,const  Vec2d &);
//static  Vec2d  componentMultiply(const  Vec2d & ,const  Vec2d &);
//static  Vec2f  componentDivide(const  Vec2f & ,const  Vec2f &);
//static  Vec2f  componentMultiply(const  Vec2f & ,const  Vec2f &);
//static  Vec2s  componentDivide(const  Vec2s & ,const  Vec2s &);
//static  Vec2s  componentMultiply(const  Vec2s & ,const  Vec2s &);
//static  Vec2ub  componentDivide(const  Vec2ub & ,const  Vec2ub &);
//static  Vec2ub  componentMultiply(const  Vec2ub & ,const  Vec2ub &);
//static  Vec2us  componentDivide(const  Vec2us & ,const  Vec2us &);
//static  Vec2us  componentMultiply(const  Vec2us & ,const  Vec2us &);
//static  Vec3d  componentDivide(const  Vec3d & ,const  Vec3d &);
//static  Vec3d  componentMultiply(const  Vec3d & ,const  Vec3d &);
//static  Vec3d  operator*(const  Vec3d &);
//static  Vec3d  operator*(const  Vec3d & ,const  Matrixd &);
//static  Vec3d  operator*(const  Vec3d & ,const  Matrixf &);
//static  Vec3f  componentDivide(const  Vec3f & ,const  Vec3f &);
//static  Vec3f  componentMultiply(const  Vec3f & ,const  Vec3f &);
//static  Vec3f  operator*(const  Vec3f &);
//static  Vec3f  operator*(const  Vec3f & ,const  Matrixd &);
//static  Vec3f  operator*(const  Vec3f & ,const  Matrixf &);
//static  Vec3s  componentDivide(const  Vec3s & ,const  Vec3s &);
//static  Vec3s  componentMultiply(const  Vec3s & ,const  Vec3s &);
//static  Vec3ub  componentDivide(const  Vec3ub & ,const  Vec3ub &);
//static  Vec3ub  componentMultiply(const  Vec3ub & ,const  Vec3ub &);
//static  Vec3us  componentDivide(const  Vec3us & ,const  Vec3us &);
//static  Vec3us  componentMultiply(const  Vec3us & ,const  Vec3us &);
//static  Vec4d  componentDivide(const  Vec4d & ,const  Vec4d &);
//static  Vec4d  componentMultiply(const  Vec4d & ,const  Vec4d &);
//static  Vec4d  operator*(const  Vec4d &);
//static  Vec4d  operator*(const  Vec4d & ,const  Matrixd &);
//static  Vec4d  operator*(const  Vec4d & ,const  Matrixf &);
//static  Vec4d::value_type  operator*(const  Vec3d & ,const  Vec4d &);
//static  Vec4d::value_type  operator*(const  Vec3d & ,const  Vec4f &);
//static  Vec4d::value_type  operator*(const  Vec3f & ,const  Vec4d &);
//static  Vec4d::value_type  operator*(const  Vec4d & ,const  Vec3d &);
//static  Vec4d::value_type  operator*(const  Vec4d & ,const  Vec3f &);
//static  Vec4d::value_type  operator*(const  Vec4f & ,const  Vec3d &);
//static  Vec4f  componentDivide(const  Vec4f & ,const  Vec4f &);
//static  Vec4f  componentMultiply(const  Vec4f & ,const  Vec4f &);
//static  Vec4f  operator*(const  Vec4f &);
//static  Vec4f  operator*(const  Vec4f & ,const  Matrixd &);
//static  Vec4f  operator*(const  Vec4f & ,const  Matrixf &);
//static  Vec4f::value_type  operator*(const  Vec3f & ,const  Vec4f &);
//static  Vec4f::value_type  operator*(const  Vec4f & ,const  Vec3f &);
//static  Vec4s  componentDivide(const  Vec4s & ,const  Vec4s &);
//static  Vec4s  componentMultiply(const  Vec4s & ,const  Vec4s &);
//static  Vec4us  componentDivide(const  Vec4us & ,const  Vec4us &);
//static  Vec4us  componentMultiply(const  Vec4us & ,const  Vec4us &);
//static  bool  clearImageToColor( osg::Image * ,const  osg::Vec4 &);
//static  bool  computeMinMax(const  osg::Image * , osg::Vec4 & , osg::Vec4 &);
//static  bool  convertPointer( T & , R );
//static  bool  copyImage(const  osg::Image * , int  , int  , int  , int  , int  , int  , osg::Image * , int  , int  , int  , bool );
//static  bool  equivalent( double  , double  , double );
//static  bool  equivalent( float  , float  , float );
//static  bool  getNormalize(const  osg::Array *);
//static  bool  initNotifyLevel();
//static  bool  isExtensionInExtensionString(const  char * ,const  char *);
//static  bool  isGLExtensionOrVersionSupported( unsigned int  ,const  char * , float );
//static  bool  isGLExtensionSupported( unsigned int  ,const  char *);
//static  bool  isNaN( double );
//static  bool  isNaN( float );
//static  bool  isNotifyEnabled( NotifySeverity );
//static  bool  isNotifyEnabled( NotifySeverity );
//static  bool  isTextureMode( StateAttribute::GLMode );
//static  bool  offsetAndScaleImage( osg::Image * ,const  osg::Vec4 & ,const  osg::Vec4 &);
//static  bool  runNamedCallbackObjects( osg::Object * ,const  std::string & , osg::Parameters & , osg::Parameters &);
//static  bool  setGLExtensionFuncPtr( T & ,const  char *);
//static  bool  setGLExtensionFuncPtr( T & ,const  char * ,const  char *);
//static  bool  setGLExtensionFuncPtr( T & ,const  char * ,const  char * ,const  char *);
//static  double  DegreesToRadians( double );
//static  double  RadiansToDegrees( double );
//static  double  asciiToDouble(const  char *);
//static  double  findAsciiToDouble(const  char *);
//static  double  inDegrees( double );
//static  double  round( double );
//static  float  DegreesToRadians( float );
//static  float  RadiansToDegrees( float );
//static  float  asciiToFloat(const  char *);
//static  float  computeVolume(const  T & ,const  T & ,const  T & ,const  T &);
//static  float  computeVolume(const  T & ,const  T & ,const  T & ,const  T & ,const  T & ,const  T &);
//static  float  findAsciiToFloat(const  char *);
//static  float  getGLVersionNumber();
//static  float  inDegrees( float );
//static  float  round( float );
//static  osg::Array::Binding  getBinding(const  osg::Array *);
//static  osg::Image * colorSpaceConversion( ColorSpaceOperation  , osg::Image * ,const  osg::Vec4 &);
//static  osg::Image * createImage3D(const  ImageList & , GLenum  , int  , int  , int  , bool );
//static  osg::Image * createImage3DWithAlpha(const  ImageList & , int  , int  , int  , bool );
//static  osg::Image * createImageWithOrientationConversion(const  osg::Image * ,const  osg::Vec3i & ,const  osg::Vec3i & ,const  osg::Vec3i & ,const  osg::Vec3i &);
//static  osg::Image * createSpotLightImage(const  osg::Vec4 & ,const  osg::Vec4 & , unsigned int  , float );
//static  osg::StateSet * initOQDebugState();
//static  osg::StateSet * initOQState();
//static  ref_ptr<T>  const_pointer_cast(const  ref_ptr<Y> &);
//static  ref_ptr<T>  dynamic_pointer_cast(const  ref_ptr<Y> &);
//static  ref_ptr<T>  static_pointer_cast(const  ref_ptr<Y> &);
//static  std::istream & operator>>( std::istream & , Plane &);
//static  std::istream & operator>>( std::istream & , Quat &);
//static  std::istream & operator>>( std::istream & , Vec2b &);
//static  std::istream & operator>>( std::istream & , Vec2d &);
//static  std::istream & operator>>( std::istream & , Vec2f &);
//static  std::istream & operator>>( std::istream & , Vec2i &);
//static  std::istream & operator>>( std::istream & , Vec2s &);
//static  std::istream & operator>>( std::istream & , Vec3b &);
//static  std::istream & operator>>( std::istream & , Vec3d &);
//static  std::istream & operator>>( std::istream & , Vec3f &);
//static  std::istream & operator>>( std::istream & , Vec3i &);
//static  std::istream & operator>>( std::istream & , Vec3s &);
//static  std::istream & operator>>( std::istream & , Vec4b &);
//static  std::istream & operator>>( std::istream & , Vec4d &);
//static  std::istream & operator>>( std::istream & , Vec4f &);
//static  std::istream & operator>>( std::istream & , Vec4i &);
//static  std::istream & operator>>( std::istream & , Vec4s &);
//static  std::istream & operator>>( std::istream & , Vec4ub &);
//static  std::ostream & notify();
//static  std::ostream & notify(const  NotifySeverity );
//static  std::ostream & operator<<( std::ostream & ,const  Matrixd &);
//static  std::ostream & operator<<( std::ostream & ,const  Matrixf &);
//static  std::ostream & operator<<( std::ostream & ,const  Plane &);
//static  std::ostream & operator<<( std::ostream & ,const  Quat &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec2b &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec2d &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec2f &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec2i &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec2s &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec3b &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec3d &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec3f &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec3i &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec3s &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4b &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4d &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4f &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4i &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4s &);
//static  std::ostream & operator<<( std::ostream & ,const  Vec4ub &);
//static  std::string & getGLExtensionDisableString();
//static  unsigned int  maximimNumOfComponents(const  ImageList &);
//static  void  _modifyRow( unsigned int  , GLenum  , T * , float  ,const  M &);
//static  void  _readRow( unsigned int  , GLenum  ,const  T * , O &);
//static  void  _readRow( unsigned int  , GLenum  ,const  T * , float  , O &);
//static  void  clampArray3BetweenRange( A & ,const  T  ,const  T  ,const  char *);
//static  void  clampArray3GEQUAL( A & ,const  T  ,const  char *);
//static  void  clampArray3LEQUAL( A & ,const  T  ,const  char *);
//static  void  clampArray4BetweenRange( A & ,const  T  ,const  T  ,const  char *);
//static  void  clampArray4GEQUAL( A & ,const  T  ,const  char *);
//static  void  clampArray4LEQUAL( A & ,const  T  ,const  char *);
//static  void  clampArrayElementBetweenRange( A & , unsigned int  ,const  T  ,const  T  ,const  char *);
//static  void  clampArrayElementGEQUAL( A & , unsigned int  ,const  T  ,const  char *);
//static  void  clampArrayElementLEQUAL( A & , unsigned int  ,const  T  ,const  char *);
//static  void  clampArrayElementsBetweenRange( A & , unsigned int  , unsigned int  ,const  T  ,const  T  ,const  char *);
//static  void  clampArrayElementsGEQUAL( A & , unsigned int  , unsigned int  ,const  T  ,const  char *);
//static  void  clampArrayElementsLEQUAL( A & , unsigned int  , unsigned int  ,const  T  ,const  char *);
//static  void  clampBetweenRange( T & ,const  T  ,const  T  ,const  char *);
//static  void  clampGEQUAL( T & ,const  T  ,const  char *);
//static  void  clampLEQUAL( T & ,const  T  ,const  char *);
//static  void  deleteAllGLObjects( unsigned int );
//static  void  discardAllGLObjects( unsigned int );
//static  void  flushAllDeletedGLObjects( unsigned int );
//static  void  flushDeletedGLObjects( unsigned int  , double  , double &);
//static  void * getGLExtensionFuncPtr(const  char *);
//static  void * getGLExtensionFuncPtr(const  char * ,const  char *);
//static  void * getGLExtensionFuncPtr(const  char * ,const  char * ,const  char *);
//static  void  intrusive_ptr_add_ref( Referenced *);
//static  void  intrusive_ptr_release( Referenced *);
//static  void  modifyImage( osg::Image * ,const  M &);
//static  void  modifyRow( unsigned int  , GLenum  , GLenum  , unsigned char * ,const  M &);
//static  void  readImage(const  osg::Image * , O &);
//static  void  readRow( unsigned int  , GLenum  , GLenum  ,const  unsigned char * , O &);
//static  void  setGLExtensionDisableString(const  std::string &);
//static  void  setNotifyHandler( NotifyHandler *);
//static  void  setNotifyLevel( NotifySeverity );
//static  void  swap( MixinVector<ValueT> & , MixinVector<ValueT> &);
//static  void  swap( MixinVector<ValueT> & , std::vector<ValueT> &);
//static  void  swap( ref_ptr<T> & , ref_ptr<T> &);
//static  void  swap( std::vector<ValueT> & , MixinVector<ValueT> &);
//static  void  swapBytes( T &);
//static  void  swapBytes( char * , unsigned int );
//static  void  swapBytes16( char *);
//static  void  swapBytes2( char *);
//static  void  swapBytes4( char *);
//static  void  swapBytes8( char *);
//static const  CallbackObject * getCallbackObject(const  osg::Object * ,const  std::string &);
//static const  Object * getUserObject(const  osg::Object * ,const  std::string &);
class  QReflect_osg : public QObject{
Q_OBJECT
public:
QReflect_osg(const  QReflect_osg& o){}
QReflect_osg( ){}
Q_INVOKABLE  bool  clearImageToColor(osg::QReflect_Image *image ,osg::QReflect_Vec4f *colour);

Q_INVOKABLE  bool  computeMinMax(osg::QReflect_Image *image ,osg::QReflect_Vec4f *min ,osg::QReflect_Vec4f *max);

Q_INVOKABLE  bool  copyImage(osg::QReflect_Image *srcImage , int src_s , int src_t , int src_r , int width , int height , int depth ,osg::QReflect_Image *destImage , int dest_s , int dest_t , int dest_r , bool doRescale);

Q_INVOKABLE  bool  equivalent( double lhs , double rhs , double epsilon);

Q_INVOKABLE  bool  equivalent( float lhs , float rhs , float epsilon);

Q_INVOKABLE  bool  getNormalize(osg::QReflect_Array *array);

Q_INVOKABLE  bool  initNotifyLevel();

Q_INVOKABLE  bool  isExtensionInExtensionString(const  char *extension ,const  char *extensionString);

Q_INVOKABLE  bool  isGLExtensionOrVersionSupported( unsigned int contextID ,const  char *extension , float requiredGlVersion);

Q_INVOKABLE  bool  isGLExtensionSupported( unsigned int contextID ,const  char *extension);

Q_INVOKABLE  bool  isNaN( double v);

Q_INVOKABLE  bool  isNaN( float v);

Q_INVOKABLE  bool  offsetAndScaleImage(osg::QReflect_Image *image ,osg::QReflect_Vec4f *offset ,osg::QReflect_Vec4f *scale);

Q_INVOKABLE  double  DegreesToRadians( double angle);

Q_INVOKABLE  double  RadiansToDegrees( double angle);

Q_INVOKABLE  double  asciiToDouble(const  char *str);

Q_INVOKABLE  double  findAsciiToDouble(const  char *str);

Q_INVOKABLE  double  inDegrees( double angle);

Q_INVOKABLE  double  round( double v);

Q_INVOKABLE  float  DegreesToRadians( float angle);

Q_INVOKABLE  float  RadiansToDegrees( float angle);

Q_INVOKABLE  float  asciiToFloat(const  char *str);

Q_INVOKABLE  float  findAsciiToFloat(const  char *str);

Q_INVOKABLE  float  getGLVersionNumber();

Q_INVOKABLE  float  inDegrees( float angle);

Q_INVOKABLE  float  round( float v);

Q_INVOKABLE QString  getGLExtensionDisableString();

Q_INVOKABLE osg::QReflect_Array::Binding  getBinding(osg::QReflect_Array *array);

Q_INVOKABLE osg::QReflect_CallbackObject*  getCallbackObject(osg::QReflect_Object *object ,const  QString &name);

Q_INVOKABLE osg::QReflect_Geode*  createGeodeForImage(osg::QReflect_Image *image , float s , float t);

Q_INVOKABLE osg::QReflect_Geode*  createGeodeForImage(osg::QReflect_Image *image);

Q_INVOKABLE osg::QReflect_Geometry*  createTexturedQuadGeometry(osg::QReflect_Vec3f *corner ,osg::QReflect_Vec3f *widthVec ,osg::QReflect_Vec3f *heightVec , float l , float b , float r , float t);

Q_INVOKABLE osg::QReflect_Geometry*  createTexturedQuadGeometry(osg::QReflect_Vec3f *corner ,osg::QReflect_Vec3f *widthVec ,osg::QReflect_Vec3f *heightVec , float s , float t);

Q_INVOKABLE osg::QReflect_Image*  createImageWithOrientationConversion(osg::QReflect_Image *srcImage ,osg::QReflect_Vec3i *srcOrigin ,osg::QReflect_Vec3i *srcRow ,osg::QReflect_Vec3i *srcColumn ,osg::QReflect_Vec3i *srcLayer);

Q_INVOKABLE osg::QReflect_Image*  createSpotLightImage(osg::QReflect_Vec4f *centerColour ,osg::QReflect_Vec4f *backgroudColour , unsigned int size , float power);

Q_INVOKABLE osg::QReflect_NotifyHandler*  getNotifyHandler();

Q_INVOKABLE osg::QReflect_Object*  getUserObject(osg::QReflect_Object *object ,const  QString &name);

Q_INVOKABLE osg::QReflect_StateSet*  initOQDebugState();

Q_INVOKABLE osg::QReflect_StateSet*  initOQState();

Q_INVOKABLE void  deleteAllGLObjects( unsigned int contextID);

Q_INVOKABLE void  discardAllGLObjects( unsigned int contextID);

Q_INVOKABLE void  flushAllDeletedGLObjects( unsigned int contextID);

Q_INVOKABLE void  flushDeletedGLObjects( unsigned int contextID , double currentTime , double &availableTime);

Q_INVOKABLE void  intrusive_ptr_add_ref(osg::QReflect_Referenced *p);

Q_INVOKABLE void  intrusive_ptr_release(osg::QReflect_Referenced *p);

Q_INVOKABLE void  setGLExtensionDisableString(const  QString &disableString);

Q_INVOKABLE void  setNotifyHandler(osg::QReflect_NotifyHandler *handler);

Q_INVOKABLE void  swapBytes( char *in , unsigned int size);

Q_INVOKABLE void  swapBytes16( char *in);

Q_INVOKABLE void  swapBytes2( char *in);

Q_INVOKABLE void  swapBytes4( char *in);

Q_INVOKABLE void  swapBytes8( char *in);

};
Q_DECLARE_METATYPE(QReflect_osg)
static QObject *QReflect_osg_qobject_singletontype_provider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    Q_UNUSED(scriptEngine)
    QReflect_osg *example = new QReflect_osg();
    return example;
}

namespace pmoc{
	class pluginModule_QQQosg_Library_QMLLibrary: public MetaQQuickLibrary{
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
pluginModule_QQQosg_Library_QMLLibrary();
~pluginModule_QQQosg_Library_QMLLibrary();
	///setup metaclass children and parents (require dependancies to be loaded)
virtual void setupRelations() ;
 };
		 
}
#endif

