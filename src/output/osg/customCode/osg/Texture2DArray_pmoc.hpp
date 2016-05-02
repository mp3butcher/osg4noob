#ifndef osg_Texture2DArray_customHPP
#define  osg_Texture2DArray_customHPP 1

//includes
#include <osg/Texture2DArray_pmoc.hpp>
#include <QObject>
#include <osg/Texture2DArray>

#include <osg/Texture_pmoc.hpp>
#include <osg/Texture2DArray_pmoc.hpp>
namespace osg{
class  QMLTexture2DArray: public QReflect_Texture2DArray
{
Q_OBJECT
public:
QMLTexture2DArray(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexture2DArray :public MetaQReflect_Texture2DArray{};

}
  Q_DECLARE_METATYPE(osg::QMLTexture2DArray)

#endif //osg_Texture2DArray_customHPP

