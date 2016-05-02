#ifndef osg_TextureCubeMap_customHPP
#define  osg_TextureCubeMap_customHPP 1

//includes
#include <osg/TextureCubeMap_pmoc.hpp>
#include <QObject>
#include <osg/TextureCubeMap>

#include <osg/Texture_pmoc.hpp>
#include <osg/TextureCubeMap_pmoc.hpp>
namespace osg{
class  QMLTextureCubeMap: public QReflect_TextureCubeMap
{
Q_OBJECT
public:
QMLTextureCubeMap(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureCubeMap :public MetaQReflect_TextureCubeMap{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureCubeMap)

#endif //osg_TextureCubeMap_customHPP

