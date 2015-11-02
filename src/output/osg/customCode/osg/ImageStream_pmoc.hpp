#ifndef osg_ImageStream_customHPP
#define  osg_ImageStream_customHPP 1

//includes
#include <osg/ImageStream_pmoc.hpp>
#include <QObject>
#include <osg/ImageStream>

#include <osg/Image_pmoc.hpp>
#include <osg/ImageStream_pmoc.hpp>
namespace osg{
class  QMLImageStream: public QReflect_ImageStream
{
Q_OBJECT
public:
QMLImageStream(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLImageStream :public MetaQReflect_ImageStream{};

}
  Q_DECLARE_METATYPE(osg::QMLImageStream)

#endif //osg_ImageStream_customHPP

