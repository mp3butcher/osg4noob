#ifndef osg_Object_customHPP
#define  osg_Object_customHPP 1

//includes
#include <osg/Object_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Referenced;
} ;
namespace osg
{
class QReflect_UserDataContainer;
} ;
#include <osg/Object>

#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/UserDataContainer>
//no deffilename
#include <osg/UserDataContainer_pmoc.hpp>
//no deffilename
#include <osg/Object_pmoc.hpp>
namespace osg
{
class  QMLObject: public QReflect_Object
{
    Q_OBJECT
    Q_PROPERTY(QString className READ className NOTIFY classNameNeverChanged )
    Q_PROPERTY(int dataVariance READ dataVariance WRITE dataVariance NOTIFY dataVarianceChanged)
signals:
    void classNameNeverChanged(QString);
    void dataVarianceChanged(int);
public:
    QMLObject(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);



    QString className()const;

    int dataVariance()const;
    void dataVariance(int s);

    ///overloaded in order not to seek osg::Object methods (considerered kind of useless)
    virtual void generateDisambiguationPossibilities(pmoc::MetaQQuickClass*paramtype,pmoc::SetPossibilities& posses,bool inv=false);
public slots:

    virtual void  updateModel();
};
class   MetaQMLObject :public MetaQReflect_Object{};
}
Q_DECLARE_METATYPE(osg::QMLObject)

#include <osg/Object_pmoc.hpp>
#include <QObject>
#include <osg/Object>

#include <osg/Object_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
namespace osg
{
class  QMLDummyObject: public QReflect_DummyObject
{
    Q_OBJECT
public:
    QMLDummyObject(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

};

class   MetaQMLDummyObject :public MetaQReflect_DummyObject{};
}
Q_DECLARE_METATYPE(osg::QMLDummyObject)

#endif //osg_Object_customHPP

