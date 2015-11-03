#ifndef METAQQUICKCLASS_PMOC_H
#define METAQQUICKCLASS_PMOC_H 1
#include "Export.h"


#include <typeinfo>
#include <set>
#include <string>

#include <QObject>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>

#include <QHash>

#include <QStringList>

///max num of multiple inheritance
#define PMOC_MAXINHERITANCECLASS 4
namespace pmoc
{



typedef std::string ID;
class MetaQQuickClass;

class MetaQQuickClass;
typedef std::string ID;
class METAQQUICKINTERFACE_PMOC_EXPORT Instance
{
public:
    ///managed :tag instances whose lifecycle is managed by PMOCContext
    //carefull to the crash if you operate on a managed=false after its deletion
    Instance(MetaQQuickClass*c=0, void*m=0, bool managed = true) :ptr(m), model(c), ismanaged(managed) {};

    Instance(const Instance &o);

    ~Instance();
    ///Dynamic Cast
    inline bool isValid()
    {
        return ptr != 0 && model!=0;
    }
    Instance as(MetaQQuickClass*c);

    bool operator <(const Instance &o)const;

    void* ptr;
    MetaQQuickClass *model;
    bool ismanaged;///owner: native code or pmoc environment
    int nb_references;///software refcounter:references counted for pmoc managed object addnode=+1 removenode=-1
    ///
};
typedef std::pair<std::string,std::pair<std::string,std::string > > SubjectOperationOperand;
struct possibility_compare
{
    ///ignore subject
    bool operator() (const SubjectOperationOperand& s1, const SubjectOperationOperand& s2) const
    {

        if(s1.second.first ==s2.second.first)
            return s1.second.second <s2.second.second;
        else return s1.second.first<s2.second.first;

    }
};
typedef std::set<SubjectOperationOperand,possibility_compare> SetPossibilities;


class METAQQUICKINTERFACE_PMOC_EXPORT Action
{
protected:
    QString _do;
    QString _undo;
    QString _get;
const QMetaObject* _metaobject;
public:
    Action():_do(""),_undo(""),_get(""){};
    Action( const QString &doname,const QString &undoname,const QString &getname)
    {
        Action();
        _do=doname;
        _undo=undoname;
        _get=getname;
    }

   // void setup(const QMetaObject*metaobj,const QString &doname,const QString &undoname);
    bool operator <(const Action &o)const
    {
        if(_undo<o._undo)return true;
        else if( _do<o._do)return true;
        return false;
    }
    inline const QString & getDoMethod()const
    {
        return _do;
    }
    inline const QString & getUndoMethod()const
    {
        return _undo;
    }
    inline const QString & getGetMethod()const
    {
        return _get;
    }

    inline bool isValid()const
    {
        return _do!=""&&_undo!="";
    }

};
typedef std::set<Action> Actions;


class UIEditor;///QQUICK OBJECT INTERFACE
class QQModel;
class METAQQUICKINTERFACE_PMOC_EXPORT MetaQQuickClass // :public QObject
{
   // Q_OBJECT

friend QQModel;
    friend UIEditor;///TODO make createQQModel public
    QQmlComponent *contextMenuComponent;///contextmenu cache
protected:
    std::set<Action> _actions;
    ID _id;//think it as the classname (understandable by human)
    //double linked hierarchy
    std::set<MetaQQuickClass*> _parents;
    std::set<MetaQQuickClass*> _children;

    std::set<MetaQQuickClass*> _innerclasses;//innner classes
    ///create QML Code
    std::string composeComponentQML() const;
    ///create QML Imports
    std::string composeImportsQML()const;
    std::map<Instance,QQModel*> _classqmodelregister;
    std::map<Instance,QQuickItem*> _classviewregister;
///Hierachic QuickItem (testing)

///init stuffing
void init();
public:
   inline MetaQQuickClass() {init();}
   inline MetaQQuickClass(ID n)
    {
       init();
       _id = n;
    }
    ~MetaQQuickClass();

