#ifndef osgParticle_LinearInterpolator_pmocHPP
#define  osgParticle_LinearInterpolator_pmocHPP 1


#include <osgParticle/LinearInterpolator_pmoc.hpp>
#include <QObject>
#include <osg/ref_ptr>
#include <osgParticle/LinearInterpolator>
#include <osgParticle/LinearInterpolator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_LinearInterpolator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LinearInterpolator * _model;
QReflect_LinearInterpolator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LinearInterpolator( );
//LinearInterpolator
Q_INVOKABLE  float  interpolate( float t , float y1 , float y2)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LinearInterpolator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::LinearInterpolator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LinearInterpolator();
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



#endif //osgParticle_LinearInterpolator_pmocHPP

