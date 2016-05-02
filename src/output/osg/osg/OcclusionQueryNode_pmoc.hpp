#ifndef osg_OcclusionQueryNode_pmocHPP
#define  osg_OcclusionQueryNode_pmocHPP 1


#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
#include <osg/OcclusionQueryNode>
#include <osg/OcclusionQueryNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TestResult: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TestResult * _model;
QReflect_TestResult(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TestResult( );
//TestResult
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TestResult: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TestResult> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TestResult();
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
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_QueryGeometry;
			} ;
#include <osg/OcclusionQueryNode>
#include <osg/OcclusionQueryNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_OcclusionQueryNode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
OcclusionQueryNode * _model;
QReflect_OcclusionQueryNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OcclusionQueryNode( );
//OcclusionQueryNode
//virtual  osg::BoundingSphere  computeBound();
Q_INVOKABLE  bool  getDebugDisplay()const;
Q_INVOKABLE  bool  getPassed()const;
Q_INVOKABLE  bool  getPassed(osg::QReflect_Camera *camera ,osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE  bool  getQueriesEnabled()const;
Q_INVOKABLE  unsigned int  getQueryFrameCount()const;
Q_INVOKABLE  unsigned int  getVisibilityThreshold()const;
Q_INVOKABLE osg::QReflect_QueryGeometry*  getQueryGeometry();
Q_INVOKABLE osg::QReflect_QueryGeometry*  getQueryGeometry()const;
Q_INVOKABLE osg::QReflect_StateSet*  getDebugStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getDebugStateSet()const;
Q_INVOKABLE osg::QReflect_StateSet*  getQueryStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getQueryStateSet()const;
Q_INVOKABLE void  discardDeletedQueryObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedQueryObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  setDebugDisplay( bool enable);
Q_INVOKABLE void  setDebugStateSet(osg::QReflect_StateSet *ss);
Q_INVOKABLE void  setQueriesEnabled( bool enable);
Q_INVOKABLE void  setQueryFrameCount( unsigned int frames);
Q_INVOKABLE void  setQueryStateSet(osg::QReflect_StateSet *ss);
Q_INVOKABLE void  setVisibilityThreshold( unsigned int pixels);
Q_INVOKABLE void  traverseDebug(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  traverseQuery(osg::QReflect_Camera *camera ,osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  DebugDisplay  READ getDebugDisplay WRITE setDebugDisplay NOTIFY DebugDisplayChanged)
Q_PROPERTY(bool  QueriesEnabled  READ getQueriesEnabled WRITE setQueriesEnabled NOTIFY QueriesEnabledChanged)
Q_PROPERTY(osg::QReflect_StateSet * DebugStateSet  READ getDebugStateSet WRITE setDebugStateSet NOTIFY DebugStateSetChanged)
Q_PROPERTY(osg::QReflect_StateSet * QueryStateSet  READ getQueryStateSet WRITE setQueryStateSet NOTIFY QueryStateSetChanged)
Q_PROPERTY(unsigned int  QueryFrameCount  READ getQueryFrameCount WRITE setQueryFrameCount NOTIFY QueryFrameCountChanged)
Q_PROPERTY(unsigned int  VisibilityThreshold  READ getVisibilityThreshold WRITE setVisibilityThreshold NOTIFY VisibilityThresholdChanged)
signals: void DebugDisplayChanged();
public:
signals: void DebugStateSetChanged();
public:
signals: void QueriesEnabledChanged();
public:
signals: void QueryFrameCountChanged();
public:
signals: void QueryStateSetChanged();
public:
signals: void VisibilityThresholdChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_OcclusionQueryNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::OcclusionQueryNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_OcclusionQueryNode();
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
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
#include <osg/OcclusionQueryNode>
#include <osg/OcclusionQueryNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_QueryGeometry: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
QueryGeometry * _model;
QReflect_QueryGeometry(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_QueryGeometry( );
//QueryGeometry
Q_INVOKABLE  unsigned int  getNumPixels(osg::QReflect_Camera *cam);
Q_INVOKABLE void  deleteQueryObject( unsigned int contextID , GLuint handle);
Q_INVOKABLE void  discardDeletedQueryObjects( unsigned int contextID);
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  flushDeletedQueryObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  reset();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_QueryGeometry: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::QueryGeometry> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_QueryGeometry();
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


#endif //osg_OcclusionQueryNode_pmocHPP