    const std::set<Action> & getActions()const
    {
        return _actions;
    }
    std::set<Action> & getActions()
    {
        return _actions;
    }
///search a classid only in inherited types
    MetaQQuickClass* getDownCastByID(ID&id);

///get all inherited types
    void getAllChildren(std::set<MetaQQuickClass*> &);

///get all mother types
    void getAllParents(std::set<MetaQQuickClass*> &);
    virtual bool isInstanciable()
    {
        return false;
    }
    //Q_INVOKABLE int getNumParent()const{return _parents.size();}
  //  Q_INVOKABLE MetaQQuickClass* getParent(unsigned int i)const{std::set<MetaQQuickClass*>::iterator it=_parents.begin();for(int x=0;x<i;x++)it++; return *(it);}


    virtual QQModel* createQQModel(Instance*i)=0;
    virtual Instance createInstance()=0;
    inline QQModel *getQQModel4QQuickView(Instance win)
    {
        return _classqmodelregister[win];
    }
    inline QQuickItem* getQQuickItem4QQuickView(Instance win)
    {
        return _classviewregister[win];
    }

    inline void setQQModel4QQuickView(Instance i, QQModel*m)
    {
        _classqmodelregister[i]=m;
    }
    inline void setQQuickItem4QQuickView(Instance i,QQuickItem*m)
    {
        _classviewregister[i]=m;
    }
///create a QML Component for Instance I
///win is the Context owner
///parent is the parent component (if undef set it as the win->rootObject())
    QQuickItem * getGuiComponent(QQuickView *win,Instance &i,QQuickItem*parent=0, std::string relationname="");
    QQuickItem * getGuiComponent(QQuickView *win,QQModel *qmod,QQuickItem*parent=0, std::string relationname="");
    ///return string containing required QML imports statements

    virtual const std::string Imports() const=0;
    ///if not null return statement to describe yourself by hand
    virtual const std::string fullComponent()const;//{return 0};
    ///else these strings will be used to composite it  hierarchically
    virtual  const std::string PREcompoQML()const=0;

    virtual const std::string  POSTcompoQML()const=0;
    //BEGINAutoproperties DONT EDIT BY HAND
    ///is polymorphic required?perhaps only required in derived
    ///	Instance * model;
    ///concretize it here would make possible early defintion of the composition pattern
    ///metaQQuickLibraryRegistry *componentcreator;
    //ENDAutoproperties DONT EDIT BY HAND


public://


    //MetaQQuickClass (Instance* m, MetaQQuickLibraryRegistry*c,QObject* parent = 0);


    const std::type_info* _typeid;///public non human key

    void addParent(MetaQQuickClass*c);
    void removeParent(MetaQQuickClass*c);
    void addChild(MetaQQuickClass*c);
    void removeChild(MetaQQuickClass*c);
    inline const ID & id()const
    {
        return  (const ID &)_id;
    }
    const std::set<MetaQQuickClass*>  & children()const
    {
        return _children;
    }
    const std::set<MetaQQuickClass*>  & parents()const
    {
        return  _parents;
    }
    MetaQQuickClass *getSubClassByTypeInfo(const std::type_info &id) throw (std::bad_typeid );

    MetaQQuickClass *getSubClassByID(const ID &id)
    {
        if (this->_id == id) return this;
        MetaQQuickClass* ret = 0;
        for (std::set<MetaQQuickClass*>::const_iterator it = this->_innerclasses.begin(); it != this->_innerclasses.end(); it++)
        {
            ret = (*it)->getSubClassByID(id);
            if (ret)return ret;
        }
        return 0;
    }
    bool isSubClass(MetaQQuickClass*cl)
    {
        //search parents for cl
        bool ret = false;
        for (std::set<MetaQQuickClass*>::const_iterator it = this->_parents.begin(); it != this->_parents.end(); it++)
        {
            ///terminal case
            if ((*it)->_id == cl->_id)return true;
            //recursive
            ret = (*it)->isSubClass(cl);
            if (ret)return ret;
        }
        return false;
    }

    ///*************************************Interfaces that all generated MetaLibrary will have***********************************//////////////

    // virtual QQInstance createInstance() = 0;
    ///create a pointer to a new instance
    //void * createInstance(){ CPPContext::createInstance(className); }
public :
    std::string contextMenu;// store qml string to setup context menu on QQuickItem
    static std::string getPartialContextMenu(QObject&);///toremove //return qml menu corresponding to the INVOQUABLE methods of the QObject

