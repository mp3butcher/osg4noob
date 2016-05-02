#ifndef osg_CopyOp_customHPP
#define  osg_CopyOp_customHPP 1

//includes
#include <osg/CopyOp_pmoc.hpp>
#include <QObject>
#include <osg/CopyOp>

#include <osg/CopyOp_pmoc.hpp>
namespace osg{
class  QMLCopyOp: public QReflect_CopyOp
{
Q_OBJECT
public:
QMLCopyOp(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCopyOp :public MetaQReflect_CopyOp{};

}
  Q_DECLARE_METATYPE(osg::QMLCopyOp)

#endif //osg_CopyOp_customHPP

