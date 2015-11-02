#ifndef osg_TextureRectangle_customHPP
#define  osg_TextureRectangle_customHPP 1

//includes
#include <osg/TextureRectangle_pmoc.hpp>
#include <QObject>
#include <osg/TextureRectangle>

#include <osg/Texture_pmoc.hpp>
#include <osg/TextureRectangle_pmoc.hpp>
namespace osg{
class  QMLTextureRectangle: public QReflect_TextureRectangle
{
Q_OBJECT
public:
QMLTextureRectangle(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureRectangle :public MetaQReflect_TextureRectangle{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureRectangle)

#endif //osg_TextureRectangle_customHPP

