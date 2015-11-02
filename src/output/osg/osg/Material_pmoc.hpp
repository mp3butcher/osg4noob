#ifndef osg_Material_pmocHPP
#define  osg_Material_pmocHPP 1
#include <osg/Material_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Material>
#include <osg/Material>

#include <osg/ref_ptr>
#include<osg/Material_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Material: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ColorMode{
AMBIENT =Material::AMBIENT,
DIFFUSE =Material::DIFFUSE,
SPECULAR =Material::SPECULAR,
EMISSION =Material::EMISSION,
AMBIENT_AND_DIFFUSE =Material::AMBIENT_AND_DIFFUSE,
OFF =Material::OFF};
  Q_ENUMS(ColorMode)
private:
public:
 enum Face{
FRONT =Material::FRONT,
BACK =Material::BACK,
FRONT_AND_BACK =Material::FRONT_AND_BACK};
  Q_ENUMS(Face)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Material * _model;
QReflect_Material(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Material( );
//Material
// Material & operator=(const  Material &);
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
//const  Vec4 & getAmbient( Face );
//const  Vec4 & getDiffuse( Face );
//const  Vec4 & getEmission( Face );
//const  Vec4 & getSpecular( Face );
Q_INVOKABLE  bool  getAmbientFrontAndBack()const;
Q_INVOKABLE  bool  getDiffuseFrontAndBack()const;
Q_INVOKABLE  bool  getEmissionFrontAndBack()const;
Q_INVOKABLE  bool  getShininessFrontAndBack()const;
Q_INVOKABLE  bool  getSpecularFrontAndBack()const;
Q_INVOKABLE  float  getShininess(osg::QReflect_Material::Face )const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_Material::ColorMode  getColorMode()const;
Q_INVOKABLE void  setAlpha(osg::QReflect_Material::Face  , float );
Q_INVOKABLE void  setAmbient(osg::QReflect_Material::Face  ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  setColorMode(osg::QReflect_Material::ColorMode );
Q_INVOKABLE void  setDiffuse(osg::QReflect_Material::Face  ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  setEmission(osg::QReflect_Material::Face  ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  setShininess(osg::QReflect_Material::Face  , float );
Q_INVOKABLE void  setSpecular(osg::QReflect_Material::Face  ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  setTransparency(osg::QReflect_Material::Face  , float );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Material: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Material> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Material();
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

#endif //osg_Material_pmocHPP

