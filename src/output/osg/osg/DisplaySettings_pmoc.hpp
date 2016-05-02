#ifndef osg_DisplaySettings_pmocHPP
#define  osg_DisplaySettings_pmocHPP 1


#include <osg/DisplaySettings_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ArgumentParser;
			} ;
namespace osg{ 
class QReflect_DisplaySettings;
			} ;
#include <osg/DisplaySettings>
#include <osg/DisplaySettings>

#include <osg/ref_ptr>
#include<osg/DisplaySettings_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DisplaySettings: public pmoc::QQModel
{
Q_OBJECT
public:
 enum DisplayType{
MONITOR =DisplaySettings::MONITOR,
POWERWALL =DisplaySettings::POWERWALL,
REALITY_CENTER =DisplaySettings::REALITY_CENTER,
HEAD_MOUNTED_DISPLAY =DisplaySettings::HEAD_MOUNTED_DISPLAY};
  Q_ENUMS(DisplayType)
private:
public:
 enum ImplicitBufferAttachment{
IMPLICIT_DEPTH_BUFFER_ATTACHMENT =DisplaySettings::IMPLICIT_DEPTH_BUFFER_ATTACHMENT,
IMPLICIT_STENCIL_BUFFER_ATTACHMENT =DisplaySettings::IMPLICIT_STENCIL_BUFFER_ATTACHMENT,
IMPLICIT_COLOR_BUFFER_ATTACHMENT =DisplaySettings::IMPLICIT_COLOR_BUFFER_ATTACHMENT,
DEFAULT_IMPLICIT_BUFFER_ATTACHMENT =DisplaySettings::DEFAULT_IMPLICIT_BUFFER_ATTACHMENT};
  Q_ENUMS(ImplicitBufferAttachment)
private:
public:
 enum OSXMenubarBehavior{
MENUBAR_AUTO_HIDE =DisplaySettings::MENUBAR_AUTO_HIDE,
MENUBAR_FORCE_HIDE =DisplaySettings::MENUBAR_FORCE_HIDE,
MENUBAR_FORCE_SHOW =DisplaySettings::MENUBAR_FORCE_SHOW};
  Q_ENUMS(OSXMenubarBehavior)
private:
public:
 enum SplitStereoHorizontalEyeMapping{
LEFT_EYE_LEFT_VIEWPORT =DisplaySettings::LEFT_EYE_LEFT_VIEWPORT,
LEFT_EYE_RIGHT_VIEWPORT =DisplaySettings::LEFT_EYE_RIGHT_VIEWPORT};
  Q_ENUMS(SplitStereoHorizontalEyeMapping)
private:
public:
 enum SplitStereoVerticalEyeMapping{
LEFT_EYE_TOP_VIEWPORT =DisplaySettings::LEFT_EYE_TOP_VIEWPORT,
LEFT_EYE_BOTTOM_VIEWPORT =DisplaySettings::LEFT_EYE_BOTTOM_VIEWPORT};
  Q_ENUMS(SplitStereoVerticalEyeMapping)
private:
public:
 enum StereoMode{
QUAD_BUFFER =DisplaySettings::QUAD_BUFFER,
ANAGLYPHIC =DisplaySettings::ANAGLYPHIC,
HORIZONTAL_SPLIT =DisplaySettings::HORIZONTAL_SPLIT,
VERTICAL_SPLIT =DisplaySettings::VERTICAL_SPLIT,
LEFT_EYE =DisplaySettings::LEFT_EYE,
RIGHT_EYE =DisplaySettings::RIGHT_EYE,
HORIZONTAL_INTERLACE =DisplaySettings::HORIZONTAL_INTERLACE,
VERTICAL_INTERLACE =DisplaySettings::VERTICAL_INTERLACE,
CHECKERBOARD =DisplaySettings::CHECKERBOARD};
  Q_ENUMS(StereoMode)
private:
public:
 enum SwapMethod{
SWAP_DEFAULT =DisplaySettings::SWAP_DEFAULT,
SWAP_EXCHANGE =DisplaySettings::SWAP_EXCHANGE,
SWAP_COPY =DisplaySettings::SWAP_COPY,
SWAP_UNDEFINED =DisplaySettings::SWAP_UNDEFINED};
  Q_ENUMS(SwapMethod)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DisplaySettings * _model;
QReflect_DisplaySettings(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DisplaySettings( );
//DisplaySettings
// DisplaySettings & operator=(const  DisplaySettings &);
// FileNames & getKeystoneFileNames();
// Objects & getKeystones();
//virtual  osg::Matrixd  computeLeftEyeProjectionImplementation(const  osg::Matrixd &);
//virtual  osg::Matrixd  computeLeftEyeViewImplementation(const  osg::Matrixd & , double );
//virtual  osg::Matrixd  computeRightEyeProjectionImplementation(const  osg::Matrixd &);
//virtual  osg::Matrixd  computeRightEyeViewImplementation(const  osg::Matrixd & , double );
// ref_ptr<DisplaySettings> & instance();
// void  setKeystoneFileNames(const  FileNames &);
// void  setKeystones(const  Objects &);
//const  FileNames & getKeystoneFileNames();
//const  Objects & getKeystones();
Q_INVOKABLE  bool  getAccumBuffer()const;
Q_INVOKABLE  bool  getAlphaBuffer()const;
Q_INVOKABLE  bool  getCompileContextsHint()const;
Q_INVOKABLE  bool  getDepthBuffer()const;
Q_INVOKABLE  bool  getDoubleBuffer()const;
Q_INVOKABLE  bool  getKeystoneHint()const;
Q_INVOKABLE  bool  getMultiSamples()const;
Q_INVOKABLE  bool  getRGB()const;
Q_INVOKABLE  bool  getSerializeDrawDispatch()const;
Q_INVOKABLE  bool  getSplitStereoAutoAdjustAspectRatio()const;
Q_INVOKABLE  bool  getStencilBuffer()const;
Q_INVOKABLE  bool  getStereo()const;
Q_INVOKABLE  bool  getUseSceneViewForStereoHint()const;
Q_INVOKABLE  float  getEyeSeparation()const;
Q_INVOKABLE  float  getScreenDistance()const;
Q_INVOKABLE  float  getScreenHeight()const;
Q_INVOKABLE  float  getScreenWidth()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentRenderMask()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentResolveMask()const;
Q_INVOKABLE  int  getNvOptimusEnablement()const;
Q_INVOKABLE  int  getSplitStereoHorizontalSeparation()const;
Q_INVOKABLE  int  getSplitStereoVerticalSeparation()const;
Q_INVOKABLE  unsigned int  getGLContextFlags()const;
Q_INVOKABLE  unsigned int  getGLContextProfileMask()const;
Q_INVOKABLE  unsigned int  getMaxBufferObjectPoolSize()const;
Q_INVOKABLE  unsigned int  getMaxNumberOfGraphicsContexts()const;
Q_INVOKABLE  unsigned int  getMaxTexturePoolSize()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumAlphaBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumBlueBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumGreenBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumRedBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAlphaBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumStencilBits()const;
Q_INVOKABLE  unsigned int  getNumMultiSamples()const;
Q_INVOKABLE  unsigned int  getNumOfDatabaseThreadsHint()const;
Q_INVOKABLE  unsigned int  getNumOfHttpDatabaseThreadsHint()const;
Q_INVOKABLE  unsigned int  getSyncSwapBuffers()const;
Q_INVOKABLE QString  getApplication();
Q_INVOKABLE QString  getGLContextVersion()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::DisplayType  getDisplayType()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::OSXMenubarBehavior  getOSXMenubarBehavior()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  getSplitStereoHorizontalEyeMapping()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  getSplitStereoVerticalEyeMapping()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::StereoMode  getStereoMode()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SwapMethod  getSwapMethod();
Q_INVOKABLE void  merge(osg::QReflect_DisplaySettings *vs);
Q_INVOKABLE void  readCommandLine(osg::QReflect_ArgumentParser *arguments);
Q_INVOKABLE void  readEnvironmentalVariables();
Q_INVOKABLE void  setApplication(const  QString &application);
Q_INVOKABLE void  setCompileContextsHint( bool useCompileContexts);
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setDepthBuffer( bool flag);
Q_INVOKABLE void  setDisplaySettings(osg::QReflect_DisplaySettings *vs);
Q_INVOKABLE void  setDisplayType(osg::QReflect_DisplaySettings::DisplayType type);
Q_INVOKABLE void  setDoubleBuffer( bool flag);
Q_INVOKABLE void  setEyeSeparation( float eyeSeparation);
Q_INVOKABLE void  setGLContextFlags( unsigned int flags);
Q_INVOKABLE void  setGLContextProfileMask( unsigned int mask);
Q_INVOKABLE void  setGLContextVersion(const  QString &version);
Q_INVOKABLE void  setImplicitBufferAttachmentMask( int renderMask , int resolveMask);
Q_INVOKABLE void  setImplicitBufferAttachmentRenderMask( int implicitBufferAttachmentRenderMask);
Q_INVOKABLE void  setImplicitBufferAttachmentResolveMask( int implicitBufferAttachmentResolveMask);
Q_INVOKABLE void  setKeystoneHint( bool enabled);
Q_INVOKABLE void  setMaxBufferObjectPoolSize( unsigned int size);
Q_INVOKABLE void  setMaxNumberOfGraphicsContexts( unsigned int num);
Q_INVOKABLE void  setMaxTexturePoolSize( unsigned int size);
Q_INVOKABLE void  setMinimumNumAccumBits( unsigned int red , unsigned int green , unsigned int blue , unsigned int alpha);
Q_INVOKABLE void  setMinimumNumAlphaBits( unsigned int bits);
Q_INVOKABLE void  setMinimumNumStencilBits( unsigned int bits);
Q_INVOKABLE void  setNumMultiSamples( unsigned int samples);
Q_INVOKABLE void  setNumOfDatabaseThreadsHint( unsigned int numThreads);
Q_INVOKABLE void  setNumOfHttpDatabaseThreadsHint( unsigned int numThreads);
Q_INVOKABLE void  setNvOptimusEnablement( int value);
Q_INVOKABLE void  setOSXMenubarBehavior(osg::QReflect_DisplaySettings::OSXMenubarBehavior hint);
Q_INVOKABLE void  setRGB( bool flag);
Q_INVOKABLE void  setScreenDistance( float distance);
Q_INVOKABLE void  setScreenHeight( float height);
Q_INVOKABLE void  setScreenWidth( float width);
Q_INVOKABLE void  setSerializeDrawDispatch( bool serializeDrawDispatch);
Q_INVOKABLE void  setSplitStereoAutoAdjustAspectRatio( bool flag);
Q_INVOKABLE void  setSplitStereoHorizontalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping m);
Q_INVOKABLE void  setSplitStereoHorizontalSeparation( int s);
Q_INVOKABLE void  setSplitStereoVerticalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping m);
Q_INVOKABLE void  setSplitStereoVerticalSeparation( int s);
Q_INVOKABLE void  setStereo( bool on);
Q_INVOKABLE void  setStereoMode(osg::QReflect_DisplaySettings::StereoMode mode);
Q_INVOKABLE void  setSwapMethod(osg::QReflect_DisplaySettings::SwapMethod swapMethod);
Q_INVOKABLE void  setSyncSwapBuffers( unsigned int numFrames);
Q_INVOKABLE void  setUseSceneViewForStereoHint( bool hint);
Q_PROPERTY(QString  Application  READ getApplication WRITE setApplication NOTIFY ApplicationChanged)
Q_PROPERTY(bool  CompileContextsHint  READ getCompileContextsHint WRITE setCompileContextsHint NOTIFY CompileContextsHintChanged)
Q_PROPERTY(bool  DepthBuffer  READ getDepthBuffer WRITE setDepthBuffer NOTIFY DepthBufferChanged)
Q_PROPERTY(bool  DoubleBuffer  READ getDoubleBuffer WRITE setDoubleBuffer NOTIFY DoubleBufferChanged)
Q_PROPERTY(bool  KeystoneHint  READ getKeystoneHint WRITE setKeystoneHint NOTIFY KeystoneHintChanged)
Q_PROPERTY(bool  RGB  READ getRGB WRITE setRGB NOTIFY RGBChanged)
Q_PROPERTY(bool  SerializeDrawDispatch  READ getSerializeDrawDispatch WRITE setSerializeDrawDispatch NOTIFY SerializeDrawDispatchChanged)
Q_PROPERTY(bool  SplitStereoAutoAdjustAspectRatio  READ getSplitStereoAutoAdjustAspectRatio WRITE setSplitStereoAutoAdjustAspectRatio NOTIFY SplitStereoAutoAdjustAspectRatioChanged)
Q_PROPERTY(bool  Stereo  READ getStereo WRITE setStereo NOTIFY StereoChanged)
Q_PROPERTY(bool  UseSceneViewForStereoHint  READ getUseSceneViewForStereoHint WRITE setUseSceneViewForStereoHint NOTIFY UseSceneViewForStereoHintChanged)
Q_PROPERTY(float  EyeSeparation  READ getEyeSeparation WRITE setEyeSeparation NOTIFY EyeSeparationChanged)
Q_PROPERTY(float  ScreenDistance  READ getScreenDistance WRITE setScreenDistance NOTIFY ScreenDistanceChanged)
Q_PROPERTY(float  ScreenHeight  READ getScreenHeight WRITE setScreenHeight NOTIFY ScreenHeightChanged)
Q_PROPERTY(float  ScreenWidth  READ getScreenWidth WRITE setScreenWidth NOTIFY ScreenWidthChanged)
Q_PROPERTY(int  ImplicitBufferAttachmentRenderMask  READ getImplicitBufferAttachmentRenderMask WRITE setImplicitBufferAttachmentRenderMask NOTIFY ImplicitBufferAttachmentRenderMaskChanged)
Q_PROPERTY(int  ImplicitBufferAttachmentResolveMask  READ getImplicitBufferAttachmentResolveMask WRITE setImplicitBufferAttachmentResolveMask NOTIFY ImplicitBufferAttachmentResolveMaskChanged)
Q_PROPERTY(int  NvOptimusEnablement  READ getNvOptimusEnablement WRITE setNvOptimusEnablement NOTIFY NvOptimusEnablementChanged)
Q_PROPERTY(int  SplitStereoHorizontalSeparation  READ getSplitStereoHorizontalSeparation WRITE setSplitStereoHorizontalSeparation NOTIFY SplitStereoHorizontalSeparationChanged)
Q_PROPERTY(int  SplitStereoVerticalSeparation  READ getSplitStereoVerticalSeparation WRITE setSplitStereoVerticalSeparation NOTIFY SplitStereoVerticalSeparationChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::DisplayType  DisplayType  READ getDisplayType WRITE setDisplayType NOTIFY DisplayTypeChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::OSXMenubarBehavior  OSXMenubarBehavior  READ getOSXMenubarBehavior WRITE setOSXMenubarBehavior NOTIFY OSXMenubarBehaviorChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  SplitStereoHorizontalEyeMapping  READ getSplitStereoHorizontalEyeMapping WRITE setSplitStereoHorizontalEyeMapping NOTIFY SplitStereoHorizontalEyeMappingChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  SplitStereoVerticalEyeMapping  READ getSplitStereoVerticalEyeMapping WRITE setSplitStereoVerticalEyeMapping NOTIFY SplitStereoVerticalEyeMappingChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::StereoMode  StereoMode  READ getStereoMode WRITE setStereoMode NOTIFY StereoModeChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings::SwapMethod  SwapMethod  READ getSwapMethod WRITE setSwapMethod NOTIFY SwapMethodChanged)
Q_PROPERTY(unsigned int  GLContextFlags  READ getGLContextFlags WRITE setGLContextFlags NOTIFY GLContextFlagsChanged)
Q_PROPERTY(unsigned int  GLContextProfileMask  READ getGLContextProfileMask WRITE setGLContextProfileMask NOTIFY GLContextProfileMaskChanged)
Q_PROPERTY(unsigned int  MaxBufferObjectPoolSize  READ getMaxBufferObjectPoolSize WRITE setMaxBufferObjectPoolSize NOTIFY MaxBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int  MaxNumberOfGraphicsContexts  READ getMaxNumberOfGraphicsContexts WRITE setMaxNumberOfGraphicsContexts NOTIFY MaxNumberOfGraphicsContextsChanged)
Q_PROPERTY(unsigned int  MaxTexturePoolSize  READ getMaxTexturePoolSize WRITE setMaxTexturePoolSize NOTIFY MaxTexturePoolSizeChanged)
Q_PROPERTY(unsigned int  MinimumNumAlphaBits  READ getMinimumNumAlphaBits WRITE setMinimumNumAlphaBits NOTIFY MinimumNumAlphaBitsChanged)
Q_PROPERTY(unsigned int  MinimumNumStencilBits  READ getMinimumNumStencilBits WRITE setMinimumNumStencilBits NOTIFY MinimumNumStencilBitsChanged)
Q_PROPERTY(unsigned int  NumMultiSamples  READ getNumMultiSamples WRITE setNumMultiSamples NOTIFY NumMultiSamplesChanged)
Q_PROPERTY(unsigned int  NumOfDatabaseThreadsHint  READ getNumOfDatabaseThreadsHint WRITE setNumOfDatabaseThreadsHint NOTIFY NumOfDatabaseThreadsHintChanged)
Q_PROPERTY(unsigned int  NumOfHttpDatabaseThreadsHint  READ getNumOfHttpDatabaseThreadsHint WRITE setNumOfHttpDatabaseThreadsHint NOTIFY NumOfHttpDatabaseThreadsHintChanged)
Q_PROPERTY(unsigned int  SyncSwapBuffers  READ getSyncSwapBuffers WRITE setSyncSwapBuffers NOTIFY SyncSwapBuffersChanged)
signals: void ApplicationChanged();
public:
signals: void CompileContextsHintChanged();
public:
signals: void DepthBufferChanged();
public:
signals: void DisplayTypeChanged();
public:
signals: void DoubleBufferChanged();
public:
signals: void EyeSeparationChanged();
public:
signals: void GLContextFlagsChanged();
public:
signals: void GLContextProfileMaskChanged();
public:
signals: void ImplicitBufferAttachmentRenderMaskChanged();
public:
signals: void ImplicitBufferAttachmentResolveMaskChanged();
public:
signals: void KeystoneHintChanged();
public:
signals: void MaxBufferObjectPoolSizeChanged();
public:
signals: void MaxNumberOfGraphicsContextsChanged();
public:
signals: void MaxTexturePoolSizeChanged();
public:
signals: void MinimumNumAlphaBitsChanged();
public:
signals: void MinimumNumStencilBitsChanged();
public:
signals: void NumMultiSamplesChanged();
public:
signals: void NumOfDatabaseThreadsHintChanged();
public:
signals: void NumOfHttpDatabaseThreadsHintChanged();
public:
signals: void NvOptimusEnablementChanged();
public:
signals: void OSXMenubarBehaviorChanged();
public:
signals: void RGBChanged();
public:
signals: void ScreenDistanceChanged();
public:
signals: void ScreenHeightChanged();
public:
signals: void ScreenWidthChanged();
public:
signals: void SerializeDrawDispatchChanged();
public:
signals: void SplitStereoAutoAdjustAspectRatioChanged();
public:
signals: void SplitStereoHorizontalEyeMappingChanged();
public:
signals: void SplitStereoHorizontalSeparationChanged();
public:
signals: void SplitStereoVerticalEyeMappingChanged();
public:
signals: void SplitStereoVerticalSeparationChanged();
public:
signals: void StereoChanged();
public:
signals: void StereoModeChanged();
public:
signals: void SwapMethodChanged();
public:
signals: void SyncSwapBuffersChanged();
public:
signals: void UseSceneViewForStereoHintChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DisplaySettings: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DisplaySettings> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DisplaySettings();
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


#endif //osg_DisplaySettings_pmocHPP