    //virtual SetPossibilities generateAmbiguitiesMenu(QQModel *subject,MetaQQuickClass* paramtype)=0;
    static void  getPartialAmbiguityMenu(QObject&,MetaQQuickClass* paramtype,SetPossibilities &out,bool inv=false);
    static void  getPartialMenu(QObject&,SetPossibilities &out);


    ///this considered as subject class
    std::string  generateAmbiguityMenu(MetaQQuickClass* paramtype,const SetPossibilities &in);
    std::string  generateMenu(const SetPossibilities &in);
    ///return a  menu string for ambiguity leverage


};
class METAQQUICKINTERFACE_PMOC_EXPORT QQModel:public QObject
{Q_OBJECT
Q_PROPERTY(QStringList undoActions READ getUndoActions NOTIFY undoActionsChanged)
Q_PROPERTY(QStringList doActions READ getDoActions NOTIFY doActionsChanged)
Q_PROPERTY(QStringList getActions READ getgetActions NOTIFY getActionsChanged)

friend class MetaQQuickClass;
public:
    Q_INVOKABLE QQuickItem *getQuickItem()
    {
        return _view;
    }
    Q_INVOKABLE QQModel *getthis()
    {
        return this;
    }
    Q_INVOKABLE virtual QQModel * getParentBox(int i){return _parentboxes[i<getNumParentBox()-1?i:getNumParentBox()-1];}
    Q_INVOKABLE virtual unsigned int getNumParentBox()=0;

    ///managed :tag instances whose lifecycle is managed by CPPContext
    //carefull to the crash if you operate on a managed=false after its deletion
    //	QQInstance(MetaQQuickClass*c, void*m, bool managed = true) :ptr(m), model(c), ismanaged(managed){};
//QQuickView*qmlcontextview,

    QQModel(Instance *i=0,QObject* parent = 0);
    QQModel(const QQModel& o) ;
    virtual ~QQModel()  ;
    QQuickItem *_view;
QQModel * _parentboxes[PMOC_MAXINHERITANCECLASS]; ///parent boxes for upcast

    ///deforming mirrors for this instance
    ///use to retrieve meta after throwing it in Qt meta model via signals
    Instance _instance;

   Q_INVOKABLE  QQuickItem *connect2View(QQuickItem*i);
    ///set properties for the contextual menu
     void link2ContextMenu(QQuickItem* );
  ///generate the disambiguation menu for a parameter of type paramtype
    ///inv indicate weither if s 4  "metanodes" add or removal purpose
     void generateDisambiguationPossibilities(pmoc::MetaQQuickClass*paramtype,SetPossibilities& posses,bool inv=false);
     void generatePossibilities( SetPossibilities& posses);

    const Actions& getActions()const;
    const QStringList getDoActions()const{QStringList l;for(Actions::const_iterator it=getActions().begin();it!=getActions().end();it++)
    l.append((*it).getDoMethod());return l;}
   const QStringList getUndoActions()const{QStringList l;for(Actions::const_iterator it=getActions().begin();it!=getActions().end();it++)
    l.append((*it).getUndoMethod());return l;}
       const QStringList getgetActions()const{QStringList l;for(Actions::const_iterator it=getActions().begin();it!=getActions().end();it++)
    l.append((*it).getGetMethod());return l;}

public slots:
///check for instance unicity (kill view if same QQmodel has same instance as this)
    //virtual void checkInstance(QQModel*);
    QString getUniqueID()const;
    virtual void updateModel()=0;
signals:
    void modelChanged();
    void doActionsChanged(QStringList);
    void undoActionsChanged(QStringList);
    void getActionsChanged(QStringList);

};
//dont know how to help user get back his original type
//perhaps
/*template <class T,const char * s> class BACK{

	T * operator () (const Instance & i){
		if(i.model->id()==std::string(s))
			return reinterpret_cast<T>(i.ptr);
		else 	return 0;

	}
}; need runtime mem so prefer macro:)*/

}
QML_DECLARE_INTERFACE(pmoc::QQModel)
//Q_DECLARE_METATYPE(pmoc::QQModel)

///use it in MetaClass inherited constructor
#define STR(s) #s
//#define XSTR(s) STR(s)
#define PMOCACTION(GET,DO,UNDO) {pmoc::Action a(DO,UNDO,GET);if(a.isValid())this->_actions.insert(a);}
#endif
