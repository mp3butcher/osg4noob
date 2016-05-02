#ifndef osg_Referenced_customHPP
#define  osg_Referenced_customHPP 1

//includes
#include <osg/Referenced_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_DeleteHandler;
			} ;
#include <osg/Referenced>

#include <osg/Referenced_pmoc.hpp>
namespace osg{
class  QMLReferenced: public QReflect_Referenced
{
Q_OBJECT
public:
QMLReferenced(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLReferenced :public MetaQReflect_Referenced{};

}
  Q_DECLARE_METATYPE(osg::QMLReferenced)

#endif //osg_Referenced_customHPP

