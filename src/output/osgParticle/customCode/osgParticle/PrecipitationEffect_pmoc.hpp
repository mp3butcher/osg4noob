#ifndef osgParticle_PrecipitationEffect_customHPP
#define  osgParticle_PrecipitationEffect_customHPP 1

//includes


#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Fog;
			} ;
#include <osg/Fog>
#include <osg/Fog_pmoc.hpp>
#include <osg/Node_pmoc.hpp>
#include <osgParticle/PrecipitationEffect>

#include <osgParticle/PrecipitationEffect_pmoc.hpp>
namespace osgParticle{
class  QMLPrecipitationEffect: public QReflect_PrecipitationEffect
{
Q_OBJECT
Q_PROPERTY(int precipitationType READ precipitationType WRITE precipitationType NOTIFY precipitationTypeChanged)
Q_PROPERTY(float precipitationAmount READ precipitationAmount WRITE precipitationAmount NOTIFY precipitationAmountChanged)
public:
QMLPrecipitationEffect(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
int precipitationType()const{
#ifdef MYPROPOSITION
switch(_model->getPrecipitationType()){

case PrecipitationEffect::RAIN:return 0;
case PrecipitationEffect::SNOW:return 1;

default:return 0;};
#else
return 0;
#endif
}
void precipitationType(int f){
if(f!=precipitationType()){
#ifdef MYPROPOSITION
switch(f){
case 0:_model->setPrecipitationType(PrecipitationEffect::RAIN);break;
case 1:_model->setPrecipitationType(PrecipitationEffect::SNOW);break;

default:_model->setPrecipitationType(PrecipitationEffect::RAIN);break;

}
#endif
emit precipitationTypeChanged(f);
}
}
float precipitationAmount()const{
#ifdef MYPROPOSITION
return _model->getPrecipitationAmount();
#else
return 0;
#endif
}
void precipitationAmount(float f){
if(f!=precipitationAmount()){
#ifdef MYPROPOSITION
_model->setPrecipitationAmount(f)
#endif
emit precipitationAmountChanged(f);
}
}

public slots:
 virtual void  updateModel();
signals:
void precipitationAmountChanged(float);
void precipitationTypeChanged(int);
};

class   MetaQMLPrecipitationEffect :public MetaQReflect_PrecipitationEffect{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLPrecipitationEffect)



#endif //osgParticle_PrecipitationEffect_customHPP

