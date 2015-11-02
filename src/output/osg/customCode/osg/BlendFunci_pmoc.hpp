#ifndef osg_BlendFunci_customHPP
#define  osg_BlendFunci_customHPP 1

//includes
#include <osg/BlendFunci_pmoc.hpp>
#include <QObject>
#include <osg/BlendFunc_pmoc.hpp>
#include <osg/BlendFunci>

#include <osg/BlendFunci_pmoc.hpp>
namespace osg{
class  QMLBlendFunci: public QReflect_BlendFunci
{
Q_OBJECT
public:
QMLBlendFunci(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlendFunci :public MetaQReflect_BlendFunci{};

}
  Q_DECLARE_METATYPE(osg::QMLBlendFunci)

#endif //osg_BlendFunci_customHPP

