#ifndef osg_AlphaFunc_customHPP
#define  osg_AlphaFunc_customHPP 1

//includes
#include <osg/AlphaFunc_pmoc.hpp>
#include <QObject>
#include <osg/AlphaFunc>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/AlphaFunc_pmoc.hpp>
namespace osg{
class  QMLAlphaFunc: public QReflect_AlphaFunc
{
Q_OBJECT
public:
QMLAlphaFunc(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAlphaFunc :public MetaQReflect_AlphaFunc{};

}
  Q_DECLARE_METATYPE(osg::QMLAlphaFunc)

#endif //osg_AlphaFunc_customHPP

