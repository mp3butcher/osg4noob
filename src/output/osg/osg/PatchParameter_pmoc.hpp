#ifndef osg_PatchParameter_pmocHPP
#define  osg_PatchParameter_pmocHPP 1
#include <osg/PatchParameter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/PatchParameter>
#include <osg/PatchParameter>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PatchParameter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PatchParameter * _model;
QReflect_PatchParameter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PatchParameter( );
//PatchParameter
// GLint  getVertices();
//virtual  void  apply( State &);
// void  setVertices( GLint );
//const  osg::Vec2 & getPatchDefaultInnerLevel();
//const  osg::Vec4 & getPatchDefaultOuterLevel();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE void  setPatchDefaultInnerLevel(osg::QReflect_Vec2f *);
Q_INVOKABLE void  setPatchDefaultOuterLevel(osg::QReflect_Vec4f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PatchParameter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PatchParameter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PatchParameter();
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

#endif //osg_PatchParameter_pmocHPP

