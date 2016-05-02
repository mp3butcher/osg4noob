#ifndef osg_View_pmocHPP
#define  osg_View_pmocHPP 1


#include <osg/View_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_FrameStamp;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_Stats;
			} ;
namespace osg{ 
class QReflect_View;
			} ;
namespace osg{ 
class QReflect_Light;
			} ;
#include <osg/View>
#include <osg/View>

#include <osg/ref_ptr>
#include<osg/View_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_View: public pmoc::QQModel
{
Q_OBJECT
public:
 enum LightingMode{
NO_LIGHT =View::NO_LIGHT,
HEADLIGHT =View::HEADLIGHT,
SKY_LIGHT =View::SKY_LIGHT};
  Q_ENUMS(LightingMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
View * _model;
QReflect_View(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_View( );
//View
// Slave * findSlaveForCamera( osg::Camera *);
// Slave & getSlave( unsigned int );
//const  Slave & getSlave( unsigned int );
Q_INVOKABLE  bool  addSlave(osg::QReflect_Camera *camera , bool useMastersSceneData);
Q_INVOKABLE  bool  addSlave(osg::QReflect_Camera *camera ,osg::QReflect_Matrixd *projectionOffset ,osg::QReflect_Matrixd *viewOffset , bool useMastersSceneData);
Q_INVOKABLE  bool  removeSlave( unsigned int pos);
Q_INVOKABLE  unsigned int  findSlaveIndexForCamera(osg::QReflect_Camera *camera)const;
Q_INVOKABLE  unsigned int  getNumSlaves()const;
Q_INVOKABLE osg::QReflect_Camera*  getCamera();
Q_INVOKABLE osg::QReflect_Camera*  getCamera()const;
Q_INVOKABLE osg::QReflect_FrameStamp*  getFrameStamp();
Q_INVOKABLE osg::QReflect_FrameStamp*  getFrameStamp()const;
Q_INVOKABLE osg::QReflect_Light*  getLight();
Q_INVOKABLE osg::QReflect_Light*  getLight()const;
Q_INVOKABLE osg::QReflect_Stats*  getStats();
Q_INVOKABLE osg::QReflect_Stats*  getStats()const;
Q_INVOKABLE osg::QReflect_View::LightingMode  getLightingMode()const;
Q_INVOKABLE void  setCamera(osg::QReflect_Camera *camera);
Q_INVOKABLE void  setFrameStamp(osg::QReflect_FrameStamp *fs);
Q_INVOKABLE void  setLight(osg::QReflect_Light *light);
Q_INVOKABLE void  setLightingMode(osg::QReflect_View::LightingMode lightingMode);
Q_INVOKABLE void  setStats(osg::QReflect_Stats *stats);
Q_INVOKABLE void  take(osg::QReflect_View *rhs);
Q_INVOKABLE void  updateSlaves();
Q_PROPERTY(osg::QReflect_Camera * Camera  READ getCamera WRITE setCamera NOTIFY CameraChanged)
Q_PROPERTY(osg::QReflect_FrameStamp * FrameStamp  READ getFrameStamp WRITE setFrameStamp NOTIFY FrameStampChanged)
Q_PROPERTY(osg::QReflect_Light * Light  READ getLight WRITE setLight NOTIFY LightChanged)
Q_PROPERTY(osg::QReflect_Stats * Stats  READ getStats WRITE setStats NOTIFY StatsChanged)
Q_PROPERTY(osg::QReflect_View::LightingMode  LightingMode  READ getLightingMode WRITE setLightingMode NOTIFY LightingModeChanged)
signals: void CameraChanged();
public:
signals: void FrameStampChanged();
public:
signals: void LightChanged();
public:
signals: void LightingModeChanged();
public:
signals: void StatsChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_View: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::View> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_View();
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


#endif //osg_View_pmocHPP

