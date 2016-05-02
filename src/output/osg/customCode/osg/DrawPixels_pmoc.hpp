#ifndef osg_DrawPixels_customHPP
#define  osg_DrawPixels_customHPP 1

//includes


#include <osg/DrawPixels_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Image;
			} ;
#include <osg/DrawPixels>

#include <osg/Drawable_pmoc.hpp>
#include <osg/Image>
#include <osg/Image_pmoc.hpp>
#include <osg/DrawPixels_pmoc.hpp>
namespace osg{
class  QMLDrawPixels: public QReflect_DrawPixels
{
Q_OBJECT
public:
QMLDrawPixels(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawPixels :public MetaQReflect_DrawPixels{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawPixels)

#endif //osg_DrawPixels_customHPP

