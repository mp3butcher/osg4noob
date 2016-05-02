#ifndef osg_StateSet_customHPP
#define  osg_StateSet_customHPP 1

//includes
#include <osg/StateSet_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Callback;
} ;

#include <osg/Object_pmoc.hpp>
#include <osg/StateSet>

#include <osg/StateSet_pmoc.hpp>


#include <customCode/osg/AttribListModel.hpp>

namespace osg
{
class  QReflect_Uniform;
class QReflect_StateAttribute;
class  QMLStateSet: public QReflect_StateSet
{
    Q_OBJECT
public:
    QMLStateSet(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
    virtual void updateModel();

    Q_INVOKABLE int getTextureUnit(pmoc::QQModel*);

    Q_INVOKABLE void setMode(QString mode,bool status,bool override);
    ///PMOC METHODS
    Q_INVOKABLE void setAttribute(osg::QReflect_StateAttribute *);
    Q_INVOKABLE void pmoc_reverse_setAttribute(osg::QReflect_StateAttribute *);//setAttribute
    ///IMPLEMENTS setAttributeAndModes([OPERAND],osg::StateAttribute::OVERRIDE|osg::StateAttribute::ON); /OFF
    Q_INVOKABLE void addUniform(osg::QReflect_Uniform * p);
    Q_INVOKABLE   void pmoc_reverse_addUniform(osg::QReflect_Uniform *p);
    ///_model->addUniform(p->_model, StateAttribute::ON); /removeuniform


    Q_PROPERTY(pmoc::StateAttribListModel* stateAttribs READ stateAttribs NOTIFY stateAttribsChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* texstateAttribs READ texstateAttribs NOTIFY texstateAttribsChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* uniformsList READ uniformsList NOTIFY uniformsListChanged)
    Q_PROPERTY(pmoc::StateAttribListModel* modeList READ modeList NOTIFY modeListChanged)
    Q_PROPERTY(int  renderingHint  READ getrenderingHint WRITE setrenderingHint NOTIFY renderingHintChanged)

    pmoc::StateAttribListModel *stateAttribs()
    {
        return &_attlist;
    }
    pmoc::StateAttribListModel *texstateAttribs()
    {
        return &_texattlist;
    }
    pmoc::StateAttribListModel *uniformsList()
    {
        return &_uniformslist;
    }  pmoc::StateAttribListModel *modeList()
    {
        return &_modelist;
    }
    int getrenderingHint()const
    {
        return _model->getRenderingHint();
    }
    void setrenderingHint(int i)
    {
        _model->setRenderingHint(i);
        emit renderingHintChanged(i);
    }

    ///texture states types
    std::vector<osg::StateAttribute::Type> textype;

//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)
signals:
    void uniformsListChanged(pmoc::StateAttribListModel*);
    void stateAttribsChanged(pmoc::StateAttribListModel*);
    void texstateAttribsChanged(pmoc::StateAttribListModel*);
    void modeListChanged(pmoc::StateAttribListModel*);
    void renderingHintChanged(int);

    //QQmlListProperty<pmoc::StateAttribObject> _qdrawables;
public:

    pmoc:: StateAttribListModel _attlist;
    pmoc::StateAttribListModel _texattlist;
    pmoc::StateAttribListModel _uniformslist;
    pmoc::StateAttribListModel _modelist;
    QQuickItem *  _currentattrib;
public slots:
///update

    void popStateAttribute(int i);
    void popTextureStateAttribute(int);
    void popUniform(int i);
};
class   MetaQMLStateSet :public MetaQReflect_StateSet{};
}
Q_DECLARE_METATYPE(osg::QMLStateSet)

#endif //osg_StateSet_customHPP

