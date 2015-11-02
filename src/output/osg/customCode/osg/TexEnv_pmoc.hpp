#ifndef osg_TexEnv_customHPP
#define  osg_TexEnv_customHPP 1

//includes
#include <osg/TexEnv_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/TexEnv>

#include <osg/TexEnv_pmoc.hpp>
namespace osg{
class  QMLTexEnv: public QReflect_TexEnv
{
Q_OBJECT
public:
QMLTexEnv(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

class   MetaQMLTexEnv  :public MetaQReflect_TexEnv {};
}
  Q_DECLARE_METATYPE(osg::QMLTexEnv)

#endif //osg_TexEnv_customHPP

