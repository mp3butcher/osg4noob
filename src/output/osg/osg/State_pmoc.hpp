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
QReflect_VertexAttribAlias(pmoc::Instance *i=0,QObject* parent=0);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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
class QReflect_VertexAttribAlias;
			} ;
namespace osg{ 
class QReflect_ShaderComposer;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_RefMatrixd;
			} ;
namespace osg{ 
class QReflect_DisplaySettings;
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
QReflect_State(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_State( );
//State
// ArrayDispatchers & getArrayDispatchers();
// AttributeVec & getAttributeVec(const  osg::StateAttribute *);
// DefineMap & getDefineMap();
// DynamicObjectRenderingCompletedCallback * getDynamicObjectRenderingCompletedCallback();
// GLBeginEndAdapter & getGLBeginEndAdapter();
// GLint  getAttribLocation(const  std::string &);
// GLint  getMaxTextureCoords();
// GLint  getMaxTextureUnits();
// GLint  getUniformLocation( unsigned int );
// GLint  getUniformLocation(const  std::string &);
// GLuint64  getGpuTimestamp();
// GraphicsContext * getGraphicsContext();
// Polytope  getViewFrustum();
// StateSet::UniformList & getCurrentShaderCompositionUniformList();
// StateSetStack & getStateSetStack();
// T * get();
// Timer_t  getGpuTick();
// Timer_t  getStartTick();
// bool  applyMode( StateAttribute::GLMode  , bool );
// bool  applyTextureMode( unsigned int  , StateAttribute::GLMode  , bool );
// bool  checkGLErrors( StateAttribute::GLMode );
// bool  convertVertexShaderSourceToOsgBuiltIns( std::string &);
// bool  getGlobalDefaultModeValue( StateAttribute::GLMode );
// bool  getGlobalDefaultTextureModeValue( unsigned int  , StateAttribute::GLMode );
// bool  getLastAppliedMode( StateAttribute::GLMode );
// bool  getLastAppliedTextureMode( unsigned int  , StateAttribute::GLMode );
// bool  getModeValidity( StateAttribute::GLMode );
// bool  supportsShaderRequirements(const  osg::ShaderDefines &);
// std::string  getDefineString(const  osg::ShaderDefines &);
// void  drawQuads( GLint  , GLsizei  , GLsizei );
// void  glDrawArraysInstanced( GLenum  , GLint  , GLsizei  , GLsizei );
// void  glDrawElementsInstanced( GLenum  , GLsizei  , GLenum  ,const  GLvoid * , GLsizei );
// void  haveAppliedMode( StateAttribute::GLMode );
// void  haveAppliedMode( StateAttribute::GLMode  , StateAttribute::GLModeValue );
// void  haveAppliedTextureMode( unsigned int  , StateAttribute::GLMode );
// void  haveAppliedTextureMode( unsigned int  , StateAttribute::GLMode  , StateAttribute::GLModeValue );
// void  print( std::ostream &);
// void  setAttributeBindingList(const  Program::AttribBindingList &);
// void  setColorPointer( GLint  , GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
// void  setDynamicObjectRenderingCompletedCallback( DynamicObjectRenderingCompletedCallback *);
// void  setFogCoordPointer( GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
// void  setGlobalDefaultModeValue( StateAttribute::GLMode  , bool );
// void  setGlobalDefaultTextureModeValue( unsigned int  , StateAttribute::GLMode  , bool );
// void  setGpuTimestamp( Timer_t  , GLuint64 );
// void  setGraphicsContext( GraphicsContext *);
// void  setInterleavedArrays( GLenum  , GLsizei  ,const  GLvoid *);
// void  setLastAppliedProgramObject(const  Program::PerContextProgram *);
// void  setModeValidity( StateAttribute::GLMode  , bool );
// void  setNormalPointer( GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
// void  setSecondaryColorPointer( GLint  , GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
// void  setStartTick( Timer_t );
// void  setTexCoordAliasList(const  VertexAttribAliasList &);
// void  setTexCoordPointer( unsigned int  , GLint  , GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
// void  setVertexAttribIPointer( unsigned int  , GLint  , GLenum  , GLsizei  ,const  GLvoid *);
// void  setVertexAttribLPointer( unsigned int  , GLint  , GLenum  , GLsizei  ,const  GLvoid *);
// void  setVertexAttribPointer( unsigned int  , GLint  , GLenum  , GLboolean  , GLsizei  ,const  GLvoid *);
// void  setVertexPointer( GLint  , GLenum  , GLsizei  ,const  GLvoid * , GLboolean );
//const  AttributeMap & getAttributeMap();
//const  DefineMap & getDefineMap();
//const  GraphicsContext * getGraphicsContext();
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
Q_INVOKABLE  bool  applyAttribute(osg::QReflect_StateAttribute *);
Q_INVOKABLE  bool  applyTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute *);
Q_INVOKABLE  bool  checkGLErrors(const  char *)const;
Q_INVOKABLE  bool  checkGLErrors(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  bool  getAbortRendering()const;
Q_INVOKABLE  bool  isFogCoordSupported()const;
Q_INVOKABLE  bool  isSecondaryColorSupported()const;
Q_INVOKABLE  bool  isVertexBufferObjectSupported()const;
Q_INVOKABLE  bool  supportsShaderRequirement(const  QString &);
Q_INVOKABLE  double  getGpuTime()const;
Q_INVOKABLE  osg::QReflect_DisplaySettings * getDisplaySettings()const;
Q_INVOKABLE  osg::QReflect_FrameStamp * getFrameStamp()const;
Q_INVOKABLE  osg::QReflect_GraphicsCostEstimator * getGraphicsCostEstimator()const;
Q_INVOKABLE  osg::QReflect_ShaderComposer * getShaderComposer()const;
Q_INVOKABLE  unsigned int  getDynamicObjectCount()const;
Q_INVOKABLE  unsigned int  getStateSetStackSize();
Q_INVOKABLE const bool  getShaderCompositionEnabled()const;
Q_INVOKABLE const bool  getUseModelViewAndProjectionUniforms()const;
Q_INVOKABLE const bool  getUseVertexAttributeAliasing()const;
Q_INVOKABLE const int  getTimestampBits()const;
Q_INVOKABLE const unsigned int  getActiveTextureUnit()const;
Q_INVOKABLE const unsigned int  getClientActiveTextureUnit()const;
Q_INVOKABLE const unsigned int  getContextID()const;
Q_INVOKABLE const unsigned int  getMaxBufferObjectPoolSize()const;
Q_INVOKABLE const unsigned int  getMaxTexturePoolSize()const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentElementBufferObject();
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentPixelBufferObject();
Q_INVOKABLE osg::QReflect_GLBufferObject*  getCurrentVertexBufferObject();
Q_INVOKABLE osg::QReflect_State::CheckForGLErrors  getCheckForGLErrors()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getGlobalDefaultAttribute(osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE osg::QReflect_StateAttribute*  getGlobalDefaultTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE osg::QReflect_StateAttribute*  getLastAppliedAttribute(osg::QReflect_StateAttribute::Type  , unsigned int )const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getLastAppliedTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type  , unsigned int )const;
Q_INVOKABLE osg::QReflect_Uniform*  getModelViewMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getModelViewProjectionMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getNormalMatrixUniform();
Q_INVOKABLE osg::QReflect_Uniform*  getProjectionMatrixUniform();
Q_INVOKABLE osg::QReflect_Viewport*  getCurrentViewport()const;
Q_INVOKABLE void  Color( float  , float  , float  , float );
Q_INVOKABLE void  MultiTexCoord( unsigned int  , float  , float  , float  , float );
Q_INVOKABLE void  Normal( float  , float  , float );
Q_INVOKABLE void  TexCoord( float  , float  , float  , float );
Q_INVOKABLE void  VerteAttrib( unsigned int  , float  , float  , float  , float );
Q_INVOKABLE void  Vertex( float  , float  , float  , float );
Q_INVOKABLE void  apply();
Q_INVOKABLE void  apply(osg::QReflect_StateSet *);
Q_INVOKABLE void  applyDisablingOfVertexAttributes();
Q_INVOKABLE void  applyModelViewAndProjectionUniformsIfRequired();
Q_INVOKABLE void  applyModelViewMatrix(osg::QReflect_Matrixd *);
Q_INVOKABLE void  applyModelViewMatrix(osg::QReflect_RefMatrixd *);
Q_INVOKABLE void  applyProjectionMatrix(osg::QReflect_RefMatrixd *);
Q_INVOKABLE void  applyShaderComposition();
Q_INVOKABLE void  applyShaderCompositionUniform(osg::QReflect_Uniform * , unsigned int );
Q_INVOKABLE void  bindElementBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  bindPixelBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  bindVertexBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  captureCurrentState(osg::QReflect_StateSet *)const;
Q_INVOKABLE void  decrementDynamicObjectCount();
Q_INVOKABLE void  dirtyAllAttributes();
Q_INVOKABLE void  dirtyAllModes();
Q_INVOKABLE void  dirtyAllVertexArrays();
Q_INVOKABLE void  dirtyColorPointer();
Q_INVOKABLE void  dirtyFogCoordPointer();
Q_INVOKABLE void  dirtyNormalPointer();
Q_INVOKABLE void  dirtySecondaryColorPointer();
Q_INVOKABLE void  dirtyTexCoordPointer( unsigned int );
Q_INVOKABLE void  dirtyTexCoordPointersAboveAndIncluding( unsigned int );
Q_INVOKABLE void  dirtyVertexAttribPointer( unsigned int );
Q_INVOKABLE void  dirtyVertexAttribPointersAboveAndIncluding( unsigned int );
Q_INVOKABLE void  dirtyVertexPointer();
Q_INVOKABLE void  disableAllVertexArrays();
Q_INVOKABLE void  disableColorPointer();
Q_INVOKABLE void  disableFogCoordPointer();
Q_INVOKABLE void  disableNormalPointer();
Q_INVOKABLE void  disableSecondaryColorPointer();
Q_INVOKABLE void  disableTexCoordPointer( unsigned int );
Q_INVOKABLE void  disableTexCoordPointersAboveAndIncluding( unsigned int );
Q_INVOKABLE void  disableVertexAttribPointer( unsigned int );
Q_INVOKABLE void  disableVertexAttribPointersAboveAndIncluding( unsigned int );
Q_INVOKABLE void  disableVertexPointer();
Q_INVOKABLE void  frameCompleted();
Q_INVOKABLE void  haveAppliedAttribute(osg::QReflect_StateAttribute *);
Q_INVOKABLE void  haveAppliedAttribute(osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE void  haveAppliedTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute *);
Q_INVOKABLE void  haveAppliedTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE void  initializeExtensionProcs();
Q_INVOKABLE void  insertStateSet( unsigned int  ,osg::QReflect_StateSet *);
Q_INVOKABLE void  lazyDisablingOfVertexAttributes();
Q_INVOKABLE void  popAllStateSets();
Q_INVOKABLE void  popStateSet();
Q_INVOKABLE void  popStateSetStackToSize( unsigned int );
Q_INVOKABLE void  pushStateSet(osg::QReflect_StateSet *);
Q_INVOKABLE void  releaseGLObjects();
Q_INVOKABLE void  removeStateSet( unsigned int );
Q_INVOKABLE void  reset();
Q_INVOKABLE void  resetVertexAttributeAlias( bool  , unsigned int );
Q_INVOKABLE void  setAbortRenderingPtr( bool *);
Q_INVOKABLE void  setCheckForGLErrors(osg::QReflect_State::CheckForGLErrors );
Q_INVOKABLE void  setColorAlias(osg::QReflect_VertexAttribAlias *);
Q_INVOKABLE void  setColorPointer(osg::QReflect_Array *);
Q_INVOKABLE void  setCurrentElementBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  setCurrentPixelBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  setCurrentVertexBufferObject(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  setDynamicObjectCount( unsigned int  , bool );
Q_INVOKABLE void  setFogCoordAlias(osg::QReflect_VertexAttribAlias *);
Q_INVOKABLE void  setFogCoordPointer(osg::QReflect_Array *);
Q_INVOKABLE void  setGlobalDefaultAttribute(osg::QReflect_StateAttribute *);
Q_INVOKABLE void  setGlobalDefaultTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute *);
Q_INVOKABLE void  setInitialViewMatrix(osg::QReflect_RefMatrixd *);
Q_INVOKABLE void  setNormalAlias(osg::QReflect_VertexAttribAlias *);
Q_INVOKABLE void  setNormalPointer(osg::QReflect_Array *);
Q_INVOKABLE void  setSecondaryColorAlias(osg::QReflect_VertexAttribAlias *);
Q_INVOKABLE void  setSecondaryColorPointer(osg::QReflect_Array *);
Q_INVOKABLE void  setTexCoordPointer( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setVertexAlias(osg::QReflect_VertexAttribAlias *);
Q_INVOKABLE void  setVertexAttribIPointer( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setVertexAttribLPointer( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setVertexAttribPointer( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setVertexPointer(osg::QReflect_Array *);
Q_INVOKABLE void  unbindElementBufferObject();
Q_INVOKABLE void  unbindPixelBufferObject();
Q_INVOKABLE void  unbindVertexBufferObject();
Q_INVOKABLE void  updateModelViewAndProjectionMatrixUniforms();
Q_INVOKABLE void pmoc_reverse_setDisplaySettings( osg::QReflect_DisplaySettings *par=0);
Q_INVOKABLE void pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par=0);
Q_INVOKABLE void pmoc_reverse_setGraphicsCostEstimator( osg::QReflect_GraphicsCostEstimator *par=0);
Q_INVOKABLE void pmoc_reverse_setShaderComposer( osg::QReflect_ShaderComposer *par=0);
Q_INVOKABLE void setActiveTextureUnit(const unsigned int &);
Q_INVOKABLE void setClientActiveTextureUnit(const unsigned int &);
Q_INVOKABLE void setContextID(const unsigned int &);
Q_INVOKABLE void setDisplaySettings( osg::QReflect_DisplaySettings *par);
Q_INVOKABLE void setFrameStamp( osg::QReflect_FrameStamp *par);
Q_INVOKABLE void setGraphicsCostEstimator( osg::QReflect_GraphicsCostEstimator *par);
Q_INVOKABLE void setMaxBufferObjectPoolSize(const unsigned int &);
Q_INVOKABLE void setMaxTexturePoolSize(const unsigned int &);
Q_INVOKABLE void setShaderComposer( osg::QReflect_ShaderComposer *par);
Q_INVOKABLE void setShaderCompositionEnabled(const bool &);
Q_INVOKABLE void setTimestampBits(const int &);
Q_INVOKABLE void setUseModelViewAndProjectionUniforms(const bool &);
Q_INVOKABLE void setUseVertexAttributeAliasing(const bool &);
Q_PROPERTY(bool ShaderCompositionEnabled  READ getShaderCompositionEnabled WRITE setShaderCompositionEnabled NOTIFY ShaderCompositionEnabledChanged)
Q_PROPERTY(bool UseModelViewAndProjectionUniforms  READ getUseModelViewAndProjectionUniforms WRITE setUseModelViewAndProjectionUniforms NOTIFY UseModelViewAndProjectionUniformsChanged)
Q_PROPERTY(bool UseVertexAttributeAliasing  READ getUseVertexAttributeAliasing WRITE setUseVertexAttributeAliasing NOTIFY UseVertexAttributeAliasingChanged)
Q_PROPERTY(int TimestampBits  READ getTimestampBits WRITE setTimestampBits NOTIFY TimestampBitsChanged)
Q_PROPERTY(unsigned int ActiveTextureUnit  READ getActiveTextureUnit WRITE setActiveTextureUnit NOTIFY ActiveTextureUnitChanged)
Q_PROPERTY(unsigned int ClientActiveTextureUnit  READ getClientActiveTextureUnit WRITE setClientActiveTextureUnit NOTIFY ClientActiveTextureUnitChanged)
Q_PROPERTY(unsigned int ContextID  READ getContextID WRITE setContextID NOTIFY ContextIDChanged)
Q_PROPERTY(unsigned int MaxBufferObjectPoolSize  READ getMaxBufferObjectPoolSize WRITE setMaxBufferObjectPoolSize NOTIFY MaxBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int MaxTexturePoolSize  READ getMaxTexturePoolSize WRITE setMaxTexturePoolSize NOTIFY MaxTexturePoolSizeChanged)
signals: void ActiveTextureUnitChanged(const unsigned int&);
public:
signals: void ClientActiveTextureUnitChanged(const unsigned int&);
public:
signals: void ContextIDChanged(const unsigned int&);
public:
signals: void DisplaySettingsChanged(const osg::QReflect_DisplaySettings*);
public:
signals: void FrameStampChanged(const osg::QReflect_FrameStamp*);
public:
signals: void GraphicsCostEstimatorChanged(const osg::QReflect_GraphicsCostEstimator*);
public:
signals: void MaxBufferObjectPoolSizeChanged(const unsigned int&);
public:
signals: void MaxTexturePoolSizeChanged(const unsigned int&);
public:
signals: void ShaderComposerChanged(const osg::QReflect_ShaderComposer*);
public:
signals: void ShaderCompositionEnabledChanged(const bool&);
public:
signals: void TimestampBitsChanged(const int&);
public:
signals: void UseModelViewAndProjectionUniformsChanged(const bool&);
public:
signals: void UseVertexAttributeAliasingChanged(const bool&);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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

