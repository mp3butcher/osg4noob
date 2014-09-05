#ifndef EDITOR_META_CLASS_osg_MaterialQQQ_H
#define EDITOR_META_CLASS_osg_MaterialQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Material>

#define QCOLORFROMOSG(XXX) QColor::fromRgbF(XXX.r(),XXX.g(),XXX.b(),XXX.a() )
namespace pmoc
{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_MaterialQQQ_QModel: public QQModel
{
    Q_OBJECT
    Q_PROPERTY(QColor diffuseFB READ getdiffuseFB WRITE setdiffuseFB NOTIFY diffuseFBChanged)
    Q_PROPERTY(QColor ambientFB READ getambientFB WRITE setambientFB NOTIFY ambientFBChanged)
    Q_PROPERTY(QColor specularFB READ getspecularFB WRITE setspecularFB NOTIFY  specularFBChanged)
    Q_PROPERTY(float shininessFB READ getshininessFB WRITE setshininessFB NOTIFY  shininessFBChanged)

    Q_PROPERTY(QColor diffuseF READ getdiffuseF WRITE setdiffuseF NOTIFY diffuseFChanged)
    Q_PROPERTY(QColor ambientF READ getambientF WRITE setambientF NOTIFY ambientFChanged)
    Q_PROPERTY(QColor specularF READ getspecularF WRITE setspecularF NOTIFY  specularFChanged)
    Q_PROPERTY(float shininessF READ getshininessF WRITE setshininessF NOTIFY  shininessFChanged)

    Q_PROPERTY(QColor diffuseB READ getdiffuseB WRITE setdiffuseB NOTIFY diffuseBChanged)
    Q_PROPERTY(QColor ambientB READ getambientB WRITE setambientB NOTIFY ambientBChanged)
    Q_PROPERTY(QColor specularB READ getspecularB WRITE setspecularB NOTIFY  specularBChanged)
    Q_PROPERTY(float shininessB READ getshininessB WRITE setshininessB NOTIFY  shininessBChanged)
signals:
    void diffuseFBChanged(QColor);
    void ambientFBChanged(QColor);
    void specularFBChanged(QColor);
    void diffuseFChanged(QColor);
    void ambientFChanged(QColor);
    void specularFChanged(QColor);
    void diffuseBChanged(QColor);
    void ambientBChanged(QColor);
    void specularBChanged(QColor);

    void shininessFBChanged(float);
    void shininessBChanged(float);
    void shininessFChanged(float);
public:
///////FRONT ////////////////////////////////////////
    QColor getambientF()
    {
        osg::Vec4 col=_model->getAmbient(osg::Material::FRONT);
        return QCOLORFROMOSG(col);
    }
    void setambientF(QColor c)
    {
        if(c!=getambientF())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setAmbient( osg::Material::FRONT,col);
            emit ambientFChanged(c);
        }
    }
    QColor getdiffuseF()
    {
        osg::Vec4 col=_model->getDiffuse(osg::Material::FRONT);
        return QCOLORFROMOSG(col);
    }
    void setdiffuseF(QColor c)
    {
        if(c!=getdiffuseF())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setDiffuse( osg::Material::FRONT,col);
            emit diffuseFChanged(c);
        }
    }
    QColor getspecularF()
    {
        osg::Vec4 col=_model->getSpecular(osg::Material::FRONT);
        return QCOLORFROMOSG(col);
    }
    void setspecularF(QColor c)
    {
        if(c!=getspecularF())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setSpecular( osg::Material::FRONT,col);
            emit specularFChanged(c);
        }
    }
    float getshininessF()
    {
        return _model->getShininess(osg::Material::FRONT);
    }
    void setshininessF(float f)
    {
        if (f!=getshininessF())
        {
            _model->setShininess(osg::Material::FRONT,f);
            emit shininessFChanged(f);
        }
    }


/////// BACK////////////////////////////////////////
    QColor getambientB()
    {
        osg::Vec4 col=_model->getAmbient(osg::Material::BACK);
        return QCOLORFROMOSG(col);
    }
    void setambientB(QColor c)
    {
        if(c!=getambientB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setAmbient( osg::Material::BACK,col);
            emit ambientBChanged(c);
        }
    }
    QColor getdiffuseB()
    {
        osg::Vec4 col=_model->getDiffuse(osg::Material::BACK);
        return QCOLORFROMOSG(col);
    }
    void setdiffuseB(QColor c)
    {
        if(c!=getdiffuseB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setDiffuse( osg::Material::BACK,col);
            emit diffuseBChanged(c);
        }
    }
    QColor getspecularB()
    {
        osg::Vec4 col=_model->getSpecular(osg::Material::BACK);
        return QCOLORFROMOSG(col);
    }
    void setspecularB(QColor c)
    {
        if(c!=getspecularB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setSpecular( osg::Material::BACK,col);
            emit specularBChanged(c);
        }
    }
    float getshininessB()
    {
        return _model->getShininess(osg::Material::BACK);
    }
    void setshininessB(float f)
    {
        if (f!=getshininessB())
        {
            _model->setShininess(osg::Material::BACK,f);
            emit shininessBChanged(f);
        }
    }

///////FRONT AND BACK////////////////////////////////////////
    QColor getambientFB()
    {
        osg::Vec4 col=_model->getAmbient(osg::Material::FRONT_AND_BACK);
        return QCOLORFROMOSG(col);
    }
    void setambientFB(QColor c)
    {
        if(_model->getAmbientFrontAndBack() &&c!=getambientFB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setAmbient( osg::Material::FRONT_AND_BACK,col);
            emit ambientFBChanged(c);
        }
    }
    QColor getdiffuseFB()
    {
        osg::Vec4 col=_model->getDiffuse(osg::Material::FRONT_AND_BACK);
        return QCOLORFROMOSG(col);
    }
    void setdiffuseFB(QColor c)
    {
        if(_model->getDiffuseFrontAndBack() &&c!=getdiffuseFB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setDiffuse( osg::Material::FRONT_AND_BACK,col);
            emit diffuseFBChanged(c);
        }
    }
    QColor getspecularFB()
    {
        osg::Vec4 col=_model->getSpecular(osg::Material::FRONT_AND_BACK);
        return QCOLORFROMOSG(col);
    }
    void setspecularFB(QColor c)
    {
        if(_model->getSpecularFrontAndBack() &&c!=getspecularFB())
        {
            osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
            _model->setSpecular( osg::Material::FRONT_AND_BACK,col);
            emit specularFBChanged(c);
        }
    }
    float getshininessFB()
    {
        return _model->getShininess(osg::Material::FRONT_AND_BACK);
    }
    void setshininessFB(float f)
    {
        if (f!=getshininessFB())
        {
            _model->setShininess(osg::Material::FRONT_AND_BACK,f);
            emit shininessFBChanged(f);
        }
    }


protected:
    osg::Material* _model;///the effective model to watch
public:
    ///Constructor////////////////
    osg_MaterialQQQ_QModel(Instance*i=0,QObject* parent = 0);
    ///Copy Constructor////////////////
    osg_MaterialQQQ_QModel(const osg_MaterialQQQ_QModel&o);
///Destruction////////////////
    ~osg_MaterialQQQ_QModel();
    inline osg::Material* getModel()
    {
        return  _model;
    }
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_MaterialQQQ: public MetaQQuickClass
{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
    osg_MaterialQQQ():MetaQQuickClass( "osg::Material")
    {
        _typeid=&typeid(osg::Material );
    };
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_MaterialQQQ_QModel)
#endif

