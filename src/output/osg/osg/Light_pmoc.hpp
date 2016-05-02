#ifndef osg_Light_pmocHPP
#define  osg_Light_pmocHPP 1


#include <osg/Light_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/Light>
#include <osg/Light>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Light: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Light * _model;
QReflect_Light(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Light( );
//Light
//virtual  Type  getType();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//const  Vec3 & getDirection();
//const  Vec4 & getAmbient();
//const  Vec4 & getDiffuse();
//const  Vec4 & getPosition();
//const  Vec4 & getSpecular();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  float  getConstantAttenuation()const;
Q_INVOKABLE  float  getLinearAttenuation()const;
Q_INVOKABLE  float  getQuadraticAttenuation()const;
Q_INVOKABLE  float  getSpotCutoff()const;
Q_INVOKABLE  float  getSpotExponent()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  int  getLightNum()const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  captureLightState();
Q_INVOKABLE void  setAmbient(osg::QReflect_Vec4f *ambient);
Q_INVOKABLE void  setConstantAttenuation( float constant_attenuation);
Q_INVOKABLE void  setDiffuse(osg::QReflect_Vec4f *diffuse);
Q_INVOKABLE void  setDirection(osg::QReflect_Vec3f *direction);
Q_INVOKABLE void  setLightNum( int num);
Q_INVOKABLE void  setLinearAttenuation( float linear_attenuation);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec4f *position);
Q_INVOKABLE void  setQuadraticAttenuation( float quadratic_attenuation);
Q_INVOKABLE void  setSpecular(osg::QReflect_Vec4f *specular);
Q_INVOKABLE void  setSpotCutoff( float spot_cutoff);
Q_INVOKABLE void  setSpotExponent( float spot_exponent);
Q_PROPERTY(float  ConstantAttenuation  READ getConstantAttenuation WRITE setConstantAttenuation NOTIFY ConstantAttenuationChanged)
Q_PROPERTY(float  LinearAttenuation  READ getLinearAttenuation WRITE setLinearAttenuation NOTIFY LinearAttenuationChanged)
Q_PROPERTY(float  QuadraticAttenuation  READ getQuadraticAttenuation WRITE setQuadraticAttenuation NOTIFY QuadraticAttenuationChanged)
Q_PROPERTY(float  SpotCutoff  READ getSpotCutoff WRITE setSpotCutoff NOTIFY SpotCutoffChanged)
Q_PROPERTY(float  SpotExponent  READ getSpotExponent WRITE setSpotExponent NOTIFY SpotExponentChanged)
Q_PROPERTY(int  LightNum  READ getLightNum WRITE setLightNum NOTIFY LightNumChanged)
signals: void ConstantAttenuationChanged();
public:
signals: void LightNumChanged();
public:
signals: void LinearAttenuationChanged();
public:
signals: void QuadraticAttenuationChanged();
public:
signals: void SpotCutoffChanged();
public:
signals: void SpotExponentChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Light: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Light> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Light();
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


#endif //osg_Light_pmocHPP

