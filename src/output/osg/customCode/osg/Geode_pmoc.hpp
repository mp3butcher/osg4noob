#ifndef osg_Geode_customHPP
#define  osg_Geode_customHPP 1

//includes


#include <osg/Geode_pmoc.hpp>
#include <QObject>
#include <osg/Geode>

#include <osg/Group_pmoc.hpp>
#include <osg/Geode_pmoc.hpp>

#include <customCode/osg/AttribListModel.hpp>

namespace osg
{
class  QMLGeode: public QReflect_Geode
{
    Q_OBJECT
    Q_PROPERTY(pmoc::StateAttribListModel* drawables READ getDrawables NOTIFY drawablesChanged)

protected:
    pmoc::StateAttribListModel _qdrawables;
    QQuickItem *_clickeddrawable;
public:


    pmoc::StateAttribListModel *getDrawables()
    {
        return &_qdrawables;
    }

    QMLGeode(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

public  slots:
    void DrawableSelected(int i);

    virtual void updateModel ();

signals:
    void drawablesChanged(pmoc::StateAttribListModel* );
};
class   MetaQMLGeode :public MetaQReflect_Geode{};
}
Q_DECLARE_METATYPE(osg::QMLGeode)

#endif //osg_Geode_customHPP

