#ifndef osg_ColorMatrix_customHPP
#define  osg_ColorMatrix_customHPP 1

//includes
#include <osg/ColorMatrix_pmoc.hpp>
#include <QObject>
#include <osg/ColorMatrix>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ColorMatrix_pmoc.hpp>
namespace osg{
class  QMLColorMatrix: public QReflect_ColorMatrix
{
Q_OBJECT
public:
QMLColorMatrix(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLColorMatrix :public MetaQReflect_ColorMatrix{};

}
  Q_DECLARE_METATYPE(osg::QMLColorMatrix)

#endif //osg_ColorMatrix_customHPP

