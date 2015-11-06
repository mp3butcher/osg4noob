#ifndef osg_NodeTrackerCallback_pmocHPP
#define  osg_NodeTrackerCallback_pmocHPP 1

#include <osg/NodeTrackerCallback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_ObserverNodePath;
			} ;
#include <osg/NodeTrackerCallback>
#include <osg/NodeTrackerCallback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_NodeTrackerCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
NodeTrackerCallback * _model;
QReflect_NodeTrackerCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeTrackerCallback( );
//NodeTrackerCallback
// ObserverNodePath & getTrackNodePath();
//virtual  void  operator()( Node * , NodeVisitor *);
// void  setTrackNodePath(const  osg::NodePath &);
Q_INVOKABLE  osg::QReflect_Node * getTrackNode()const;
Q_INVOKABLE void  setTrackNodePath(osg::QReflect_ObserverNodePath *);
Q_INVOKABLE void  update(osg::QReflect_Node *);
Q_INVOKABLE void pmoc_reverse_setTrackNode( osg::QReflect_Node *par=0);
Q_INVOKABLE void setTrackNode( osg::QReflect_Node *par);
signals: void TrackNodeChanged(const osg::QReflect_Node*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NodeTrackerCallback: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_NodeTrackerCallback();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 

#endif //osg_NodeTrackerCallback_pmocHPP

