#ifndef osg_Group_customHPP
#define  osg_Group_customHPP 1

//includes

#include <osg/Group_pmoc.hpp>
#include <QObject>
#include <osg/Group>

#include <osg/Node_pmoc.hpp>
#include <osg/Group_pmoc.hpp>
#include <osg/Node_pmoc.hpp>

#include <customCode/osg/AttribListModel.hpp>


namespace osg
{
class  QMLGroup: public QReflect_Group
{
    Q_OBJECT
public:
    QMLGroup(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
    Q_PROPERTY(pmoc::StateAttribListModel* children READ children NOTIFY childrenChanged)
Q_INVOKABLE void addTexturedQuad();
    pmoc::StateAttribListModel *children()
    {
        return &_qchildren;
    }
protected:
    pmoc::StateAttribListModel _qchildren;
    QQuickItem* _clickedchild;

signals:
    void childrenChanged(pmoc::StateAttribListModel* );

public  slots:
    void childSelected(int i);
    virtual void updateModel();

public:
    Q_INVOKABLE void addChildFromFile(QUrl sss);

};
class  MetaQMLGroup:public MetaQReflect_Group{};
}
Q_DECLARE_METATYPE(osg::QMLGroup)

#endif //osg_Group_customHPP

