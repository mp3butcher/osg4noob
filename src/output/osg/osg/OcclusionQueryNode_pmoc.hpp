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
QReflect_TestResult(pmoc::Instance *i=0,QObject* parent=0);
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
QReflect_OcclusionQueryNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OcclusionQueryNode( );
//OcclusionQueryNode
//virtual  osg::BoundingSphere  computeBound();
Q_INVOKABLE  bool  getPassed()const;
Q_INVOKABLE  bool  getPassed(osg::QReflect_Camera * ,osg::QReflect_NodeVisitor *);
Q_INVOKABLE  osg::QReflect_StateSet * getDebugStateSet()const;
Q_INVOKABLE  osg::QReflect_StateSet * getQueryStateSet()const;
Q_INVOKABLE const bool  getDebugDisplay()const;
Q_INVOKABLE const bool  getQueriesEnabled()const;
Q_INVOKABLE const unsigned int  getQueryFrameCount()const;
Q_INVOKABLE const unsigned int  getVisibilityThreshold()const;
Q_INVOKABLE osg::QReflect_QueryGeometry*  getQueryGeometry();
Q_INVOKABLE osg::QReflect_QueryGeometry*  getQueryGeometry()const;
Q_INVOKABLE void  discardDeletedQueryObjects( unsigned int );
Q_INVOKABLE void  flushDeletedQueryObjects( unsigned int  , double  , double &);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  traverseDebug(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void  traverseQuery(osg::QReflect_Camera * ,osg::QReflect_NodeVisitor *);
Q_INVOKABLE void pmoc_reverse_setDebugStateSet( osg::QReflect_StateSet *par=0);
Q_INVOKABLE void pmoc_reverse_setQueryStateSet( osg::QReflect_StateSet *par=0);
Q_INVOKABLE void setDebugDisplay(const bool &);
Q_INVOKABLE void setDebugStateSet( osg::QReflect_StateSet *par);
Q_INVOKABLE void setQueriesEnabled(const bool &);
Q_INVOKABLE void setQueryFrameCount(const unsigned int &);
Q_INVOKABLE void setQueryStateSet( osg::QReflect_StateSet *par);
Q_INVOKABLE void setVisibilityThreshold(const unsigned int &);
Q_PROPERTY(bool DebugDisplay  READ getDebugDisplay WRITE setDebugDisplay NOTIFY DebugDisplayChanged)
Q_PROPERTY(bool QueriesEnabled  READ getQueriesEnabled WRITE setQueriesEnabled NOTIFY QueriesEnabledChanged)
Q_PROPERTY(unsigned int QueryFrameCount  READ getQueryFrameCount WRITE setQueryFrameCount NOTIFY QueryFrameCountChanged)
Q_PROPERTY(unsigned int VisibilityThreshold  READ getVisibilityThreshold WRITE setVisibilityThreshold NOTIFY VisibilityThresholdChanged)
signals: void DebugDisplayChanged(const bool&);
public:
signals: void DebugStateSetChanged(const osg::QReflect_StateSet*);
public:
signals: void QueriesEnabledChanged(const bool&);
public:
signals: void QueryFrameCountChanged(const unsigned int&);
public:
signals: void QueryStateSetChanged(const osg::QReflect_StateSet*);
public:
signals: void VisibilityThresholdChanged(const unsigned int&);
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
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
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
QReflect_QueryGeometry(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_QueryGeometry( );
//QueryGeometry
Q_INVOKABLE  unsigned int  getNumPixels(osg::QReflect_Camera *);
Q_INVOKABLE void  deleteQueryObject( unsigned int  , GLuint );
Q_INVOKABLE void  discardDeletedQueryObjects( unsigned int );
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  flushDeletedQueryObjects( unsigned int  , double  , double &);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
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


#endif //osg_OcclusionQueryNode_pmocHPP

