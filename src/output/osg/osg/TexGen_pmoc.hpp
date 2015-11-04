#ifndef osg_TexGen_pmocHPP
#define  osg_TexGen_pmocHPP 1
#include <osg/TexGen_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Plane;
			} ;
#include <osg/TexGen>
#include <osg/TexGen>

#include <osg/ref_ptr>
#include<osg/TexGen_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexGen: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Coord{
S =TexGen::S,
T =TexGen::T,
R =TexGen::R,
Q =TexGen::Q};
  Q_ENUMS(Coord)
private:
public:
 enum Mode{
OBJECT_LINEAR =TexGen::OBJECT_LINEAR,
EYE_LINEAR =TexGen::EYE_LINEAR,
SPHERE_MAP =TexGen::SPHERE_MAP,
NORMAL_MAP =TexGen::NORMAL_MAP,
REFLECTION_MAP =TexGen::REFLECTION_MAP};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexGen * _model;
QReflect_TexGen(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexGen( );
//TexGen
// Plane & getPlane( Coord );
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
//const  Plane & getPlane( Coord );
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_TexGen::Mode  getMode()const;
Q_INVOKABLE void  setMode(osg::QReflect_TexGen::Mode );
Q_INVOKABLE void  setPlane(osg::QReflect_TexGen::Coord  ,osg::QReflect_Plane *);
Q_INVOKABLE void  setPlanesFromMatrix(osg::QReflect_Matrixd *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexGen: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexGen> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexGen();
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

#endif //osg_TexGen_pmocHPP

