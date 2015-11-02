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
QReflect_View(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_View( );
//View
// Slave * findSlaveForCamera( osg::Camera *);
// Slave & getSlave( unsigned int );
//const  Slave & getSlave( unsigned int );
Q_INVOKABLE  bool  addSlave(osg::QReflect_Camera * , bool );
Q_INVOKABLE  bool  addSlave(osg::QReflect_Camera * ,osg::QReflect_Matrixd * ,osg::QReflect_Matrixd * , bool );
Q_INVOKABLE  bool  removeSlave( unsigned int );
Q_INVOKABLE  osg::QReflect_Camera * getCamera()const;
Q_INVOKABLE  osg::QReflect_FrameStamp * getFrameStamp()const;
Q_INVOKABLE  osg::QReflect_Light * getLight()const;
Q_INVOKABLE  osg::QReflect_Stats * getStats()const;
Q_INVOKABLE  unsigned int  findSlaveIndexForCamera(osg::QReflect_Camera *)const;
Q_INVOKABLE  unsigned int  getNumSlaves()const;
Q_INVOKABLE osg::QReflect_View::LightingMode  getLightingMode()const;
Q_INVOKABLE void  setLightingMode(osg::QReflect_View::LightingMode );
Q_INVOKABLE void  take(osg::QReflect_View *);
Q_INVOKABLE void  updateSlaves();
Q_INVOKABLE void pmoc_reverse_setCamera( osg::QReflect_Camera *par=0);
Q_INVOKABLE void pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par=0);
Q_INVOKABLE void pmoc_reverse_setLight( osg::QReflect_Light *par=0);
Q_INVOKABLE void pmoc_reverse_setStats( osg::QReflect_Stats *par=0);
Q_INVOKABLE void setCamera( osg::QReflect_Camera *par);
Q_INVOKABLE void setFrameStamp( osg::QReflect_FrameStamp *par);
Q_INVOKABLE void setLight( osg::QReflect_Light *par);
Q_INVOKABLE void setStats( osg::QReflect_Stats *par);
signals: void CameraChanged(const osg::QReflect_Camera*);
public:
signals: void FrameStampChanged(const osg::QReflect_FrameStamp*);
public:
signals: void LightChanged(const osg::QReflect_Light*);
public:
signals: void StatsChanged(const osg::QReflect_Stats*);
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

#endif //osg_View_pmocHPP

