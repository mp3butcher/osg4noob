#ifndef osg_DeleteHandler_customHPP
#define  osg_DeleteHandler_customHPP 1

//includes
#include <osg/DeleteHandler_pmoc.hpp>
#include <QObject>
#include <osg/DeleteHandler>

#include <osg/DeleteHandler_pmoc.hpp>
namespace osg{
class  QMLDeleteHandler: public QReflect_DeleteHandler
{
Q_OBJECT
public:
QMLDeleteHandler(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDeleteHandler :public MetaQReflect_DeleteHandler{};

}
  Q_DECLARE_METATYPE(osg::QMLDeleteHandler)

#endif //osg_DeleteHandler_customHPP

