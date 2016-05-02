#ifndef osg_Texture2DMultisample_customHPP
#define  osg_Texture2DMultisample_customHPP 1

//includes
#include <osg/Texture2DMultisample_pmoc.hpp>
#include <QObject>
#include <osg/Texture2DMultisample>

#include <osg/Texture_pmoc.hpp>
#include <osg/Texture2DMultisample_pmoc.hpp>
namespace osg{
class  QMLTexture2DMultisample: public QReflect_Texture2DMultisample
{
Q_OBJECT
public:
QMLTexture2DMultisample(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexture2DMultisample :public MetaQReflect_Texture2DMultisample{};

}
  Q_DECLARE_METATYPE(osg::QMLTexture2DMultisample)

#endif //osg_Texture2DMultisample_customHPP

