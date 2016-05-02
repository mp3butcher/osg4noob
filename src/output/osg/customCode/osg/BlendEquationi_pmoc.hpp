#ifndef osg_BlendEquationi_customHPP
#define  osg_BlendEquationi_customHPP 1

//includes
#include <osg/BlendEquationi_pmoc.hpp>
#include <QObject>
#include <osg/BlendEquation_pmoc.hpp>
#include <osg/BlendEquationi>

#include <osg/BlendEquationi_pmoc.hpp>
namespace osg{
class  QMLBlendEquationi: public QReflect_BlendEquationi
{
Q_OBJECT
public:
QMLBlendEquationi(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlendEquationi :public MetaQReflect_BlendEquationi{};

}
  Q_DECLARE_METATYPE(osg::QMLBlendEquationi)

#endif //osg_BlendEquationi_customHPP

