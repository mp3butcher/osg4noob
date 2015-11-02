#ifndef GEN_UIEDITOR_HPP
#define GEN_UIEDITOR_HPP

#include <MetaQQuickClass.h>
#include <list>
#include <map>
#include <typeinfo>
#include <memory>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>
#include <QtQml/QQmlContext>

class QsciLexer;
class QsciAPIs;
namespace pmoc
{
class QQModel;
class OldAction
{
public:
    OldAction(std::string n,pmoc::MetaQQuickClass * s1,pmoc::MetaQQuickClass * s2):name(n),operand(s2),operatorsubject(s1) {};
    OldAction(const OldAction&o)
    {
        name=o.name;
        operatorsubject=o.operatorsubject;
        operand=o.operand;
    }
    bool operator <( const OldAction&o)const
    {
        return (name!=o.name)?name<o.name:(operatorsubject!=o.operatorsubject)?operatorsubject<o.operatorsubject:operand<o.operand;
    }
    std::string name;
    pmoc::MetaQQuickClass * operatorsubject;//
    pmoc::MetaQQuickClass * operand;
};
typedef std::vector< OldAction > OldActions;
class UIEditor: public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isCutOldAction READ isCutOldAction WRITE isCutOldAction NOTIFY isCutOldActionChanged)
    Q_PROPERTY(QQModel* copyOperand READ getCopyOperand WRITE setCopyOperand NOTIFY copied)
    Q_PROPERTY(QQModel* subject READ getSubject WRITE setSubject NOTIFY subjectChanged)

signals:
    void subjectChanged(QQModel*);
    void copyOperandChanged(QQModel*);

protected:
    QsciLexer * lexer;

    QQuickView *_win;
    QQuickItem *_rootobject,*_thisqitem;
    std::map<std::string, QObject*> _componentModels;
    //std::list<Instance> managedobjects;//store
///each operand_classname have a selected_instance
public:
    UIEditor(const std:: string &conffile="",QQuickView*win=0,QQuickItem*parent=0);
    UIEditor(const UIEditor &o)
    {
        _win=o._win;
    }
    OldActions _operators;//
    ///in order to get back currents
    QQModel*	cur_operand;
    QQModel*	cur_operatorsubject;

    void generateAmbiguitiesMenu(std::string operandstring,std::set<std::string> &possibleOldActions);
    ///cohersistion de l'operand
    ///dispatch on the good HxCinvoquable (where subject coercition is done)
    void resolvOperator( QQModel*subject, QQModel*operand);
    void resolvReverseOperator( QQModel*subject, QQModel*operand);

    QQModel* _cutSubject;//copied parent ref
    QQModel* _copyOperand;//copied ref
    ///fill it on copy or cut
    bool _isCutOldAction;//is the copied must be removed
    QQModel* savoperand,*savsubject;///sav state during Edition OldAction (Copy Cut Del Paste)
    ///in order to set/retireve selected from outside pmocFrameWork
    QQModel* QModel_cur_selected;
    bool QModel_selected;
    Q_PROPERTY(QQModel* QModel_selected READ getQModel_selected WRITE setQModel_selected NOTIFY QModel_selectedChanged)
signals:
    void QModel_selectedChanged(QQModel*);
    void isCutOldActionChanged(bool);
public:

    bool isCutOldAction()const
    {
        return _isCutOldAction;

    }
    void isCutOldAction(bool b)
    {
        if(b!=_isCutOldAction)
        {
            _isCutOldAction=b;
            emit isCutOldActionChanged(b);
        }
    }
    inline QQModel* getQModel_selected()const
    {
        return QModel_cur_selected;
    }
    void setQModel_selected(QQModel* b)
    {
        if(QModel_cur_selected!=b)
        {
            QModel_cur_selected=b;
            emit QModel_selectedChanged(QModel_cur_selected);
        }
    }

    ~UIEditor()
    {
    }

    std::set<MetaQQuickClass*> _global_instanciables; ///managedviaeditor;

    void generatemenus(MetaQQuickClass* c,std::string &out);
    void injectJavaScriptInSelected(const QString&);
    QsciLexer *getLexer()const
    {
        return lexer;
    }
    QsciAPIs *api;

signals:
    void selectedChanged(pmoc::QQModel*m);
    void copied(pmoc::QQModel*m);
    void pasted(pmoc::QQModel*m);
    void cutted(pmoc::QQModel*m);
    void deleted(pmoc::QQModel*m);
    void QModelAdded(pmoc::QQModel*);


public slots:
    void check4newLex(pmoc::QQModel*);
    Q_INVOKABLE QQuickItem* connectQQModel2Ui( pmoc::QQModel* qmod,QQuickItem* view);
    Q_INVOKABLE QQuickItem* popQQModelUi( pmoc::QQModel* qmod,QQuickItem* parent=0,QString relationname="");
    Q_INVOKABLE QQuickItem* genUI4QQModel( pmoc::QQModel* qmod,QQuickItem* parent=0,QString relationname="");

    Q_INVOKABLE pmoc::QQModel* createInstance(QString instancetype );

    Q_INVOKABLE pmoc::QQModel*  brutalCast(pmoc::QQModel* qmod,QString casttype);
    Q_INVOKABLE pmoc::MetaQQuickClass*  getClassByName(QString casttype);

    Q_INVOKABLE pmoc::QQModel* getSubject()
    {
        return cur_operatorsubject;
    }
    Q_INVOKABLE void clearComponentCache();
    Q_INVOKABLE void setSubject(pmoc::QQModel*m)
    {
        if(m)
        {
            cur_operatorsubject=m;
            emit subjectChanged(cur_operatorsubject);
        }
    }

    Q_INVOKABLE pmoc::QQModel* getOperand()
    {
        return cur_operand;
    }
    Q_INVOKABLE void setOperand(pmoc::QQModel*m)
    {
        if(m)
        {
            cur_operand=m;
            /* setosg_Program_selected(cur_operand->_instance.model->isSubClass(PMOCGETMetaQQuickClass("osg::Program")));
            */
            emit selectedChanged(m);
        }
    }
    ///call both of these in order to cut (setCopyOperand then  setCutSubject)
    ///call it in order to copy

    Q_INVOKABLE void setCopyOperand(pmoc::QQModel*m)
    {
        if(m)
        {
            _isCutOldAction=false;
            _copyOperand=m;
            emit copied(m);
        }
    }
    Q_INVOKABLE pmoc::QQModel* getCopyOperand()
    {
        return _copyOperand;
    }
    ///call it and the lattest to cur
    Q_INVOKABLE void setCutSubject(pmoc::QQModel*m)
    {
        if(m)
        {
            _isCutOldAction=true;
            _cutSubject=m;
            emit cutted(m);
        }
    }
    Q_INVOKABLE pmoc::QQModel* getCutSubject()
    {
        return _cutSubject;
    }

    Q_INVOKABLE void realPaste();
    Q_INVOKABLE void realRemoval();
    ///inner slot to restore State after Edition OldAction (Copy Cut Del Paste)
    Q_INVOKABLE void restoreState()
    {
        //restore state
        cur_operand=savoperand;
        cur_operatorsubject=savsubject;
    }
};
}
Q_DECLARE_METATYPE(pmoc::UIEditor)
QML_DECLARE_TYPE(pmoc::UIEditor)
#endif

