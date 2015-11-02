#ifndef osg_DisplaySettings_pmocHPP
#define  osg_DisplaySettings_pmocHPP 1
#include <osg/DisplaySettings_pmoc.hpp>
#include <QObject>
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
QReflect_DisplaySettings(pmoc::Instance *i=0,QObject* parent=0);
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
// void  readCommandLine( ArgumentParser &);
// void  setKeystoneFileNames(const  FileNames &);
// void  setKeystones(const  Objects &);
//const  FileNames & getKeystoneFileNames();
//const  Objects & getKeystones();
Q_INVOKABLE  bool  getAccumBuffer()const;
Q_INVOKABLE  bool  getAlphaBuffer()const;
Q_INVOKABLE  bool  getMultiSamples()const;
Q_INVOKABLE  bool  getStencilBuffer()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentRenderMask()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentResolveMask()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumAlphaBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumBlueBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumGreenBits()const;
Q_INVOKABLE  unsigned int  getMinimumNumAccumRedBits()const;
Q_INVOKABLE QString  getGLContextVersion()const;
Q_INVOKABLE const QString  getApplication()const;
Q_INVOKABLE const bool  getCompileContextsHint()const;
Q_INVOKABLE const bool  getDepthBuffer()const;
Q_INVOKABLE const bool  getDoubleBuffer()const;
Q_INVOKABLE const bool  getKeystoneHint()const;
Q_INVOKABLE const bool  getRGB()const;
Q_INVOKABLE const bool  getSerializeDrawDispatch()const;
Q_INVOKABLE const bool  getSplitStereoAutoAdjustAspectRatio()const;
Q_INVOKABLE const bool  getStereo()const;
Q_INVOKABLE const bool  getUseSceneViewForStereoHint()const;
Q_INVOKABLE const float  getEyeSeparation()const;
Q_INVOKABLE const float  getScreenDistance()const;
Q_INVOKABLE const float  getScreenHeight()const;
Q_INVOKABLE const float  getScreenWidth()const;
Q_INVOKABLE const int  getNvOptimusEnablement()const;
Q_INVOKABLE const int  getSplitStereoHorizontalSeparation()const;
Q_INVOKABLE const int  getSplitStereoVerticalSeparation()const;
Q_INVOKABLE const unsigned int  getGLContextFlags()const;
Q_INVOKABLE const unsigned int  getGLContextProfileMask()const;
Q_INVOKABLE const unsigned int  getMaxBufferObjectPoolSize()const;
Q_INVOKABLE const unsigned int  getMaxNumberOfGraphicsContexts()const;
Q_INVOKABLE const unsigned int  getMaxTexturePoolSize()const;
Q_INVOKABLE const unsigned int  getMinimumNumAlphaBits()const;
Q_INVOKABLE const unsigned int  getMinimumNumStencilBits()const;
Q_INVOKABLE const unsigned int  getNumMultiSamples()const;
Q_INVOKABLE const unsigned int  getNumOfDatabaseThreadsHint()const;
Q_INVOKABLE const unsigned int  getNumOfHttpDatabaseThreadsHint()const;
Q_INVOKABLE const unsigned int  getSyncSwapBuffers()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::DisplayType  getDisplayType()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::OSXMenubarBehavior  getOSXMenubarBehavior()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping  getSplitStereoHorizontalEyeMapping()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping  getSplitStereoVerticalEyeMapping()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::StereoMode  getStereoMode()const;
Q_INVOKABLE osg::QReflect_DisplaySettings::SwapMethod  getSwapMethod();
Q_INVOKABLE void  merge(osg::QReflect_DisplaySettings *);
Q_INVOKABLE void  readEnvironmentalVariables();
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setDisplaySettings(osg::QReflect_DisplaySettings *);
Q_INVOKABLE void  setDisplayType(osg::QReflect_DisplaySettings::DisplayType );
Q_INVOKABLE void  setGLContextVersion(const  QString &);
Q_INVOKABLE void  setImplicitBufferAttachmentMask( int  , int );
Q_INVOKABLE void  setImplicitBufferAttachmentRenderMask( int );
Q_INVOKABLE void  setImplicitBufferAttachmentResolveMask( int );
Q_INVOKABLE void  setMinimumNumAccumBits( unsigned int  , unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE void  setOSXMenubarBehavior(osg::QReflect_DisplaySettings::OSXMenubarBehavior );
Q_INVOKABLE void  setSplitStereoHorizontalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoHorizontalEyeMapping );
Q_INVOKABLE void  setSplitStereoVerticalEyeMapping(osg::QReflect_DisplaySettings::SplitStereoVerticalEyeMapping );
Q_INVOKABLE void  setStereoMode(osg::QReflect_DisplaySettings::StereoMode );
Q_INVOKABLE void  setSwapMethod(osg::QReflect_DisplaySettings::SwapMethod );
Q_INVOKABLE void setApplication(const QString &);
Q_INVOKABLE void setCompileContextsHint(const bool &);
Q_INVOKABLE void setDepthBuffer(const bool &);
Q_INVOKABLE void setDoubleBuffer(const bool &);
Q_INVOKABLE void setEyeSeparation(const float &);
Q_INVOKABLE void setGLContextFlags(const unsigned int &);
Q_INVOKABLE void setGLContextProfileMask(const unsigned int &);
Q_INVOKABLE void setKeystoneHint(const bool &);
Q_INVOKABLE void setMaxBufferObjectPoolSize(const unsigned int &);
Q_INVOKABLE void setMaxNumberOfGraphicsContexts(const unsigned int &);
Q_INVOKABLE void setMaxTexturePoolSize(const unsigned int &);
Q_INVOKABLE void setMinimumNumAlphaBits(const unsigned int &);
Q_INVOKABLE void setMinimumNumStencilBits(const unsigned int &);
Q_INVOKABLE void setNumMultiSamples(const unsigned int &);
Q_INVOKABLE void setNumOfDatabaseThreadsHint(const unsigned int &);
Q_INVOKABLE void setNumOfHttpDatabaseThreadsHint(const unsigned int &);
Q_INVOKABLE void setNvOptimusEnablement(const int &);
Q_INVOKABLE void setRGB(const bool &);
Q_INVOKABLE void setScreenDistance(const float &);
Q_INVOKABLE void setScreenHeight(const float &);
Q_INVOKABLE void setScreenWidth(const float &);
Q_INVOKABLE void setSerializeDrawDispatch(const bool &);
Q_INVOKABLE void setSplitStereoAutoAdjustAspectRatio(const bool &);
Q_INVOKABLE void setSplitStereoHorizontalSeparation(const int &);
Q_INVOKABLE void setSplitStereoVerticalSeparation(const int &);
Q_INVOKABLE void setStereo(const bool &);
Q_INVOKABLE void setSyncSwapBuffers(const unsigned int &);
Q_INVOKABLE void setUseSceneViewForStereoHint(const bool &);
Q_PROPERTY(QString Application  READ getApplication WRITE setApplication NOTIFY ApplicationChanged)
Q_PROPERTY(bool CompileContextsHint  READ getCompileContextsHint WRITE setCompileContextsHint NOTIFY CompileContextsHintChanged)
Q_PROPERTY(bool DepthBuffer  READ getDepthBuffer WRITE setDepthBuffer NOTIFY DepthBufferChanged)
Q_PROPERTY(bool DoubleBuffer  READ getDoubleBuffer WRITE setDoubleBuffer NOTIFY DoubleBufferChanged)
Q_PROPERTY(bool KeystoneHint  READ getKeystoneHint WRITE setKeystoneHint NOTIFY KeystoneHintChanged)
Q_PROPERTY(bool RGB  READ getRGB WRITE setRGB NOTIFY RGBChanged)
Q_PROPERTY(bool SerializeDrawDispatch  READ getSerializeDrawDispatch WRITE setSerializeDrawDispatch NOTIFY SerializeDrawDispatchChanged)
Q_PROPERTY(bool SplitStereoAutoAdjustAspectRatio  READ getSplitStereoAutoAdjustAspectRatio WRITE setSplitStereoAutoAdjustAspectRatio NOTIFY SplitStereoAutoAdjustAspectRatioChanged)
Q_PROPERTY(bool Stereo  READ getStereo WRITE setStereo NOTIFY StereoChanged)
Q_PROPERTY(bool UseSceneViewForStereoHint  READ getUseSceneViewForStereoHint WRITE setUseSceneViewForStereoHint NOTIFY UseSceneViewForStereoHintChanged)
Q_PROPERTY(float EyeSeparation  READ getEyeSeparation WRITE setEyeSeparation NOTIFY EyeSeparationChanged)
Q_PROPERTY(float ScreenDistance  READ getScreenDistance WRITE setScreenDistance NOTIFY ScreenDistanceChanged)
Q_PROPERTY(float ScreenHeight  READ getScreenHeight WRITE setScreenHeight NOTIFY ScreenHeightChanged)
Q_PROPERTY(float ScreenWidth  READ getScreenWidth WRITE setScreenWidth NOTIFY ScreenWidthChanged)
Q_PROPERTY(int NvOptimusEnablement  READ getNvOptimusEnablement WRITE setNvOptimusEnablement NOTIFY NvOptimusEnablementChanged)
Q_PROPERTY(int SplitStereoHorizontalSeparation  READ getSplitStereoHorizontalSeparation WRITE setSplitStereoHorizontalSeparation NOTIFY SplitStereoHorizontalSeparationChanged)
Q_PROPERTY(int SplitStereoVerticalSeparation  READ getSplitStereoVerticalSeparation WRITE setSplitStereoVerticalSeparation NOTIFY SplitStereoVerticalSeparationChanged)
Q_PROPERTY(unsigned int GLContextFlags  READ getGLContextFlags WRITE setGLContextFlags NOTIFY GLContextFlagsChanged)
Q_PROPERTY(unsigned int GLContextProfileMask  READ getGLContextProfileMask WRITE setGLContextProfileMask NOTIFY GLContextProfileMaskChanged)
Q_PROPERTY(unsigned int MaxBufferObjectPoolSize  READ getMaxBufferObjectPoolSize WRITE setMaxBufferObjectPoolSize NOTIFY MaxBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int MaxNumberOfGraphicsContexts  READ getMaxNumberOfGraphicsContexts WRITE setMaxNumberOfGraphicsContexts NOTIFY MaxNumberOfGraphicsContextsChanged)
Q_PROPERTY(unsigned int MaxTexturePoolSize  READ getMaxTexturePoolSize WRITE setMaxTexturePoolSize NOTIFY MaxTexturePoolSizeChanged)
Q_PROPERTY(unsigned int MinimumNumAlphaBits  READ getMinimumNumAlphaBits WRITE setMinimumNumAlphaBits NOTIFY MinimumNumAlphaBitsChanged)
Q_PROPERTY(unsigned int MinimumNumStencilBits  READ getMinimumNumStencilBits WRITE setMinimumNumStencilBits NOTIFY MinimumNumStencilBitsChanged)
Q_PROPERTY(unsigned int NumMultiSamples  READ getNumMultiSamples WRITE setNumMultiSamples NOTIFY NumMultiSamplesChanged)
Q_PROPERTY(unsigned int NumOfDatabaseThreadsHint  READ getNumOfDatabaseThreadsHint WRITE setNumOfDatabaseThreadsHint NOTIFY NumOfDatabaseThreadsHintChanged)
Q_PROPERTY(unsigned int NumOfHttpDatabaseThreadsHint  READ getNumOfHttpDatabaseThreadsHint WRITE setNumOfHttpDatabaseThreadsHint NOTIFY NumOfHttpDatabaseThreadsHintChanged)
Q_PROPERTY(unsigned int SyncSwapBuffers  READ getSyncSwapBuffers WRITE setSyncSwapBuffers NOTIFY SyncSwapBuffersChanged)
signals: void ApplicationChanged(const QString&);
public:
signals: void CompileContextsHintChanged(const bool&);
public:
signals: void DepthBufferChanged(const bool&);
public:
signals: void DoubleBufferChanged(const bool&);
public:
signals: void EyeSeparationChanged(const float&);
public:
signals: void GLContextFlagsChanged(const unsigned int&);
public:
signals: void GLContextProfileMaskChanged(const unsigned int&);
public:
signals: void KeystoneHintChanged(const bool&);
public:
signals: void MaxBufferObjectPoolSizeChanged(const unsigned int&);
public:
signals: void MaxNumberOfGraphicsContextsChanged(const unsigned int&);
public:
signals: void MaxTexturePoolSizeChanged(const unsigned int&);
public:
signals: void MinimumNumAlphaBitsChanged(const unsigned int&);
public:
signals: void MinimumNumStencilBitsChanged(const unsigned int&);
public:
signals: void NumMultiSamplesChanged(const unsigned int&);
public:
signals: void NumOfDatabaseThreadsHintChanged(const unsigned int&);
public:
signals: void NumOfHttpDatabaseThreadsHintChanged(const unsigned int&);
public:
signals: void NvOptimusEnablementChanged(const int&);
public:
signals: void RGBChanged(const bool&);
public:
signals: void ScreenDistanceChanged(const float&);
public:
signals: void ScreenHeightChanged(const float&);
public:
signals: void ScreenWidthChanged(const float&);
public:
signals: void SerializeDrawDispatchChanged(const bool&);
public:
signals: void SplitStereoAutoAdjustAspectRatioChanged(const bool&);
public:
signals: void SplitStereoHorizontalSeparationChanged(const int&);
public:
signals: void SplitStereoVerticalSeparationChanged(const int&);
public:
signals: void StereoChanged(const bool&);
public:
signals: void SyncSwapBuffersChanged(const unsigned int&);
public:
signals: void UseSceneViewForStereoHintChanged(const bool&);
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

#endif //osg_DisplaySettings_pmocHPP

