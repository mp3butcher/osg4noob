#ifndef osg_State_pmocHPP
#define  osg_State_pmocHPP 1


#include <osg/State_pmoc.hpp>
#include <QObject>
#include <osg/State>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_VertexAttribAlias: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
VertexAttribAlias * _model;
QReflect_VertexAttribAlias(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexAttribAlias( );
//VertexAttribAlias
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_VertexAttribAlias: public pmoc::MetaQQuickClass{
protected:
std::set<osg::VertexAttribAlias* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_VertexAttribAlias();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/State_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_ShaderComposer;
			} ;
namespace osg{ 
class QReflect_DisplaySettings;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_RefMatrixd;
			} ;
namespace osg{ 
class QReflect_FrameStamp;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
namespace osg{ 
class QReflect_Viewport;
			} ;
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
namespace osg{ 
class QReflect_VertexAttribAlias;
			} ;
namespace osg{ 
class QReflect_GraphicsCostEstimator;
			} ;
#include <osg/State>
#include <osg/State>

#include <osg/ref_ptr>
#include<osg/StateAttribute_pmoc.hpp>
#include<osg/State_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_State: public pmoc::QQModel
{
Q_OBJECT
public:
 enum CheckForGLErrors{
NEVER_CHECK_GL_ERRORS =State::NEVER_CHECK_GL_ERRORS,
ONCE_PER_FRAME =State::ONCE_PER_FRAME,
ONCE_PER_ATTRIBUTE =State::ONCE_PER_ATTRIBUTE};
  Q_ENUMS(CheckForGLErrors)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
State * _model;
QReflect_State(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_State( );
//State
// ArrayDispatchers & getArrayDispatchers();
// AttributeVec & getAttributeVec(const  osg::StateAttribute *);
// DefineMap & getDefineMap();
// DynamicObjectRenderingCompletedCallback * getDynamicObjectRenderingCompletedCallback();
// GLBeginEndAdapter & getGLBeginEndAdapter();
// GLuint64  getGpuTimestamp();
// Polytope  getViewFrustum();
// StateSet::UniformList & getCurrentShaderCompositionUniformList();
// StateSetStack & getStateSetStack();
// T * get();
// Timer_t  getGpuTick();
// Timer_t  getStartTick();
// bool  convertVertexShaderSourceToOsgBuiltIns( std::string &);
// bool  supportsShaderRequirements(const  osg::ShaderDefines &);
// std::string  getDefineString(const  osg::ShaderDefines &);
// void  print( std::ostream &);
// void  setAttributeBindingList(const  Program::AttribBindingList &);
// void  setDynamicObjectRenderingCompletedCallback( DynamicObjectRenderingCompletedCallback *);
// void  setGpuTimestamp( Timer_t  , GLuint64 );
// void  setLastAppliedProgramObject(const  Program::PerContextProgram *);
// void  setStartTick( Timer_t );
// void  setTexCoordAliasList(const  VertexAttribAliasList &);
//const  AttributeMap & getAttributeMap();
//const  DefineMap & getDefineMap();
//const  ModeMap & getModeMap();
//const  Program::AttribBindingList & getAttributeBindingList();
//const  Program::PerContextProgram * getLastAppliedProgramObject();
//const  T * get();
//const  TextureAttributeMapList & getTextureAttributeMapList();
//const  TextureModeMapList & getTextureModeMapList();
//const  UniformMap & getUniformMap();
//const  VertexAttribAlias & getColorAlias();
//const  VertexAttribAlias & getFogCoordAlias();
//const  VertexAttribAlias & getNormalAlias();
//const  VertexAttribAlias & getSecondaryColorAlias();
//const  VertexAttribAlias & getVertexAlias();
//const  VertexAttribAliasList & getTexCoordAliasList();
//const  osg::Matrix & getInitialInverseViewMatrix();
//const  osg::Matrix & getInitialViewMatrix();
//const  osg::Matrix & getModelViewMatrix();
//const  osg::Matrix & getProjectionMatrix();
Q_INVOKABLE  GLint  getAttribLocation(const  QString &name)const;
Q_INVOKABLE  GLint  getMaxTextureCoords()const;
Q_INVOKABLE  GLint  getMaxTextureUnits()const;
Q_INVOKABLE  GLint  getUniformLocation( unsigned int uniformNameID)const;
Q_INVOKABLE  GLint  getUniformLocation(const  QString &uniformName)const;
Q_INVOKABLE  bool  applyAttribute(osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE  bool  applyMode( GLenum mode , bool enabled);
Q_INVOKABLE  bool  applyTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE  bool  applyTextureMode( unsigned int unit , GLenum mode , bool enabled);
Q_INVOKABLE  bool  checkGLErrors( GLenum mode)const;
Q_INVOKABLE  bool  checkGLErrors(const  char *str)const;
Q_INVOKABLE  bool  checkGLErrors(osg::QReflect_StateAttribute *attribute)const;
Q_INVOKABLE  bool  getAbortRendering()const;
Q_INVOKABLE  bool  getGlobalDefaultModeValue( GLenum mode);
Q_INVOKABLE  bool  getGlobalDefaultTextureModeValue( unsigned int unit , GLenum mode);
Q_INVOKABLE  bool  getLastAppliedMode( GLenum mode)const;
Q_INVOKABLE  bool  getLastAppliedTextureMode( unsigned int unit , GLenum mode)const;
Q_INVOKABLE  bool  getModeValidity( GLenum mode);
Q_INVOKABLE  bool  getShaderCompositionEnabled()const;
Q_INVOKABLE  bool  getUseModelViewAndProjectionUniforms()const;
Q_INVOKABLE  bool  getUseVertexAttributeAliasing()const;
Q_INVOKABLE  bool  isFogCoordSupported()const;
Q_INVOKABLE  bool  isSecondaryColorSupported()const;
Q_INVOKABLE  bool  isVertexBufferObjectSupported()const;
Q_INVOKABLE  bool  setActiveTextureUnit( unsigned int unit);
Q_INVOKABLE  bool  setClientActiveTextureUnit( unsigned int unit);
Q_INVOKABLE  bool  supportsShaderRequirement(const  QString &shaderRequirement);
Q_INVOKABLE  double  getGpuTime()const;
Q_INVOKABLE  int  getTimestampBits()const;
Q_INVOKABLE  unsigned int  getActiveTextureUnit()const;
Q_INVOKABLE  unsigned int  getClientActiveTextureUnit()const;
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE  unsigned int  getDynamicObjectCount()const;
Q_INVOKABLE  unsigned int  getMaxBufferObjectPoolSize()const;
Q_INVOKABLE  unsigned int  getMaxTexturePoolSize()const;
Q_INVOKABLE  unsigned int  getStateSetStackSize();
Q_INVOKABLE osg::QReflect_DisplaySettings*  getDisplaySettings()const;
Q_INVOKABLE osg::QReflect_FrameStamp*  getFrameStamp();
Q_INVOKABLE osg::QReflect_FrameStamp*  getFrameStamp()const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentElementBufferObject();
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentPixelBufferObject();
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentVertexBufferObject();
Q_INVOKABLE osg::QReflect_GraphicsContext*  getGraphicsContext();
Q_INVOKABLE osg::QReflect_GraphicsContext*  getGraphicsContext()const;
Q_INVOKABLE osg::QReflect_GraphicsCostEstimator*  getGraphicsCostEstimator();
Q_INVOKABLE osg::QReflect_GraphicsCostEstimator*  getGraphicsCostEstimator()const;
Q_INVOKABLE osg::QReflect_ShaderComposer*  getShaderComposer();
Q_INVOKABLE osg::QReflect_ShaderComposer*  getShaderComposer()const;
Q_INVOKABLE osg::QReflect_State::CheckForGLErrors  getCheckForGLErrors()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getGlobalDefaultAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE osg::QReflect_StateAttribute*  getGlobalDefaultTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE osg::QReflect_StateAttribute*  getLastAppliedAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member)const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getLastAppliedTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type , unsigned int member)const;
Q_INVOKABLE osg::QReflect_Uniform*  getModelViewMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getModelViewProjectionMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getNormalMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getProjectionMatrixUniform();
Q_INVOKABLE osg::QReflect_Viewport*  getCurrentViewport()const;
Q_INVOKABLE void  Color( float r , float g , float b , float a);
Q_INVOKABLE void  MultiTexCoord( unsigned int unit , float x , float y , float z , float w);
Q_INVOKABLE void  Normal( float x , float y , float z);
Q_INVOKABLE void  TexCoord( float x , float y , float z , float w);
Q_INVOKABLE void  VerteAttrib( unsigned int location , float x , float y , float z , float w);
Q_INVOKABLE void  Vertex( float x , float y , float z , float w);
Q_INVOKABLE void  apply();
Q_INVOKABLE void  apply(osg::QReflect_StateSet *dstate);
Q_INVOKABLE void  applyDisablingOfVertexAttributes();
Q_INVOKABLE void  applyModelViewAndProjectionUniformsIfRequired();
Q_INVOKABLE void  applyModelViewMatrix(osg::QReflect_Matrixd *);
Q_INVOKABLE void  applyModelViewMatrix(osg::QReflect_RefMatrixd *matrix);
Q_INVOKABLE void  applyProjectionMatrix(osg::QReflect_RefMatrixd *matrix);
Q_INVOKABLE void  applyShaderComposition();
Q_INVOKABLE void  applyShaderCompositionUniform(osg::QReflect_Uniform *uniform , unsigned int value);
Q_INVOKABLE void  bindElementBufferObject(osg::QReflect_GLBufferObject *ebo);
Q_INVOKABLE void  bindPixelBufferObject(osg::QReflect_GLBufferObject *pbo);
Q_INVOKABLE void  bindVertexBufferObject(osg::QReflect_GLBufferObject *vbo);
Q_INVOKABLE void  captureCurrentState(osg::QReflect_StateSet *stateset)const;
Q_INVOKABLE void  decrementDynamicObjectCount();
Q_INVOKABLE void  dirtyAllAttributes();
Q_INVOKABLE void  dirtyAllModes();
Q_INVOKABLE void  dirtyAllVertexArrays();
Q_INVOKABLE void  dirtyColorPointer();
Q_INVOKABLE void  dirtyFogCoordPointer();
Q_INVOKABLE void  dirtyNormalPointer();
Q_INVOKABLE void  dirtySecondaryColorPointer();
Q_INVOKABLE void  dirtyTexCoordPointer( unsigned int unit);
Q_INVOKABLE void  dirtyTexCoordPointersAboveAndIncluding( unsigned int unit);
Q_INVOKABLE void  dirtyVertexAttribPointer( unsigned int index);
Q_INVOKABLE void  dirtyVertexAttribPointersAboveAndIncluding( unsigned int index);
Q_INVOKABLE void  dirtyVertexPointer();
Q_INVOKABLE void  disableAllVertexArrays();
Q_INVOKABLE void  disableColorPointer();
Q_INVOKABLE void  disableFogCoordPointer();
Q_INVOKABLE void  disableNormalPointer();
Q_INVOKABLE void  disableSecondaryColorPointer();
Q_INVOKABLE void  disableTexCoordPointer( unsigned int unit);
Q_INVOKABLE void  disableTexCoordPointersAboveAndIncluding( unsigned int unit);
Q_INVOKABLE void  disableVertexAttribPointer( unsigned int index);
Q_INVOKABLE void  disableVertexAttribPointersAboveAndIncluding( unsigned int index);
Q_INVOKABLE void  disableVertexPointer();
Q_INVOKABLE void  drawQuads( GLint first , GLsizei count , GLsizei primCount);
Q_INVOKABLE void  frameCompleted();
Q_INVOKABLE void  glDrawArraysInstanced( GLenum mode , GLint first , GLsizei count , GLsizei primcount);
Q_INVOKABLE void  glDrawElementsInstanced( GLenum mode , GLsizei count , GLenum type ,const  GLvoid *indices , GLsizei primcount);
Q_INVOKABLE void  haveAppliedAttribute(osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  haveAppliedAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE void  haveAppliedMode( GLenum mode , unsigned int value);
Q_INVOKABLE void  haveAppliedMode( GLenum mode);
Q_INVOKABLE void  haveAppliedTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  haveAppliedTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE void  haveAppliedTextureMode( unsigned int unit , GLenum mode , unsigned int value);
Q_INVOKABLE void  haveAppliedTextureMode( unsigned int unit , GLenum mode);
Q_INVOKABLE void  initializeExtensionProcs();
Q_INVOKABLE void  insertStateSet( unsigned int pos ,osg::QReflect_StateSet *dstate);
Q_INVOKABLE void  lazyDisablingOfVertexAttributes();
Q_INVOKABLE void  popAllStateSets();
Q_INVOKABLE void  popStateSet();
Q_INVOKABLE void  popStateSetStackToSize( unsigned int size);
Q_INVOKABLE void  pushStateSet(osg::QReflect_StateSet *dstate);
Q_INVOKABLE void  releaseGLObjects();
Q_INVOKABLE void  removeStateSet( unsigned int pos);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  resetVertexAttributeAlias( bool compactAliasing , unsigned int numTextureUnits);
Q_INVOKABLE void  setAbortRenderingPtr( bool *abortPtr);
Q_INVOKABLE void  setCheckForGLErrors(osg::QReflect_State::CheckForGLErrors check);
Q_INVOKABLE void  setColorAlias(osg::QReflect_VertexAttribAlias *alias);
Q_INVOKABLE void  setColorPointer( GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setColorPointer(osg::QReflect_Array *array);
Q_INVOKABLE void  setContextID( unsigned int contextID);
Q_INVOKABLE void  setCurrentElementBufferObject(osg::QReflect_GLBufferObject *ebo);
Q_INVOKABLE void  setCurrentPixelBufferObject(osg::QReflect_GLBufferObject *pbo);
Q_INVOKABLE void  setCurrentVertexBufferObject(osg::QReflect_GLBufferObject *vbo);
Q_INVOKABLE void  setDisplaySettings(osg::QReflect_DisplaySettings *vs);
Q_INVOKABLE void  setDynamicObjectCount( unsigned int count , bool callCallbackOnZero);
Q_INVOKABLE void  setFogCoordAlias(osg::QReflect_VertexAttribAlias *alias);
Q_INVOKABLE void  setFogCoordPointer( GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setFogCoordPointer(osg::QReflect_Array *array);
Q_INVOKABLE void  setFrameStamp(osg::QReflect_FrameStamp *fs);
Q_INVOKABLE void  setGlobalDefaultAttribute(osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  setGlobalDefaultModeValue( GLenum mode , bool enabled);
Q_INVOKABLE void  setGlobalDefaultTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  setGlobalDefaultTextureModeValue( unsigned int unit , GLenum mode , bool enabled);
Q_INVOKABLE void  setGraphicsContext(osg::QReflect_GraphicsContext *context);
Q_INVOKABLE void  setGraphicsCostEstimator(osg::QReflect_GraphicsCostEstimator *gce);
Q_INVOKABLE void  setInitialViewMatrix(osg::QReflect_RefMatrixd *matrix);
Q_INVOKABLE void  setInterleavedArrays( GLenum format , GLsizei stride ,const  GLvoid *pointer);
Q_INVOKABLE void  setMaxBufferObjectPoolSize( unsigned int size);
Q_INVOKABLE void  setMaxTexturePoolSize( unsigned int size);
Q_INVOKABLE void  setModeValidity( GLenum mode , bool valid);
Q_INVOKABLE void  setNormalAlias(osg::QReflect_VertexAttribAlias *alias);
Q_INVOKABLE void  setNormalPointer( GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setNormalPointer(osg::QReflect_Array *array);
Q_INVOKABLE void  setSecondaryColorAlias(osg::QReflect_VertexAttribAlias *alias);
Q_INVOKABLE void  setSecondaryColorPointer( GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setSecondaryColorPointer(osg::QReflect_Array *array);
Q_INVOKABLE void  setShaderComposer(osg::QReflect_ShaderComposer *sc);
Q_INVOKABLE void  setShaderCompositionEnabled( bool flag);
Q_INVOKABLE void  setTexCoordPointer( unsigned int unit , GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setTexCoordPointer( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  setTimestampBits( int bits);
Q_INVOKABLE void  setUseModelViewAndProjectionUniforms( bool flag);
Q_INVOKABLE void  setUseVertexAttributeAliasing( bool flag);
Q_INVOKABLE void  setVertexAlias(osg::QReflect_VertexAttribAlias *alias);
Q_INVOKABLE void  setVertexAttribIPointer( unsigned int index , GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr);
Q_INVOKABLE void  setVertexAttribIPointer( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  setVertexAttribLPointer( unsigned int index , GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr);
Q_INVOKABLE void  setVertexAttribLPointer( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  setVertexAttribPointer( unsigned int index , GLint size , GLenum type , GLboolean normalized , GLsizei stride ,const  GLvoid *ptr);
Q_INVOKABLE void  setVertexAttribPointer( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  setVertexPointer( GLint size , GLenum type , GLsizei stride ,const  GLvoid *ptr , GLboolean normalized);
Q_INVOKABLE void  setVertexPointer(osg::QReflect_Array *array);
Q_INVOKABLE void  unbindElementBufferObject();
Q_INVOKABLE void  unbindPixelBufferObject();
Q_INVOKABLE void  unbindVertexBufferObject();
Q_INVOKABLE void  updateModelViewAndProjectionMatrixUniforms();
Q_PROPERTY(bool  ShaderCompositionEnabled  READ getShaderCompositionEnabled WRITE setShaderCompositionEnabled NOTIFY ShaderCompositionEnabledChanged)
Q_PROPERTY(bool  UseModelViewAndProjectionUniforms  READ getUseModelViewAndProjectionUniforms WRITE setUseModelViewAndProjectionUniforms NOTIFY UseModelViewAndProjectionUniformsChanged)
Q_PROPERTY(bool  UseVertexAttributeAliasing  READ getUseVertexAttributeAliasing WRITE setUseVertexAttributeAliasing NOTIFY UseVertexAttributeAliasingChanged)
Q_PROPERTY(int  TimestampBits  READ getTimestampBits WRITE setTimestampBits NOTIFY TimestampBitsChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings * DisplaySettings  READ getDisplaySettings WRITE setDisplaySettings NOTIFY DisplaySettingsChanged)
Q_PROPERTY(osg::QReflect_FrameStamp * FrameStamp  READ getFrameStamp WRITE setFrameStamp NOTIFY FrameStampChanged)
Q_PROPERTY(osg::QReflect_GraphicsContext * GraphicsContext  READ getGraphicsContext WRITE setGraphicsContext NOTIFY GraphicsContextChanged)
Q_PROPERTY(osg::QReflect_GraphicsCostEstimator * GraphicsCostEstimator  READ getGraphicsCostEstimator WRITE setGraphicsCostEstimator NOTIFY GraphicsCostEstimatorChanged)
Q_PROPERTY(osg::QReflect_ShaderComposer * ShaderComposer  READ getShaderComposer WRITE setShaderComposer NOTIFY ShaderComposerChanged)
Q_PROPERTY(osg::QReflect_State::CheckForGLErrors  CheckForGLErrors  READ getCheckForGLErrors WRITE setCheckForGLErrors NOTIFY CheckForGLErrorsChanged)
Q_PROPERTY(unsigned int  ActiveTextureUnit  READ getActiveTextureUnit WRITE setActiveTextureUnit NOTIFY ActiveTextureUnitChanged)
Q_PROPERTY(unsigned int  ClientActiveTextureUnit  READ getClientActiveTextureUnit WRITE setClientActiveTextureUnit NOTIFY ClientActiveTextureUnitChanged)
Q_PROPERTY(unsigned int  ContextID  READ getContextID WRITE setContextID NOTIFY ContextIDChanged)
Q_PROPERTY(unsigned int  MaxBufferObjectPoolSize  READ getMaxBufferObjectPoolSize WRITE setMaxBufferObjectPoolSize NOTIFY MaxBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int  MaxTexturePoolSize  READ getMaxTexturePoolSize WRITE setMaxTexturePoolSize NOTIFY MaxTexturePoolSizeChanged)
signals: void ActiveTextureUnitChanged();
public:
signals: void CheckForGLErrorsChanged();
public:
signals: void ClientActiveTextureUnitChanged();
public:
signals: void ContextIDChanged();
public:
signals: void DisplaySettingsChanged();
public:
signals: void FrameStampChanged();
public:
signals: void GraphicsContextChanged();
public:
signals: void GraphicsCostEstimatorChanged();
public:
signals: void MaxBufferObjectPoolSizeChanged();
public:
signals: void MaxTexturePoolSizeChanged();
public:
signals: void ShaderComposerChanged();
public:
signals: void ShaderCompositionEnabledChanged();
public:
signals: void TimestampBitsChanged();
public:
signals: void UseModelViewAndProjectionUniformsChanged();
public:
signals: void UseVertexAttributeAliasingChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_State: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::State> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_State();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_State_pmocHPP

