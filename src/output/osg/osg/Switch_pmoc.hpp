#ifndef osg_Switch_pmocHPP
#define  osg_Switch_pmocHPP 1


#include <osg/Switch_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Switch;
			} ;
#include <osg/Switch>
#include <osg/Switch>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Switch: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Switch * _model;
QReflect_Switch(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Switch( );
//Switch
//virtual  BoundingSphere  computeBound();
// void  setValueList(const  ValueList &);
//const  ValueList & getValueList();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child , bool value);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  getChildValue(osg::QReflect_Node *child)const;
Q_INVOKABLE  bool  getNewChildDefaultValue()const;
Q_INVOKABLE  bool  getValue( unsigned int pos)const;
Q_INVOKABLE  bool  insertChild( unsigned int index ,osg::QReflect_Node *child , bool value);
Q_INVOKABLE  bool  insertChild( unsigned int index ,osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  bool  setAllChildrenOff();
Q_INVOKABLE  bool  setAllChildrenOn();
Q_INVOKABLE  bool  setSingleChildOn( unsigned int pos);
Q_INVOKABLE osg::QReflect_Switch*  asSwitch();
Q_INVOKABLE osg::QReflect_Switch*  asSwitch()const;
Q_INVOKABLE void  setChildValue(osg::QReflect_Node *child , bool value);
Q_INVOKABLE void  setNewChildDefaultValue( bool value);
Q_INVOKABLE void  setValue( unsigned int pos , bool value);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  NewChildDefaultValue  READ getNewChildDefaultValue WRITE setNewChildDefaultValue NOTIFY NewChildDefaultValueChanged)
signals: void NewChildDefaultValueChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Switch: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Switch> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Switch();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_Switch_pmocHPP

