#ifndef osgParticle_CenteredPlacer_customHPP
#define  osgParticle_CenteredPlacer_customHPP 1

//includes
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/CenteredPlacer>

#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <QVector3D>
namespace osgParticle
{
class  QMLCenteredPlacer: public QReflect_CenteredPlacer
{ Q_OBJECT
    Q_PROPERTY(QVector3D center READ center WRITE center NOTIFY centerChanged)
    QVector3D center()const
    {
        return QVector3D(_model->getControlPosition().x(),_model->getControlPosition().y(),_model->getControlPosition().z());
    }

    void center(QVector3D&v)
    {
        if( center()!=v)
        {

            _model->setCenter(osg::Vec3(v.x(),v.y(),v.z()));
            emit centerChanged(v);
        }
    }


public:
    QMLCenteredPlacer(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();
signals:
    void centerChanged(QVector3D);
};
class   MetaQMLCenteredPlacer :public MetaQReflect_CenteredPlacer{};
}
Q_DECLARE_METATYPE(osgParticle::QMLCenteredPlacer)


#endif //osgParticle_CenteredPlacer_customHPP

