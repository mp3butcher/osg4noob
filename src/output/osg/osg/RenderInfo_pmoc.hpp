#ifndef osg_RenderInfo_pmocHPP
#define  osg_RenderInfo_pmocHPP 1


#include <osg/RenderInfo_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_View;
			} ;
#include <osg/RenderInfo>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RenderInfo: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
RenderInfo * _model;
QReflect_RenderInfo(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RenderInfo( );
//RenderInfo
// CameraStack & getCameraStack();
// RenderBinStack & getRenderBinStack();
// RenderInfo & operator=(const  RenderInfo &);
// void  pushRenderBin( osgUtil::RenderBin *);
Q_INVOKABLE  osg::QReflect_Referenced * getUserData()const;
Q_INVOKABLE  osg::QReflect_State * getState()const;
Q_INVOKABLE  osg::QReflect_View * getView()const;
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE osg::QReflect_Camera*  getCurrentCamera();
Q_INVOKABLE void  popCamera();
Q_INVOKABLE void  popRenderBin();
Q_INVOKABLE void  pushCamera(osg::QReflect_Camera *);
Q_INVOKABLE void pmoc_reverse_setState( osg::QReflect_State *par=0);
Q_INVOKABLE void pmoc_reverse_setUserData( osg::QReflect_Referenced *par=0);
Q_INVOKABLE void pmoc_reverse_setView( osg::QReflect_View *par=0);
Q_INVOKABLE void setState( osg::QReflect_State *par);
Q_INVOKABLE void setUserData( osg::QReflect_Referenced *par);
Q_INVOKABLE void setView( osg::QReflect_View *par);
signals: void StateChanged(const osg::QReflect_State*);
public:
signals: void UserDataChanged(const osg::QReflect_Referenced*);
public:
signals: void ViewChanged(const osg::QReflect_View*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RenderInfo: public pmoc::MetaQQuickClass{
protected:
std::set<osg::RenderInfo* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RenderInfo();
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

#endif //osg_RenderInfo_pmocHPP

