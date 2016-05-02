#ifndef osgParticle_Particle_customHPP
#define  osgParticle_Particle_customHPP 1

//includes


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Drawable;
} ;
namespace osgParticle
{
class QReflect_Interpolator;
} ;
#include <osg/Drawable>
#include <osg/Drawable_pmoc.hpp>
#include <osgParticle/Interpolator>
#include <osgParticle/Interpolator_pmoc.hpp>
#include <osgParticle/Particle>

#include <osgParticle/Particle_pmoc.hpp>
namespace osgParticle
{
class  QMLParticle: public QReflect_Particle
{
    Q_OBJECT
    Q_PROPERTY(float minSize READ minSize WRITE minSize NOTIFY minSizeChanged )
    Q_PROPERTY(float maxSize READ maxSize WRITE maxSize NOTIFY maxSizeChanged )
    Q_PROPERTY(float minAlpha READ minAlpha WRITE minAlpha NOTIFY minAlphaChanged )
    Q_PROPERTY(float maxAlpha READ maxAlpha WRITE maxAlpha NOTIFY maxAlphaChanged )
public:
    float minSize()const
    {
        return _model->getSizeRange().minimum;
    }
    void minSize(float s)
    {
        if(s!=minSize())
        {
            _model->setSizeRange(rangef(s,maxSize()));
            emit minSizeChanged(s);
        }
    }
    float maxSize()const
    {
        return _model->getSizeRange().maximum;
    }
    void maxSize(float s)
    {
        if(s!=maxSize())
        {
            _model->setSizeRange(rangef(minSize(),s));
            emit maxSizeChanged(s);
        }
    }

    float minAlpha()const
    {
        return _model->getAlphaRange().minimum;
    }
    void minAlpha(float s)
    {
        if(s!=minAlpha())
        {
            _model->setAlphaRange(rangef(s,maxAlpha()));
            emit minAlphaChanged(s);
        }
    }
    float maxAlpha()const
    {
        return _model->getAlphaRange().maximum;
    }
    void maxAlpha(float s)
    {
        if(s!=maxAlpha())
        {
            _model->setAlphaRange(rangef(minAlpha(),s));
            emit maxAlphaChanged(s);
        }
    }
public:
    QMLParticle(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

signals:
    void minSizeChanged(float);
    void maxSizeChanged(float);
    void minAlphaChanged(float);
    void maxAlphaChanged(float);
};

class   MetaQMLParticle :public MetaQReflect_Particle {};
}
Q_DECLARE_METATYPE(osgParticle::QMLParticle)


#endif //osgParticle_Particle_customHPP

