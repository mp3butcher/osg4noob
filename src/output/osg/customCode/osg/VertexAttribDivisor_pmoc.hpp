#ifndef osg_VertexAttribDivisor_customHPP
#define  osg_VertexAttribDivisor_customHPP 1

//includes
#include <osg/VertexAttribDivisor_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/VertexAttribDivisor>

#include <osg/VertexAttribDivisor_pmoc.hpp>
namespace osg{
class  QMLVertexAttribDivisor: public QReflect_VertexAttribDivisor
{
Q_OBJECT
public:
QMLVertexAttribDivisor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVertexAttribDivisor :public MetaQReflect_VertexAttribDivisor{};

}
  Q_DECLARE_METATYPE(osg::QMLVertexAttribDivisor)

#endif //osg_VertexAttribDivisor_customHPP

