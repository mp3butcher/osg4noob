#ifndef osg_LineWidth_customHPP
#define  osg_LineWidth_customHPP 1

//includes
#include <osg/LineWidth_pmoc.hpp>
#include <QObject>
#include <osg/LineWidth>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/LineWidth_pmoc.hpp>
namespace osg{
class  QMLLineWidth: public QReflect_LineWidth
{
Q_OBJECT
public:
QMLLineWidth(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLineWidth :public MetaQReflect_LineWidth{};

}
  Q_DECLARE_METATYPE(osg::QMLLineWidth)

#endif //osg_LineWidth_customHPP

