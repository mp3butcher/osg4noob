#ifndef osg_NodeTrackerCallback_pmocHPP
#define  osg_NodeTrackerCallback_pmocHPP 1


#include <osg/NodeTrackerCallback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
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
QReflect_NodeTrackerCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeTrackerCallback( );
//NodeTrackerCallback
// ObserverNodePath & getTrackNodePath();
// void  setTrackNodePath(const  osg::NodePath &);
Q_INVOKABLE osg::QReflect_Node*  getTrackNode();
Q_INVOKABLE osg::QReflect_Node*  getTrackNode()const;
Q_INVOKABLE void  operator()(osg::QReflect_Node *node ,osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  setTrackNode(osg::QReflect_Node *node);
Q_INVOKABLE void  setTrackNodePath(osg::QReflect_ObserverNodePath *nodePath);
Q_INVOKABLE void  update(osg::QReflect_Node *node);
Q_PROPERTY(osg::QReflect_Node * TrackNode  READ getTrackNode WRITE setTrackNode NOTIFY TrackNodeChanged)
signals: void TrackNodeChanged();
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


#endif //osg_NodeTrackerCallback_pmocHPP

