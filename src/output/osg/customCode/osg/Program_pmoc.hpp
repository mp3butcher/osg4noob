#ifndef osg_Program_customHPP
#define  osg_Program_customHPP 1

//includes
#include <osg/Program_pmoc.hpp>
#include <QObject>
#include <osg/Program>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Program_pmoc.hpp>
#include <customCode/osg/AttribListModel.hpp>
namespace osg
{
class  QMLProgram: public QReflect_Program
{
    Q_OBJECT
    Q_PROPERTY(pmoc::StateAttribListModel* shaderlist READ getshaderlist NOTIFY shaderlistChanged)
         Q_PROPERTY(pmoc::StateAttribListModel* vertexAttribLocations READ vertexAttribLocations NOTIFY vertexAttribLocationsChanged)
    public:
    Q_INVOKABLE void addVertexAttribLocation(int,QString);
    Q_INVOKABLE void removeVertexAttribLocation( QString);

     pmoc::StateAttribListModel* vertexAttribLocations()
    {
        return &_qvertexAttribLocations;
    }


    pmoc::StateAttribListModel _qvertexAttribLocations;
    pmoc::StateAttribListModel *getshaderlist()
    {
        return &_shaderlist;
    }
signals:
    void shaderlistChanged(pmoc::StateAttribListModel*);
protected:

    pmoc::StateAttribListModel _shaderlist;
public:
    QMLProgram(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();
    void popShader(int);
    signals:

    void vertexAttribLocationsChanged(pmoc::StateAttribListModel* );

};

class   MetaQMLProgram :public MetaQReflect_Program{};
}
Q_DECLARE_METATYPE(osg::QMLProgram)

#endif //osg_Program_customHPP

