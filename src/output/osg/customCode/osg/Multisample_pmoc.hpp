#ifndef osg_Multisample_customHPP
#define  osg_Multisample_customHPP 1

//includes
#include <osg/Multisample_pmoc.hpp>
#include <QObject>
#include <osg/Multisample>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Multisample_pmoc.hpp>
namespace osg{
class  QMLMultisample: public QReflect_Multisample
{
Q_OBJECT
public:
QMLMultisample(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLMultisample :public MetaQReflect_Multisample{};

}
  Q_DECLARE_METATYPE(osg::QMLMultisample)

#endif //osg_Multisample_customHPP

