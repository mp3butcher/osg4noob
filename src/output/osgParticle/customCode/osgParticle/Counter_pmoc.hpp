#ifndef osgParticle_Counter_customHPP
#define  osgParticle_Counter_customHPP 1

//includes
#include <osgParticle/Counter_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osgParticle/Counter>

#include <osgParticle/Counter_pmoc.hpp>
namespace osgParticle{
class  QMLCounter: public QReflect_Counter
{
Q_OBJECT
public:
QMLCounter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCounter :public MetaQReflect_Counter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLCounter)


#endif //osgParticle_Counter_customHPP

