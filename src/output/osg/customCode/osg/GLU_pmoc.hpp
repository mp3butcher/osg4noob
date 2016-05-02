#ifndef osg_GLU_customHPP
#define  osg_GLU_customHPP 1

//includes
#include <osg/GLU_pmoc.hpp>
#include <QObject>
#include <osg/GLU>

#include <osg/GLU_pmoc.hpp>
namespace osg{
class  QMLPixelStorageModes: public QReflect_PixelStorageModes
{
Q_OBJECT
public:
QMLPixelStorageModes(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPixelStorageModes :public MetaQReflect_PixelStorageModes{};

}
  Q_DECLARE_METATYPE(osg::QMLPixelStorageModes)

#endif //osg_GLU_customHPP

