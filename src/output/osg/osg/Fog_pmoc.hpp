#ifndef osg_Fog_pmocHPP
#define  osg_Fog_pmocHPP 1
#include <osg/Fog_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/Fog>
#include <osg/Fog>

#include <osg/ref_ptr>
#include<osg/Fog_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Fog: public pmoc::QQModel
{
Q_OBJECT
public:
 enum FogCoordinateSource{
FOG_COORDINATE =Fog::FOG_COORDINATE,
FRAGMENT_DEPTH =Fog::FRAGMENT_DEPTH};
  Q_ENUMS(FogCoordinateSource)
private:
public:
 enum Mode{
LINEAR =Fog::LINEAR,
EXP =Fog::EXP,
EXP2 =Fog::EXP2};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Fog * _model;
QReflect_Fog(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Fog( );
//Fog
// GLint  getFogCoordinateSource();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
// void  setFogCoordinateSource( GLint );
//const  Vec4 & getColor();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const bool  getUseRadialFog()const;
Q_INVOKABLE const float  getDensity()const;
Q_INVOKABLE const float  getEnd()const;
Q_INVOKABLE const float  getStart()const;
Q_INVOKABLE osg::QReflect_Fog::Mode  getMode()const;
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setMode(osg::QReflect_Fog::Mode );
Q_INVOKABLE void setDensity(const float &);
Q_INVOKABLE void setEnd(const float &);
Q_INVOKABLE void setStart(const float &);
Q_INVOKABLE void setUseRadialFog(const bool &);
Q_PROPERTY(bool UseRadialFog  READ getUseRadialFog WRITE setUseRadialFog NOTIFY UseRadialFogChanged)
Q_PROPERTY(float Density  READ getDensity WRITE setDensity NOTIFY DensityChanged)
Q_PROPERTY(float End  READ getEnd WRITE setEnd NOTIFY EndChanged)
Q_PROPERTY(float Start  READ getStart WRITE setStart NOTIFY StartChanged)
signals: void DensityChanged(const float&);
public:
signals: void EndChanged(const float&);
public:
signals: void StartChanged(const float&);
public:
signals: void UseRadialFogChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Fog: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Fog> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Fog();
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

#endif //osg_Fog_pmocHPP

