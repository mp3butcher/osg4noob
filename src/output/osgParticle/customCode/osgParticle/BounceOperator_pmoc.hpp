#ifndef osgParticle_BounceOperator_customHPP
#define  osgParticle_BounceOperator_customHPP 1

//includes


#include <osgParticle/BounceOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/BounceOperator>

#include <osgParticle/DomainOperator_pmoc.hpp>
#include <osgParticle/BounceOperator_pmoc.hpp>
namespace osgParticle{
class  QMLBounceOperator: public QReflect_BounceOperator
{
Q_OBJECT
public:
QMLBounceOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBounceOperator :public MetaQReflect_BounceOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLBounceOperator)


#endif //osgParticle_BounceOperator_customHPP

