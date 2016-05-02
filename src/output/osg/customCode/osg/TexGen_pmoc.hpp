#ifndef osg_TexGen_customHPP
#define  osg_TexGen_customHPP 1

//includes
#include <osg/TexGen_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/TexGen>

#include <osg/TexGen_pmoc.hpp>
namespace osg
{
class  QMLTexGen: public QReflect_TexGen
{
    Q_OBJECT
    Q_PROPERTY(int mode READ mode WRITE mode NOTIFY modeChanged)
    int mode()const;
    void mode(int i);

signals:
    void modeChanged(int);

public:
    QMLTexGen(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};

class   MetaQMLTexGen :public MetaQReflect_TexGen{};
}
Q_DECLARE_METATYPE(osg::QMLTexGen)

#endif //osg_TexGen_customHPP

