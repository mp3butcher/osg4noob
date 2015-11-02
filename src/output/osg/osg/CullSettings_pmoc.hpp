#ifndef osg_CullSettings_pmocHPP
#define  osg_CullSettings_pmocHPP 1

#include <osg/CullSettings_pmoc.hpp>
#include <QObject>
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
QReflect_CullSettings(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CullSettings( );
//CullSettings
// ClampProjectionMatrixCallback * getClampProjectionMatrixCallback();
// CullSettings & operator=(const  CullSettings &);
// void  readCommandLine( ArgumentParser &);
// void  setClampProjectionMatrixCallback( ClampProjectionMatrixCallback *);
// void  write( std::ostream &);
//const  ClampProjectionMatrixCallback * getClampProjectionMatrixCallback();
Q_INVOKABLE  int  getCullingMode()const;
Q_INVOKABLE  int  getInheritanceMask()const;
Q_INVOKABLE  unsigned int  getCullMask()const;
Q_INVOKABLE  unsigned int  getCullMaskLeft()const;
Q_INVOKABLE  unsigned int  getCullMaskRight()const;
Q_INVOKABLE const bool  getDepthSortImpostorSprites()const;
Q_INVOKABLE const bool  getImpostorsActive()const;
Q_INVOKABLE const double  getNearFarRatio()const;
Q_INVOKABLE const float  getImpostorPixelErrorThreshold()const;
Q_INVOKABLE const float  getLODScale()const;
Q_INVOKABLE const float  getSmallFeatureCullingPixelSize()const;
Q_INVOKABLE const int  getNumberOfFrameToKeepImpostorSprites()const;
Q_INVOKABLE osg::QReflect_CullSettings::ComputeNearFarMode  getComputeNearFarMode()const;
Q_INVOKABLE osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting  getInheritanceMaskActionOnAttributeSetting()const;
Q_INVOKABLE void  applyMaskAction( unsigned int );
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings * , unsigned int );
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings *);
Q_INVOKABLE void  readEnvironmentalVariables();
Q_INVOKABLE void  setComputeNearFarMode(osg::QReflect_CullSettings::ComputeNearFarMode );
Q_INVOKABLE void  setCullMask( unsigned int );
Q_INVOKABLE void  setCullMaskLeft( unsigned int );
Q_INVOKABLE void  setCullMaskRight( unsigned int );
Q_INVOKABLE void  setCullSettings(osg::QReflect_CullSettings *);
Q_INVOKABLE void  setCullingMode( int );
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setInheritanceMask( int );
Q_INVOKABLE void  setInheritanceMaskActionOnAttributeSetting(osg::QReflect_CullSettings::InheritanceMaskActionOnAttributeSetting );
Q_INVOKABLE void setDepthSortImpostorSprites(const bool &);
Q_INVOKABLE void setImpostorPixelErrorThreshold(const float &);
Q_INVOKABLE void setImpostorsActive(const bool &);
Q_INVOKABLE void setLODScale(const float &);
Q_INVOKABLE void setNearFarRatio(const double &);
Q_INVOKABLE void setNumberOfFrameToKeepImpostorSprites(const int &);
Q_INVOKABLE void setSmallFeatureCullingPixelSize(const float &);
Q_PROPERTY(bool DepthSortImpostorSprites  READ getDepthSortImpostorSprites WRITE setDepthSortImpostorSprites NOTIFY DepthSortImpostorSpritesChanged)
Q_PROPERTY(bool ImpostorsActive  READ getImpostorsActive WRITE setImpostorsActive NOTIFY ImpostorsActiveChanged)
Q_PROPERTY(double NearFarRatio  READ getNearFarRatio WRITE setNearFarRatio NOTIFY NearFarRatioChanged)
Q_PROPERTY(float ImpostorPixelErrorThreshold  READ getImpostorPixelErrorThreshold WRITE setImpostorPixelErrorThreshold NOTIFY ImpostorPixelErrorThresholdChanged)
Q_PROPERTY(float LODScale  READ getLODScale WRITE setLODScale NOTIFY LODScaleChanged)
Q_PROPERTY(float SmallFeatureCullingPixelSize  READ getSmallFeatureCullingPixelSize WRITE setSmallFeatureCullingPixelSize NOTIFY SmallFeatureCullingPixelSizeChanged)
Q_PROPERTY(int NumberOfFrameToKeepImpostorSprites  READ getNumberOfFrameToKeepImpostorSprites WRITE setNumberOfFrameToKeepImpostorSprites NOTIFY NumberOfFrameToKeepImpostorSpritesChanged)
signals: void DepthSortImpostorSpritesChanged(const bool&);
public:
signals: void ImpostorPixelErrorThresholdChanged(const float&);
public:
signals: void ImpostorsActiveChanged(const bool&);
public:
signals: void LODScaleChanged(const float&);
public:
signals: void NearFarRatioChanged(const double&);
public:
signals: void NumberOfFrameToKeepImpostorSpritesChanged(const int&);
public:
signals: void SmallFeatureCullingPixelSizeChanged(const float&);
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

#endif //osg_CullSettings_pmocHPP

