#ifndef osgParticle_SinkOperator_pmocHPP
#define  osgParticle_SinkOperator_pmocHPP 1


#include <osgParticle/SinkOperator_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Program;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/SinkOperator>
#include <osgParticle/SinkOperator>

#include<osgParticle/SinkOperator_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_SinkOperator: public pmoc::QQModel
{
Q_OBJECT
public:
 enum SinkStrategy{
SINK_INSIDE =SinkOperator::SINK_INSIDE,
SINK_OUTSIDE =SinkOperator::SINK_OUTSIDE};
  Q_ENUMS(SinkStrategy)
private:
public:
 enum SinkTarget{
SINK_POSITION =SinkOperator::SINK_POSITION,
SINK_VELOCITY =SinkOperator::SINK_VELOCITY,
SINK_ANGULAR_VELOCITY =SinkOperator::SINK_ANGULAR_VELOCITY};
  Q_ENUMS(SinkTarget)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
SinkOperator * _model;
QReflect_SinkOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SinkOperator( );
//SinkOperator
Q_INVOKABLE osgParticle::QReflect_SinkOperator::SinkStrategy  getSinkStrategy()const;
Q_INVOKABLE osgParticle::QReflect_SinkOperator::SinkTarget  getSinkTarget()const;
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *prg);
Q_INVOKABLE void  setSinkStrategy(osgParticle::QReflect_SinkOperator::SinkStrategy ss);
Q_INVOKABLE void  setSinkTarget(osgParticle::QReflect_SinkOperator::SinkTarget so);
Q_PROPERTY(osgParticle::QReflect_SinkOperator::SinkStrategy  SinkStrategy  READ getSinkStrategy WRITE setSinkStrategy NOTIFY SinkStrategyChanged)
Q_PROPERTY(osgParticle::QReflect_SinkOperator::SinkTarget  SinkTarget  READ getSinkTarget WRITE setSinkTarget NOTIFY SinkTargetChanged)
signals: void SinkStrategyChanged();
public:
signals: void SinkTargetChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SinkOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::SinkOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_SinkOperator();
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



#endif //osgParticle_SinkOperator_pmocHPP

