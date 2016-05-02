#ifndef osg_Texture2D_customHPP
#define  osg_Texture2D_customHPP 1

//includes
#include <osg/Texture2D_pmoc.hpp>
#include <QObject>
#include <osg/Texture2D>
#include <QColor>
#include <osg/Texture_pmoc.hpp>
#include <osg/Texture2D_pmoc.hpp>
namespace osg
{
class  QMLTexture2D: public QReflect_Texture2D
{
    Q_OBJECT
public:

public:

    Q_INVOKABLE void addToStateSet(QQModel*parentQQQModel);
    Q_INVOKABLE void removeFromStateSet(QQModel*parentQQQModel);



#define QCOLORFROMOSG(XXX) QColor::fromRgbF(XXX.r(),XXX.g(),XXX.b(),XXX.a())
/// ////////////////////////Classic Properties////////////////////////////////
public:
    QString _wrap_s,_wrap_t;//_wrap_r;
//Q_PROPERTY(bool useHardwareMipMapGeneration READ getuseHardwareMipMapGeneration WRITE setuseHardwareMipMapGeneration NOTIFY useHardwareMipMapGenerationChanged)
    Q_PROPERTY(QColor bordercolor READ getbordercolor WRITE setbordercolor NOTIFY bordercolorChanged)
    Q_PROPERTY(int borderwidth READ getborderwidth WRITE setborderwidth NOTIFY borderwidthChanged)
    Q_PROPERTY(QString wrap_s READ getwrap_s WRITE setwrap_s NOTIFY wrap_sChanged)
    Q_PROPERTY(QString wrap_t READ getwrap_t WRITE setwrap_t NOTIFY wrap_tChanged)
    Q_PROPERTY(QString qtimage READ getqtimage WRITE setqtimage NOTIFY qtimageChanged)
    Q_PROPERTY(QUrl filename READ getfilename WRITE setfilename NOTIFY filenameChanged)

    QColor getbordercolor()
    {
        osg::Vec4 col=_model->getBorderColor( );
        return QCOLORFROMOSG(col);
    }
    void setbordercolor(QColor c)
    {
        osg::Vec4 col(c.redF(),c.greenF(),c.blueF(),c.alphaF());
        if(col!=_model->getBorderColor())
        {

            _model->setBorderColor( col);
            _model->dirtyTextureObject();
            emit bordercolorChanged(c);
        }
    }
    /*
    inline QColor getbordercolor()const {osg::Vec4 v=_model->getBorderColor();
    return QCOLORFROMOSG(v);//QColor(v.x(),v.y(),v.z(),v.w());
    }
    void setbordercolor(QColor c){
    osg::Vec4 v(c.redF(),c.greenF(),c.blueF(),c.alphaF());
    if (v!=_model->getBorderColor()){
    _model->setBorderColor(v);//_model->dirtyTextureObject();
    emit bordercolorChanged(c);
    }

    }*/
    inline  int getborderwidth()const
    {
        return _model->getBorderWidth();
    }
    void setborderwidth(int i)
    {
        if(_model->getBorderWidth()!=i)
        {
            _model->setBorderWidth(i);//_model->dirtyTextureObject();
            emit borderwidthChanged(i);
        }
    }

    inline QString getwrap_s()const
    {
        /*  */
        return _wrap_s;
    }

    inline QString getwrap_t()const
    {
        /*  */
        return _wrap_t;
    }
    void setwrap_s(QString s);
    void setwrap_t(QString s);
signals:
    void wrap_sChanged(QString);
    void wrap_tChanged(QString);

public:


    inline QString getqtimage()const
    {
        return _qtimage;
    }
    void setqtimage(QString s)
    {
        if(s!=_qtimage)
        {
            _qtimage=s;
            emit qtimageChanged(s);
        }
    }
     QUrl getfilename()const;

    void setfilename(QUrl s);
signals:
    void bordercolorChanged(QColor);
    void borderwidthChanged(int);
    void filenameChanged(QUrl);
    void qtimageChanged(QString);
protected:
    QString _qtimage;
    QUrl _filename;
public:
    QMLTexture2D(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};

class   MetaQMLTexture2D :public MetaQReflect_Texture2D{};
}
Q_DECLARE_METATYPE(osg::QMLTexture2D)

#endif //osg_Texture2D_customHPP

