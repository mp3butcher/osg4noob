#ifndef osg_PagedLOD_pmocHPP
#define  osg_PagedLOD_pmocHPP 1

#include <osg/PagedLOD_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
#include <osg/PagedLOD>
#include <osg/PagedLOD>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PagedLOD: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PagedLOD * _model;
QReflect_PagedLOD(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PagedLOD( );
//PagedLOD
//virtual  bool  removeExpiredChildren( double  , unsigned int  , NodeList &);
// osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
// unsigned   getFrameNumber( unsigned int );
//const  osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
Q_INVOKABLE  bool  addChild(osg::QReflect_Node * , float  , float  ,const  QString & , float  , float );
Q_INVOKABLE  bool  addChild(osg::QReflect_Node * , float  , float );
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *);
Q_INVOKABLE  bool  removeChildren( unsigned int  , unsigned int );
Q_INVOKABLE  double  getMinimumExpiryTime( unsigned int )const;
Q_INVOKABLE  double  getTimeStamp( unsigned int )const;
Q_INVOKABLE  float  getPriorityOffset( unsigned int )const;
Q_INVOKABLE  float  getPriorityScale( unsigned int )const;
Q_INVOKABLE  osg::QReflect_Referenced * getDatabaseOptions()const;
Q_INVOKABLE  unsigned int  getMinimumExpiryFrames( unsigned int )const;
Q_INVOKABLE  unsigned int  getNumFileNames()const;
Q_INVOKABLE  unsigned int  getNumFrameNumbers()const;
Q_INVOKABLE  unsigned int  getNumMinimumExpiryFrames()const;
Q_INVOKABLE  unsigned int  getNumMinimumExpiryTimes()const;
Q_INVOKABLE  unsigned int  getNumPriorityOffsets()const;
Q_INVOKABLE  unsigned int  getNumPriorityScales()const;
Q_INVOKABLE  unsigned int  getNumTimeStamps()const;
Q_INVOKABLE QString  getFileName( unsigned int )const;
Q_INVOKABLE const QString  getDatabasePath()const;
Q_INVOKABLE const bool  getDisableExternalChildrenPaging()const;
Q_INVOKABLE const unsigned int  getFrameNumberOfLastTraversal()const;
Q_INVOKABLE const unsigned int  getNumChildrenThatCannotBeExpired()const;
Q_INVOKABLE void  setFileName( unsigned int  ,const  QString &);
Q_INVOKABLE void  setFrameNumber( unsigned int  , unsigned int );
Q_INVOKABLE void  setMinimumExpiryFrames( unsigned int  , unsigned int );
Q_INVOKABLE void  setMinimumExpiryTime( unsigned int  , double );
Q_INVOKABLE void  setPriorityOffset( unsigned int  , float );
Q_INVOKABLE void  setPriorityScale( unsigned int  , float );
Q_INVOKABLE void  setTimeStamp( unsigned int  , double );
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void pmoc_reverse_setDatabaseOptions( osg::QReflect_Referenced *par=0);
Q_INVOKABLE void setDatabaseOptions( osg::QReflect_Referenced *par);
Q_INVOKABLE void setDatabasePath(const QString &);
Q_INVOKABLE void setDisableExternalChildrenPaging(const bool &);
Q_INVOKABLE void setFrameNumberOfLastTraversal(const unsigned int &);
Q_INVOKABLE void setNumChildrenThatCannotBeExpired(const unsigned int &);
Q_PROPERTY(QString DatabasePath  READ getDatabasePath WRITE setDatabasePath NOTIFY DatabasePathChanged)
Q_PROPERTY(bool DisableExternalChildrenPaging  READ getDisableExternalChildrenPaging WRITE setDisableExternalChildrenPaging NOTIFY DisableExternalChildrenPagingChanged)
Q_PROPERTY(unsigned int FrameNumberOfLastTraversal  READ getFrameNumberOfLastTraversal WRITE setFrameNumberOfLastTraversal NOTIFY FrameNumberOfLastTraversalChanged)
Q_PROPERTY(unsigned int NumChildrenThatCannotBeExpired  READ getNumChildrenThatCannotBeExpired WRITE setNumChildrenThatCannotBeExpired NOTIFY NumChildrenThatCannotBeExpiredChanged)
signals: void DatabaseOptionsChanged(const osg::QReflect_Referenced*);
public:
signals: void DatabasePathChanged(const QString&);
public:
signals: void DisableExternalChildrenPagingChanged(const bool&);
public:
signals: void FrameNumberOfLastTraversalChanged(const unsigned int&);
public:
signals: void NumChildrenThatCannotBeExpiredChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PagedLOD: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PagedLOD> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PagedLOD();
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

#endif //osg_PagedLOD_pmocHPP

