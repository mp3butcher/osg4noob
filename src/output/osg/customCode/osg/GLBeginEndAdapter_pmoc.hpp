#ifndef osg_GLBeginEndAdapter_customHPP
#define  osg_GLBeginEndAdapter_customHPP 1

//includes
#include <osg/GLBeginEndAdapter_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_State;
			} ;
#include <osg/GLBeginEndAdapter>

#include <osg/GLBeginEndAdapter_pmoc.hpp>
namespace osg{
class  QMLGLBeginEndAdapter: public QReflect_GLBeginEndAdapter
{
Q_OBJECT
public:
QMLGLBeginEndAdapter(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLBeginEndAdapter :public MetaQReflect_GLBeginEndAdapter{};

}
  Q_DECLARE_METATYPE(osg::QMLGLBeginEndAdapter)

#endif //osg_GLBeginEndAdapter_customHPP

