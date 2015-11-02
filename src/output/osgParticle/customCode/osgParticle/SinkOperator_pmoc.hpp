#ifndef osgParticle_SinkOperator_customHPP
#define  osgParticle_SinkOperator_customHPP 1

//includes


#include <osgParticle/SinkOperator_pmoc.hpp>
#include <QObject>
#include <osgParticle/DomainOperator_pmoc.hpp>
#include <osgParticle/SinkOperator>

#include <osgParticle/SinkOperator_pmoc.hpp>
namespace osgParticle{
class  QMLSinkOperator: public QReflect_SinkOperator
{
Q_OBJECT
public:
QMLSinkOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSinkOperator :public MetaQReflect_SinkOperator{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLSinkOperator)


#endif //osgParticle_SinkOperator_customHPP

