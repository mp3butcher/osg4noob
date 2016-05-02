#ifndef osg_Fog_pmocHPP
#define  osg_Fog_pmocHPP 1


#include <osg/Fog_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
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
QReflect_Fog(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Fog( );
//Fog
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//const  Vec4 & getColor();
Q_INVOKABLE  GLint  getFogCoordinateSource()const;
Q_INVOKABLE  bool  getUseRadialFog()const;
Q_INVOKABLE  float  getDensity()const;
Q_INVOKABLE  float  getEnd()const;
Q_INVOKABLE  float  getStart()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_Fog::Mode  getMode()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setDensity( float density);
Q_INVOKABLE void  setEnd( float end);
Q_INVOKABLE void  setFogCoordinateSource( GLint source);
Q_INVOKABLE void  setMode(osg::QReflect_Fog::Mode mode);
Q_INVOKABLE void  setStart( float start);
Q_INVOKABLE void  setUseRadialFog( bool useRadialFog);
Q_PROPERTY(GLint  FogCoordinateSource  READ getFogCoordinateSource WRITE setFogCoordinateSource NOTIFY FogCoordinateSourceChanged)
Q_PROPERTY(bool  UseRadialFog  READ getUseRadialFog WRITE setUseRadialFog NOTIFY UseRadialFogChanged)
Q_PROPERTY(float  Density  READ getDensity WRITE setDensity NOTIFY DensityChanged)
Q_PROPERTY(float  End  READ getEnd WRITE setEnd NOTIFY EndChanged)
Q_PROPERTY(float  Start  READ getStart WRITE setStart NOTIFY StartChanged)
Q_PROPERTY(osg::QReflect_Fog::Mode  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
signals: void DensityChanged();
public:
signals: void EndChanged();
public:
signals: void FogCoordinateSourceChanged();
public:
signals: void ModeChanged();
public:
signals: void StartChanged();
public:
signals: void UseRadialFogChanged();
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


#endif //osg_Fog_pmocHPP

