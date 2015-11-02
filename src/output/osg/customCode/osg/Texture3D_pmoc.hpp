#ifndef osg_Texture3D_customHPP
#define  osg_Texture3D_customHPP 1

//includes
#include <osg/Texture3D_pmoc.hpp>
#include <QObject>
#include <osg/Texture3D>

#include <osg/Texture_pmoc.hpp>
#include <osg/Texture3D_pmoc.hpp>
namespace osg
{
class  QMLTexture3D: public QReflect_Texture3D
{
    Q_OBJECT
public:
    Q_PROPERTY(QUrl filename READ getfilename WRITE setfilename NOTIFY filenameChanged)
    QMLTexture3D(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
    QUrl getfilename()const;

    void setfilename(QUrl s);
    protected:
    QUrl _filename;
public slots:
    virtual void  updateModel();
void addToStateSet(QQModel*parentQQQModel);
signals:

    void filenameChanged(QUrl);
};
class   MetaQMLTexture3D :public MetaQReflect_Texture3D {};

}
Q_DECLARE_METATYPE(osg::QMLTexture3D)

#endif //osg_Texture3D_customHPP

