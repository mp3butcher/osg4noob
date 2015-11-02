#ifndef osg_PrimitiveRestartIndex_customHPP
#define  osg_PrimitiveRestartIndex_customHPP 1

//includes
#include <osg/PrimitiveRestartIndex_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveRestartIndex>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PrimitiveRestartIndex_pmoc.hpp>
namespace osg{
class  QMLPrimitiveRestartIndex: public QReflect_PrimitiveRestartIndex
{
Q_OBJECT
public:
QMLPrimitiveRestartIndex(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPrimitiveRestartIndex :public MetaQReflect_PrimitiveRestartIndex{};

}
  Q_DECLARE_METATYPE(osg::QMLPrimitiveRestartIndex)

#endif //osg_PrimitiveRestartIndex_customHPP

