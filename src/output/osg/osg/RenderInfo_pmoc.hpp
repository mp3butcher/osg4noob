#ifndef osg_RenderInfo_pmocHPP
#define  osg_RenderInfo_pmocHPP 1


#include <osg/RenderInfo_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_State;
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
QReflect_RenderInfo(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RenderInfo( );
//RenderInfo
// CameraStack & getCameraStack();
// RenderBinStack & getRenderBinStack();
// RenderInfo & operator=(const  RenderInfo &);
// void  pushRenderBin( osgUtil::RenderBin *);
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE osg::QReflect_Camera*  getCurrentCamera();
Q_INVOKABLE osg::QReflect_Referenced*  getUserData();
Q_INVOKABLE osg::QReflect_Referenced*  getUserData()const;
Q_INVOKABLE osg::QReflect_State*  getState();
Q_INVOKABLE osg::QReflect_State*  getState()const;
Q_INVOKABLE osg::QReflect_View*  getView();
Q_INVOKABLE osg::QReflect_View*  getView()const;
Q_INVOKABLE void  popCamera();
Q_INVOKABLE void  popRenderBin();
Q_INVOKABLE void  pushCamera(osg::QReflect_Camera *camera);
Q_INVOKABLE void  setState(osg::QReflect_State *state);
Q_INVOKABLE void  setUserData(osg::QReflect_Referenced *userData);
Q_INVOKABLE void  setView(osg::QReflect_View *view);
Q_PROPERTY(osg::QReflect_Referenced * UserData  READ getUserData WRITE setUserData NOTIFY UserDataChanged)
Q_PROPERTY(osg::QReflect_State * State  READ getState WRITE setState NOTIFY StateChanged)
Q_PROPERTY(osg::QReflect_View * View  READ getView WRITE setView NOTIFY ViewChanged)
signals: void StateChanged();
public:
signals: void UserDataChanged();
public:
signals: void ViewChanged();
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


#endif //osg_RenderInfo_pmocHPP

