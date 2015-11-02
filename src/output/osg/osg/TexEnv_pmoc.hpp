#ifndef osg_TexEnv_pmocHPP
#define  osg_TexEnv_pmocHPP 1
#include <osg/TexEnv_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/TexEnv>
#include <osg/TexEnv>

#include <osg/ref_ptr>
#include<osg/TexEnv_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexEnv: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
DECAL =TexEnv::DECAL,
MODULATE =TexEnv::MODULATE,
BLEND =TexEnv::BLEND,
REPLACE =TexEnv::REPLACE,
ADD =TexEnv::ADD};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexEnv * _model;
QReflect_TexEnv(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexEnv( );
//TexEnv
// Vec4 & getColor();
//virtual  void  apply( State &);
//const  Vec4 & getColor();
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_TexEnv::Mode  getMode()const;
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setMode(osg::QReflect_TexEnv::Mode );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexEnv: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexEnv> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexEnv();
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

#endif //osg_TexEnv_pmocHPP

