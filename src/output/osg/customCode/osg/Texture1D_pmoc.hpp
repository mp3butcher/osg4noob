#ifndef osg_Texture1D_customHPP
#define  osg_Texture1D_customHPP 1

//includes
#include <osg/Texture1D_pmoc.hpp>
#include <QObject>
#include <osg/Texture1D>

#include <osg/Texture_pmoc.hpp>
#include <osg/Texture1D_pmoc.hpp>
namespace osg{
class  QMLTexture1D: public QReflect_Texture1D
{
Q_OBJECT
public:
QMLTexture1D(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexture1D :public MetaQReflect_Texture1D{};

}
  Q_DECLARE_METATYPE(osg::QMLTexture1D)

#endif //osg_Texture1D_customHPP

