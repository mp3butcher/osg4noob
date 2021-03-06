#ifndef osg_PolygonStipple_pmocHPP
#define  osg_PolygonStipple_pmocHPP 1


#include <osg/PolygonStipple_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/PolygonStipple>
#include <osg/PolygonStipple>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PolygonStipple: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PolygonStipple * _model;
QReflect_PolygonStipple(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PolygonStipple( );
//PolygonStipple
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE const  GLubyte*  getMask()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setMask(const  GLubyte *mask);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PolygonStipple: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PolygonStipple> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PolygonStipple();
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


#endif //osg_PolygonStipple_pmocHPP

