#ifndef osgParticle_Placer_pmocHPP
#define  osgParticle_Placer_pmocHPP 1
#include <osgParticle/Placer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Placer>
#include <osgParticle/Placer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Placer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Placer * _model;
QReflect_Placer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Placer( );
//Placer
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Placer: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Placer();
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


#endif //osgParticle_Placer_pmocHPP

