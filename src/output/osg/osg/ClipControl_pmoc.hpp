#ifndef osg_ClipControl_pmocHPP
#define  osg_ClipControl_pmocHPP 1


#include <osg/ClipControl_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/ClipControl>
#include <osg/ClipControl>

#include <osg/ref_ptr>
#include<osg/ClipControl_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClipControl: public pmoc::QQModel
{
Q_OBJECT
public:
 enum DepthMode{
NEGATIVE_ONE_TO_ONE =ClipControl::NEGATIVE_ONE_TO_ONE,
ZERO_TO_ONE =ClipControl::ZERO_TO_ONE};
  Q_ENUMS(DepthMode)
private:
public:
 enum Origin{
LOWER_LEFT =ClipControl::LOWER_LEFT,
UPPER_LEFT =ClipControl::UPPER_LEFT};
  Q_ENUMS(Origin)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClipControl * _model;
QReflect_ClipControl(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClipControl( );
//ClipControl
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_ClipControl::DepthMode  getDepthMode()const;
Q_INVOKABLE osg::QReflect_ClipControl::Origin  getOrigin()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setDepthMode(osg::QReflect_ClipControl::DepthMode depthMode);
Q_INVOKABLE void  setOrigin(osg::QReflect_ClipControl::Origin origin);
Q_PROPERTY(osg::QReflect_ClipControl::DepthMode  DepthMode  READ getDepthMode WRITE setDepthMode NOTIFY DepthModeChanged)
Q_PROPERTY(osg::QReflect_ClipControl::Origin  Origin  READ getOrigin WRITE setOrigin NOTIFY OriginChanged)
signals: void DepthModeChanged();
public:
signals: void OriginChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClipControl: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClipControl> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClipControl();
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


#endif //osg_ClipControl_pmocHPP

