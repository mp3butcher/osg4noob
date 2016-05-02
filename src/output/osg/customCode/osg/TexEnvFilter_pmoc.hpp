#ifndef osg_TexEnvFilter_customHPP
#define  osg_TexEnvFilter_customHPP 1

//includes
#include <osg/TexEnvFilter_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/TexEnvFilter>

#include <osg/TexEnvFilter_pmoc.hpp>
namespace osg{
class  QMLTexEnvFilter: public QReflect_TexEnvFilter
{
Q_OBJECT
public:
QMLTexEnvFilter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexEnvFilter :public MetaQReflect_TexEnvFilter{};

}
  Q_DECLARE_METATYPE(osg::QMLTexEnvFilter)

#endif //osg_TexEnvFilter_customHPP

