#ifndef osgParticle_Program_pmocHPP
#define  osgParticle_Program_pmocHPP 1


#include <osgParticle/Program_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Program>
#include <osgParticle/Program>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Program: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Program * _model;
QReflect_Program(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Program( );
//Program
//virtual  void  accept( osg::NodeVisitor &);
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Program: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Program();
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


#endif //osgParticle_Program_pmocHPP

