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

namespace pmoc{
class QQModel;
class Action
{
public:
    Action(std::string n,pmoc::MetaClass * s1,pmoc::MetaClass * s2):name(n),operand(s2),operatorsubject(s1) {};
    Action(const Action&o)
    {
        name=o.name;
        operatorsubject=o.operatorsubject;
        operand=o.operand;
    }
    bool operator <( const Action&o)const
    {
        return (name!=o.name)?name<o.name:(operatorsubject!=o.operatorsubject)?operatorsubject<o.operatorsubject:operand<o.operand;
    }
    std::string name;
    pmoc::MetaClass * operatorsubject;//
    pmoc::MetaClass * operand;
};
typedef std::vector< Action > Actions;
	class UIEditor: public QObject{
	Q_OBJECT
	signals:
	protected:
	 QQuickView *_win;
	 QQuickItem *_rootobject,*_thisqitem;
	 std::map<std::string, QObject*> _componentModels;
	//std::list<Instance> managedobjects;//store
///each operand_classname have a selected_instance
public:
           Actions _operators;//
           ///in order to get back currents
             QQModel*	cur_operand;
             QQModel*	cur_operatorsubject;
                       
            void generateAmbiguitiesMenu(std::string operandstring,std::set<std::string> &possibleactions);
            ///cohersistion de l'operand
            ///dispatch on the good HxCinvoquable (where subject coercition is done)
            void resolvOperator( QQModel*subject, QQModel*operand);
            void resolvReverseOperator( QQModel*subject, QQModel*operand);

            QQModel* _cutSubject;//copied parent ref
            QQModel* _copyOperand;//copied ref
            ///fill it on copy or cut
            bool _isCutAction;//is the copied must be removed
             QQModel* savoperand,*savsubject;///sav state during Edition Action (Copy Cut Del Paste)
           ///in order to set/retireve selected from outside pmocFrameWork 
	
	UIEditor(QQuickView*win=0,QQuickItem*parent=0);
	UIEditor(const UIEditor &o){_win=o._win;}
~UIEditor(){
}
void generatemenus(MetaClass* c,const Action&a,std::string &out);
signals:
void selectedChanged(pmoc::QQModel*m);
void copied(pmoc::QQModel*m);
void pasted(pmoc::QQModel*m);
void cutted(pmoc::QQModel*m);
void deleted(pmoc::QQModel*m);
public:
        Q_INVOKABLE void setSubject(pmoc::QQModel*m){if(m){cur_operatorsubject=m;}}
        Q_INVOKABLE void setOperand(pmoc::QQModel*m){if(m){cur_operand=m;
emit selectedChanged(m);}}
        ///call both of these in order to cut (setCopyOperand then  setCutSubject)
        ///call it in order to copy
        Q_INVOKABLE void setCopyOperand(pmoc::QQModel*m){if(m){_isCutAction=false;  _copyOperand=m;emit copied(m);}}
        ///call it and the lattest to cur
        Q_INVOKABLE void setCutSubject(pmoc::QQModel*m){if(m){_isCutAction=true; _cutSubject=m;emit cutted(m);}}

        Q_INVOKABLE void realPaste(){
        //save current state
         savoperand=cur_operand;savsubject=cur_operatorsubject;
       //setup subject assuming cur_operand is the selected QQModel
       cur_operatorsubject=cur_operand;
        //setup operand
        cur_operand=_copyOperand;
        resolvOperator(cur_operatorsubject,cur_operand);
        }
        Q_INVOKABLE void realRemoval(){
        cur_operatorsubject=_cutSubject;
        //setup operand
        cur_operand=_copyOperand;
        resolvReverseOperator(cur_operatorsubject,cur_operand);
        }
        ///inner slot to restore State after Edition Action (Copy Cut Del Paste)
        Q_INVOKABLE void restoreState(){
        //restore state
        cur_operand=savoperand;
        cur_operatorsubject=savsubject;
        }
};
}
Q_DECLARE_METATYPE(pmoc::UIEditor)
QML_DECLARE_TYPE(pmoc::UIEditor)
#endif

