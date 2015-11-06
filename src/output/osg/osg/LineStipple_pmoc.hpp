#ifndef osg_LineStipple_pmocHPP
#define  osg_LineStipple_pmocHPP 1
#include <osg/LineStipple_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/LineStipple>
#include <osg/LineStipple>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LineStipple: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LineStipple * _model;
QReflect_LineStipple(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LineStipple( );
//LineStipple
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  GLint  getFactor()const;
Q_INVOKABLE  GLushort  getPattern()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE void  setFactor( GLint );
Q_INVOKABLE void  setPattern( GLushort );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LineStipple: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LineStipple> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LineStipple();
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

#endif //osg_LineStipple_pmocHPP

