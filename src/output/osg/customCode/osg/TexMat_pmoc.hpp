#ifndef osg_TexMat_customHPP
#define  osg_TexMat_customHPP 1

//includes
#include <osg/TexMat_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/TexMat>

#include <osg/TexMat_pmoc.hpp>
namespace osg{
class  QMLTexMat: public QReflect_TexMat
{
Q_OBJECT
public:
QMLTexMat(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexMat :public MetaQReflect_TexMat{};

}
  Q_DECLARE_METATYPE(osg::QMLTexMat)

#endif //osg_TexMat_customHPP

