#ifndef osg_ObserverNodePath_pmocHPP
#define  osg_ObserverNodePath_pmocHPP 1


#include <osg/ObserverNodePath_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
#include <osg/ObserverNodePath>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ObserverNodePath: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ObserverNodePath * _model;
QReflect_ObserverNodePath(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ObserverNodePath( );
//ObserverNodePath
// ObserverNodePath & operator=(const  ObserverNodePath &);
// bool  getNodePath( NodePath &);
// bool  getRefNodePath( RefNodePath &);
// void  setNodePath(const  osg::NodePath &);
// void  setNodePath(const  osg::RefNodePath &);
Q_INVOKABLE  bool  empty()const;
Q_INVOKABLE void  clearNodePath();
Q_INVOKABLE void  setNodePathTo(osg::QReflect_Node *node);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ObserverNodePath: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ObserverNodePath* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ObserverNodePath();
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


#endif //osg_ObserverNodePath_pmocHPP

