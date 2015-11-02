#ifndef osg_LOD_customHPP
#define  osg_LOD_customHPP 1

//includes

#include <osg/LOD_pmoc.hpp>
#include <QObject>
#include <osg/Group_pmoc.hpp>
#include <osg/LOD>

#include <osg/LOD_pmoc.hpp>
#include "PagedLodListModel.hpp"
#include <QVector3D>

namespace osg
{
class  QMLLOD: public QReflect_LOD
{
    Q_PROPERTY(pmoc::PagedLodListModel* rangelist READ rangelist NOTIFY  rangeListChanged)
    Q_PROPERTY(unsigned int centerMode READ centerMode WRITE centerMode NOTIFY centerModeChanged)
    Q_PROPERTY(float   radius READ radius WRITE radius NOTIFY radiusChanged)
    Q_PROPERTY(QVector3D   center READ center WRITE center NOTIFY centerChanged)
    /*centermode
    USE_BOUNDING_SPHERE_CENTER
    USER_DEFINED_CENTER
    UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED 	*/
    Q_OBJECT
public:
    QMLLOD(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
protected:
    pmoc::PagedLodListModel _qrangelist;
unsigned int _centerMode;

//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)
public:
    unsigned int centerMode()const;
    void centerMode(unsigned int);
    pmoc::PagedLodListModel *rangelist()
    {
        return &_qrangelist;
    }
    Q_INVOKABLE void setRange(int i,float mins,float maxs);


    float radius()const
    {
        return _model->getRadius();
    }
    void radius(float f)
    {
        if(f!=radius())
        {
            _model->setRadius(f);
            emit radiusChanged(f);
        }
    }
    QVector3D center()const
    {
        return QVector3D(_model->getCenter().x(),_model->getCenter().y(),_model->getCenter().z());
    }
    void center(QVector3D f)
    {
        if(f!=center())
        {
            _model->setCenter(osg::Vec3(f.x(),f.y(),f.z()));
            emit centerChanged(f);
        }
    }


public slots:
    virtual void  updateModel();

signals:
    void centerModeChanged(unsigned int);
    void centerChanged(QVector3D);

    void rangeListChanged(pmoc::PagedLodListModel* );
    void radiusChanged(float);
};
class  MetaQMLLOD:public MetaQReflect_LOD{};
}
Q_DECLARE_METATYPE(osg::QMLLOD)

#endif //osg_LOD_customHPP

