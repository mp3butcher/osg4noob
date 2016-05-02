#ifndef osg_Node_customHPP
#define  osg_Node_customHPP 1

#include <osg/Switch_pmoc.hpp>
//includes

#include <QObject>
namespace osg
{
class QReflect_StateSet;
} ;
namespace osg
{
class QReflect_Callback;
} ;



#include <osg/Node_pmoc.hpp>
namespace osg
{
class  QMLNode: public QReflect_Node
{
    Q_OBJECT
    Q_PROPERTY(QString nodeMask READ nodeMask WRITE nodeMask NOTIFY nodeMaskChanged)

public:

    QString nodeMask()const;
    void nodeMask(QString);
signals:
    void nodeMaskChanged(QString);
public:
    QMLNode(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};
class   MetaQMLNode : public MetaQReflect_Node {};
}
Q_DECLARE_METATYPE(osg::QMLNode)

#endif //osg_Node_customHPP

