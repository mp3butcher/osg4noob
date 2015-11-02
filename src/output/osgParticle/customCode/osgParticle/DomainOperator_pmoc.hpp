#ifndef osgParticle_DomainOperator_customHPP
#define  osgParticle_DomainOperator_customHPP 1

//includes


#include <osgParticle/DomainOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/DomainOperator>

#include <osgParticle/Operator_pmoc.hpp>
#include <osgParticle/DomainOperator_pmoc.hpp>
namespace osgParticle{
class  QMLDomainOperator: public QReflect_DomainOperator
{
Q_OBJECT
public:
QMLDomainOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDomainOperator :public MetaQReflect_DomainOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLDomainOperator)


#endif //osgParticle_DomainOperator_customHPP

