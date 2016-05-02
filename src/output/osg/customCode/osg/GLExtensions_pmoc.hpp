#ifndef osg_GLExtensions_customHPP
#define  osg_GLExtensions_customHPP 1

//includes
#include <osg/GLExtensions_pmoc.hpp>
#include <QObject>
#include <osg/GLExtensions>

#include <osg/Referenced_pmoc.hpp>
#include <osg/GLExtensions_pmoc.hpp>
namespace osg{
class  QMLGLExtensions: public QReflect_GLExtensions
{
Q_OBJECT
public:
QMLGLExtensions(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLExtensions :public MetaQReflect_GLExtensions{};

}
  Q_DECLARE_METATYPE(osg::QMLGLExtensions)

#endif //osg_GLExtensions_customHPP

