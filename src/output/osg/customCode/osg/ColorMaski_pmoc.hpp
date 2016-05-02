#ifndef osg_ColorMaski_customHPP
#define  osg_ColorMaski_customHPP 1

//includes
#include <osg/ColorMaski_pmoc.hpp>
#include <QObject>
#include <osg/ColorMask_pmoc.hpp>
#include <osg/ColorMaski>

#include <osg/ColorMaski_pmoc.hpp>
namespace osg{
class  QMLColorMaski: public QReflect_ColorMaski
{
Q_OBJECT
public:
QMLColorMaski(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLColorMaski :public MetaQReflect_ColorMaski{};

}
  Q_DECLARE_METATYPE(osg::QMLColorMaski)

#endif //osg_ColorMaski_customHPP

