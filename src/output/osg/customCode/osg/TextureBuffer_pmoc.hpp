#ifndef osg_TextureBuffer_customHPP
#define  osg_TextureBuffer_customHPP 1

//includes
#include <osg/TextureBuffer_pmoc.hpp>
#include <QObject>
#include <osg/TextureBuffer>

#include <osg/Texture_pmoc.hpp>
#include <osg/TextureBuffer_pmoc.hpp>
namespace osg{
class  QMLTextureBuffer: public QReflect_TextureBuffer
{
Q_OBJECT
public:
QMLTextureBuffer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureBuffer :public MetaQReflect_TextureBuffer{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureBuffer)

#endif //osg_TextureBuffer_customHPP

