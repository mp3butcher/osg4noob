#ifndef osg_CullSettings_pmocHPP
#define  osg_CullSettings_pmocHPP 1


#include <osg/CullSettings_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ArgumentParser;
			} ;
namespace osg{ 
class QReflect_CullSettings;
			} ;
#include <osg/CullSettings>

#include<osg/CullSettings_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CullSettings: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ComputeNearFarMode{
DO_NOT_COMPUTE_NEAR_FAR =CullSettings::DO_NOT_COMPUTE_NEAR_FAR,
COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES =CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES,
COMPUTE_NEAR_FAR_USING_PRIMITIVES =CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES,
COMPUTE_NEAR_USING_PRIMITIVES =CullSettings::COMPUTE_NEAR_USING_PRIMITIVES};
  Q_ENUMS(ComputeNearFarMode)
private:
public:
 enum CullingModeValues{
NO_CULLING =CullSettings::NO_CULLING,
VIEW_FRUSTUM_SIDES_CULLING =CullSettings::VIEW_FRUSTUM_SIDES_CULLING,
NEAR_PLANE_CULLING =CullSettings::NEAR_PLANE_CULLING,
FAR_PLANE_CULLING =CullSettings::FAR_PLANE_CULLING,
VIEW_FRUSTUM_CULLING =CullSettings::VIEW_FRUSTUM_CULLING,
SMALL_FEATURE_CULLING =CullSettings::SMALL_FEATURE_CULLING,
SHADOW_OCCLUSION_CULLING =CullSettings::SHADOW_OCCLUSION_CULLING,
CLUSTER_CULLING =CullSettings::CLUSTER_CULLING,
DEFAULT_CULLING =CullSettings::DEFAULT_CULLING,
ENABLE_ALL_CULLING =CullSettings::ENABLE_ALL_CULLING};
  Q_ENUMS(CullingModeValues)
private:
public:
 enum InheritanceMaskActionOnAttributeSetting{
DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT =CullSettings::DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT,
DO_NOT_MODIFY_INHERITANCE_MASK =CullSettings::DO_NOT_MODIFY_INHERITANCE_MASK};
  Q_ENUMS(InheritanceMaskActionOnAttributeSetting)
private:
public:
 enum VariablesMask{
COMPUTE_NEAR_FAR_MODE =CullSettings::COMPUTE_NEAR_FAR_MODE,
CULLING_MODE =CullSettings::CULLING_MODE,
LOD_SCALE =CullSettings::LOD_SCALE,
SMALL_FEATURE_CULLING_PIXEL_SIZE =CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE,
CLAMP_PROJECTION_MATRIX_CALLBACK =CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK,
NEAR_FAR_RATIO =CullSettings::NEAR_FAR_RATIO,
IMPOSTOR_ACTIVE =CullSettings::IMPOSTOR_ACTIVE,
DEPTH_SORT_IMPOSTOR_SPRITES =CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES,
IMPOSTOR_PIXEL_ERROR_THRESHOLD =CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD,
NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES =CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES,
CULL_MASK =CullSettings::CULL_MASK,
CULL_MASK_LEFT =CullSettings::CULL_MASK_LEFT,
CULL_MASK_RIGHT =CullSettings::CULL_MASK_RIGHT,
CLEAR_COLOR =CullSettings::CLEAR_COLOR,
CLEAR_MASK =CullSettings::CLEAR_MASK,
LIGHTING_MODE =CullSettings::LIGHTING_MODE,
LIGHT =CullSettings::LIGHT,
DRAW_BUFFER =CullSettings::DRAW_BUFFER,
READ_BUFFER =CullSettings::READ_BUFFER,
NO_VARIABLES =CullSettings::NO_VARIABLES,
ALL_VARIABLES =CullSettings::ALL_VARIABLES};
  Q_ENUMS(VariablesMask)
