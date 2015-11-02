#ifndef osg_Geometry_customHPP
#define  osg_Geometry_customHPP 1

//includes
#include <osg/Geometry_pmoc.hpp>
#include <QObject>
#include <osg/Geometry>

#include <osg/Geometry_pmoc.hpp>
#include <osg/Array_pmoc.hpp>
#include <customCode/osg/AttribListModel.hpp>
namespace osg
{
class  QMLGeometry: public QReflect_Geometry
{
    Q_PROPERTY(pmoc::StateAttribListModel* vertexArray READ vertexArray NOTIFY vertexArrayChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* normalArray READ normalArray NOTIFY normalArrayChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* texCoordArrays READ texCoordArrays NOTIFY texCoordArraysChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* texCoordArrays READ texCoordArrays NOTIFY texCoordArraysChanged)
   Q_PROPERTY(pmoc::StateAttribListModel* vertexAttribArrays READ vertexAttribArrays NOTIFY vertexAttribArraysChanged)

     Q_PROPERTY(pmoc::StateAttribListModel* primitiveSet READ primitiveSet NOTIFY primitiveSetChanged)



     Q_OBJECT
public:
    QMLGeometry(pmoc::Instance *i=0,QObject* parent=0);

    Q_INVOKABLE void pmoc_reverse_addPrimitiveSet(osg::QReflect_PrimitiveSet*);
///add attrib array to the first unsettted index
    Q_INVOKABLE void addVertexAttribArray(osg::QReflect_Array*);
///find in ordered collection and remove
    Q_INVOKABLE void pmoc_reverse_addVertexAttribArray(osg::QReflect_Array*);

    ///add attrib array to the first unsettted index
    Q_INVOKABLE void addTexCoordArray(osg::QReflect_Array*);
///find in ordered collection and remove
    Q_INVOKABLE void pmoc_reverse_addTexCoordArray(osg::QReflect_Array*);


    virtual QQuickItem * connect2View(QQuickItem*);
//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)

    pmoc::StateAttribListModel* primitiveSet()
    {
        return &_qprimitiveSet;
    }
     pmoc::StateAttribListModel* vertexArray()
    {
        return &_qvertexArray;
    }
    pmoc::StateAttribListModel* normalArray()
    {
        return &_qnormalArray;
    }
    pmoc::StateAttribListModel* vertexAttribArrays()
    {
        return &_qvertexAttribArray;
    }
    pmoc::StateAttribListModel* texCoordArrays()
    {
        return &_qtexCoordArray;
    }

signals:
    void vertexAttribArraysChanged(pmoc::StateAttribListModel* );
    void texCoordArraysChanged(pmoc::StateAttribListModel* );
    void vertexArrayChanged(pmoc::StateAttribListModel* );
    void normalArrayChanged(pmoc::StateAttribListModel* );
    void primitiveSetChanged(pmoc::StateAttribListModel* );
public slots:
    virtual void updateModel();
public:
    Q_INVOKABLE void generateTangentSpace(int ,int );
protected:
    pmoc::StateAttribListModel _qvertexArray;
    pmoc::StateAttribListModel _qnormalArray;
      pmoc::StateAttribListModel _qvertexAttribArray;
    pmoc::StateAttribListModel _qtexCoordArray;
      pmoc::StateAttribListModel _qprimitiveSet;


public slots:
    void popVertexArray(int id);
    void popNormalArray(int id);
    void popSelectedTexCoordArray(int id);
    void popSelectedVertexAttribArray(int id);
    void popSelectedPrimitiveSet(int id);
};
class  MetaQMLGeometry:public MetaQReflect_Geometry{};
}
Q_DECLARE_METATYPE(osg::QMLGeometry)

#include <osg/Geometry_pmoc.hpp>
#include <QObject>
#include <osg/Geometry>

#include <osg/Geometry_pmoc.hpp>
#include <osg/Geometry_pmoc.hpp>
namespace deprecated_osg
{
class  QMLGeometry: public QReflect_Geometry
{
    Q_OBJECT
public:
    QMLGeometry(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

};

class  MetaQMLGeometry:public MetaQReflect_Geometry{};
}
Q_DECLARE_METATYPE(deprecated_osg::QMLGeometry)
#endif //osg_Geometry_customHPP
