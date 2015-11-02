#ifndef osg_ImageUtils_customHPP
#define  osg_ImageUtils_customHPP 1

//includes
#include <osg/ImageUtils_pmoc.hpp>
#include <QObject>
#include <osg/ImageUtils>

#include <osg/ImageUtils_pmoc.hpp>
namespace osg{
class  QMLCastAndScaleToFloatOperation: public QReflect_CastAndScaleToFloatOperation
{
Q_OBJECT
public:
QMLCastAndScaleToFloatOperation(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCastAndScaleToFloatOperation :public MetaQReflect_CastAndScaleToFloatOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLCastAndScaleToFloatOperation)

#endif //osg_ImageUtils_customHPP