private:
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
CullSettings * _model;
QReflect_CullSettings(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CullSettings( );
//CullSettings
// ClampProjectionMatrixCallback * getClampProjectionMatrixCallback();
// CullSettings & operator=(const  CullSettings &);
// void  setClampProjectionMatrixCallback( ClampProjectionMatrixCallback *);
// void  write( std::ostream &);
//const  ClampProjectionMatrixCallback * getClampProjectionMatrixCallback();
Q_INVOKABLE  bool  getDepthSortImpostorSprites()const;
Q_INVOKABLE  bool  getImpostorsActive()const;
Q_INVOKABLE  double  getNearFarRatio()const;
Q_INVOKABLE  float  getImpostorPixelErrorThreshold()const;
Q_INVOKABLE  float  getLODScale()const;
Q_INVOKABLE  float  getSmallFeatureCullingPixelSize()const;
Q_INVOKABLE  int  getCullingMode()const;
Q_INVOKABLE  int  getInheritanceMask()const;
Q_INVOKABLE  int  getNumberOfFrameToKeepImpostorSprites()const;
Q_INVOKABLE  unsigned int  getCullMask()const;
Q_INVOKABLE  unsigned int  getCullMaskLeft()const;
Q_INVOKABLE  unsigned int  getCullMaskRight()const;
Q_INVOKABLE osg::QReflect_CullSettings::ComputeNearFarMode  getComputeNearFarMode()const;
Q_INVOKABLE osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  getInheritanceMaskActionOnAttributeSetting()const;
Q_INVOKABLE void  applyMaskAction( unsigned int maskBit);
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings *settings , unsigned int inheritanceMask);
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings *settings);
Q_INVOKABLE void  readCommandLine(osg::QReflect_ArgumentParser *arguments);
Q_INVOKABLE void  readEnvironmentalVariables();
Q_INVOKABLE void  setComputeNearFarMode(osg::QReflect_CullSettings::ComputeNearFarMode cnfm);
Q_INVOKABLE void  setCullMask( unsigned int nm);
Q_INVOKABLE void  setCullMaskLeft( unsigned int nm);
Q_INVOKABLE void  setCullMaskRight( unsigned int nm);
Q_INVOKABLE void  setCullSettings(osg::QReflect_CullSettings *settings);
Q_INVOKABLE void  setCullingMode( int mode);
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setDepthSortImpostorSprites( bool doDepthSort);
Q_INVOKABLE void  setImpostorPixelErrorThreshold( float numPixels);
Q_INVOKABLE void  setImpostorsActive( bool active);
Q_INVOKABLE void  setInheritanceMask( int mask);
Q_INVOKABLE void  setInheritanceMaskActionOnAttributeSetting(osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting action);
Q_INVOKABLE void  setLODScale( float scale);
Q_INVOKABLE void  setNearFarRatio( double ratio);
Q_INVOKABLE void  setNumberOfFrameToKeepImpostorSprites( int numFrames);
Q_INVOKABLE void  setSmallFeatureCullingPixelSize( float value);
Q_PROPERTY(bool  DepthSortImpostorSprites  READ getDepthSortImpostorSprites WRITE setDepthSortImpostorSprites NOTIFY DepthSortImpostorSpritesChanged)
Q_PROPERTY(bool  ImpostorsActive  READ getImpostorsActive WRITE setImpostorsActive NOTIFY ImpostorsActiveChanged)
Q_PROPERTY(double  NearFarRatio  READ getNearFarRatio WRITE setNearFarRatio NOTIFY NearFarRatioChanged)
Q_PROPERTY(float  ImpostorPixelErrorThreshold  READ getImpostorPixelErrorThreshold WRITE setImpostorPixelErrorThreshold NOTIFY ImpostorPixelErrorThresholdChanged)
Q_PROPERTY(float  LODScale  READ getLODScale WRITE setLODScale NOTIFY LODScaleChanged)
Q_PROPERTY(float  SmallFeatureCullingPixelSize  READ getSmallFeatureCullingPixelSize WRITE setSmallFeatureCullingPixelSize NOTIFY SmallFeatureCullingPixelSizeChanged)
Q_PROPERTY(int  CullingMode  READ getCullingMode WRITE setCullingMode NOTIFY CullingModeChanged)
Q_PROPERTY(int  InheritanceMask  READ getInheritanceMask WRITE setInheritanceMask NOTIFY InheritanceMaskChanged)
Q_PROPERTY(int  NumberOfFrameToKeepImpostorSprites  READ getNumberOfFrameToKeepImpostorSprites WRITE setNumberOfFrameToKeepImpostorSprites NOTIFY NumberOfFrameToKeepImpostorSpritesChanged)
Q_PROPERTY(osg::QReflect_CullSettings::ComputeNearFarMode  ComputeNearFarMode  READ getComputeNearFarMode WRITE setComputeNearFarMode NOTIFY ComputeNearFarModeChanged)
Q_PROPERTY(osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  InheritanceMaskActionOnAttributeSetting  READ getInheritanceMaskActionOnAttributeSetting WRITE setInheritanceMaskActionOnAttributeSetting NOTIFY InheritanceMaskActionOnAttributeSettingChanged)
Q_PROPERTY(unsigned int  CullMask  READ getCullMask WRITE setCullMask NOTIFY CullMaskChanged)
Q_PROPERTY(unsigned int  CullMaskLeft  READ getCullMaskLeft WRITE setCullMaskLeft NOTIFY CullMaskLeftChanged)
Q_PROPERTY(unsigned int  CullMaskRight  READ getCullMaskRight WRITE setCullMaskRight NOTIFY CullMaskRightChanged)
signals: void ComputeNearFarModeChanged();
public:
signals: void CullMaskChanged();
public:
signals: void CullMaskLeftChanged();
public:
signals: void CullMaskRightChanged();
public:
signals: void CullingModeChanged();
public:
signals: void DepthSortImpostorSpritesChanged();
public:
signals: void ImpostorPixelErrorThresholdChanged();
public:
signals: void ImpostorsActiveChanged();
public:
signals: void InheritanceMaskActionOnAttributeSettingChanged();
public:
signals: void InheritanceMaskChanged();
public:
signals: void LODScaleChanged();
public:
signals: void NearFarRatioChanged();
public:
signals: void NumberOfFrameToKeepImpostorSpritesChanged();
public:
signals: void SmallFeatureCullingPixelSizeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CullSettings: public pmoc::MetaQQuickClass{
protected:
std::set<osg::CullSettings* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CullSettings();
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


#endif //osg_CullSettings_pmocHPP

