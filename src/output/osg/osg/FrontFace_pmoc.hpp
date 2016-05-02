#ifndef osg_FrontFace_pmocHPP
#define  osg_FrontFace_pmocHPP 1


#include <osg/FrontFace_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/FrontFace>
#include <osg/FrontFace>

#include <osg/ref_ptr>
#include<osg/FrontFace_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FrontFace: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
CLOCKWISE =FrontFace::CLOCKWISE,
COUNTER_CLOCKWISE =FrontFace::COUNTER_CLOCKWISE};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FrontFace * _model;
QReflect_FrontFace(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrontFace( );
//FrontFace
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_FrontFace::Mode  getMode()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setMode(osg::QReflect_FrontFace::Mode mode);
Q_PROPERTY(osg::QReflect_FrontFace::Mode  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
signals: void ModeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FrontFace: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::FrontFace> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FrontFace();
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


#endif //osg_FrontFace_pmocHPP

