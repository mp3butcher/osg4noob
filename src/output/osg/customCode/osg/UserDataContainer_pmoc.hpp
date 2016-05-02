#ifndef osg_UserDataContainer_customHPP
#define  osg_UserDataContainer_customHPP 1

//includes
#include <osg/UserDataContainer_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/UserDataContainer>

#include <osg/UserDataContainer_pmoc.hpp>
namespace osg{
class  QMLUserDataContainer: public QReflect_UserDataContainer
{
Q_OBJECT
public:
QMLUserDataContainer(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLUserDataContainer :public MetaQReflect_UserDataContainer{};

}
  Q_DECLARE_METATYPE(osg::QMLUserDataContainer)
#include <osg/UserDataContainer_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Referenced;
			} ;
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/UserDataContainer>

#include <osg/UserDataContainer_pmoc.hpp>
#include <osg/UserDataContainer_pmoc.hpp>
namespace osg{
class  QMLDefaultUserDataContainer: public QReflect_DefaultUserDataContainer
{
Q_OBJECT
public:
QMLDefaultUserDataContainer(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDefaultUserDataContainer :public MetaQReflect_DefaultUserDataContainer{};

}
  Q_DECLARE_METATYPE(osg::QMLDefaultUserDataContainer)

#endif //osg_UserDataContainer_customHPP

