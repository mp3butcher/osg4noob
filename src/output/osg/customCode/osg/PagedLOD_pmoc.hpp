#ifndef osg_PagedLOD_customHPP
#define  osg_PagedLOD_customHPP 1

//includes

#include <osg/PagedLOD_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Referenced;
} ;
#include <osg/LOD_pmoc.hpp>
#include <osg/PagedLOD>

#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/PagedLOD_pmoc.hpp>
#include "PagedLodListModel.hpp"
namespace osg
{
class  QMLPagedLOD: public QReflect_PagedLOD
{
    Q_OBJECT

    Q_PROPERTY(pmoc::PagedLodListModel* rangelist READ rangelist NOTIFY  rangeListChanged)
protected:
    pmoc::PagedLodListModel _qrangelist;


//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)
public:
    pmoc::PagedLodListModel *rangelist()
    {
        return &_qrangelist;
    }
    Q_INVOKABLE void addRange(QUrl filename,float mins,float maxs);


    QMLPagedLOD(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();
    signals:
    void rangeListChanged(pmoc::PagedLodListModel* );

};

class  MetaQMLPagedLOD:public MetaQReflect_PagedLOD{};
}
Q_DECLARE_METATYPE(osg::QMLPagedLOD)

#endif //osg_PagedLOD_customHPP

