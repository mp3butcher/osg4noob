#ifndef osgParticle_RandomRateCounter_customHPP
#define  osgParticle_RandomRateCounter_customHPP 1

//includes
#include <osgParticle/RandomRateCounter_pmoc.hpp>
#include <QObject>
#include <osgParticle/RandomRateCounter>

#include <osgParticle/VariableRateCounter_pmoc.hpp>
#include <osgParticle/RandomRateCounter_pmoc.hpp>
namespace osgParticle
{
class  QMLRandomRateCounter: public QReflect_RandomRateCounter
{
    Q_OBJECT
    Q_PROPERTY(float minRate READ minRate WRITE minRate NOTIFY minRateChanged )
    Q_PROPERTY(float maxRate READ maxRate WRITE maxRate NOTIFY maxRateChanged )

public:
    QMLRandomRateCounter(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

    float minRate()const
    {
        return _model->getRateRange().minimum;
    }
    void minRate(float s)
    {
        if(s!=minRate())
        {
            _model->setRateRange(rangef(s,maxRate()));
            emit minRateChanged(s);
        }
    }

    float maxRate()const
    {
        return _model->getRateRange().maximum;
    }
    void maxRate(float s)
    {
        if(s!=maxRate())
        {
            _model->setRateRange(rangef(minRate(),s));
            emit maxRateChanged(s);
        }
    }
public slots:
    virtual void  updateModel();

signals:
    void minRateChanged(float);
    void maxRateChanged(float);
};

class   MetaQMLRandomRateCounter :public MetaQReflect_RandomRateCounter {};
}
Q_DECLARE_METATYPE(osgParticle::QMLRandomRateCounter)


#endif //osgParticle_RandomRateCounter_customHPP

