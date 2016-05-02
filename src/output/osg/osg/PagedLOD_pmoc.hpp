#ifndef osg_PagedLOD_pmocHPP
#define  osg_PagedLOD_pmocHPP 1


#include <osg/PagedLOD_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
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
QReflect_PagedLOD(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PagedLOD( );
//PagedLOD
//virtual  bool  removeExpiredChildren( double  , unsigned int  , NodeList &);
// osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
// unsigned   getFrameNumber( unsigned int );
//const  osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child , float min , float max ,const  QString &filename , float priorityOffset , float priorityScale);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child , float min , float max);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  getDisableExternalChildrenPaging()const;
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  double  getMinimumExpiryTime( unsigned int childNo)const;
Q_INVOKABLE  double  getTimeStamp( unsigned int childNo)const;
Q_INVOKABLE  float  getPriorityOffset( unsigned int childNo)const;
Q_INVOKABLE  float  getPriorityScale( unsigned int childNo)const;
Q_INVOKABLE  unsigned int  getFrameNumberOfLastTraversal()const;
Q_INVOKABLE  unsigned int  getMinimumExpiryFrames( unsigned int childNo)const;
Q_INVOKABLE  unsigned int  getNumChildrenThatCannotBeExpired()const;
Q_INVOKABLE  unsigned int  getNumFileNames()const;
Q_INVOKABLE  unsigned int  getNumFrameNumbers()const;
Q_INVOKABLE  unsigned int  getNumMinimumExpiryFrames()const;
Q_INVOKABLE  unsigned int  getNumMinimumExpiryTimes()const;
Q_INVOKABLE  unsigned int  getNumPriorityOffsets()const;
Q_INVOKABLE  unsigned int  getNumPriorityScales()const;
Q_INVOKABLE  unsigned int  getNumTimeStamps()const;
Q_INVOKABLE QString  getDatabasePath()const;
Q_INVOKABLE QString  getFileName( unsigned int childNo)const;
Q_INVOKABLE osg::QReflect_Referenced*  getDatabaseOptions();
Q_INVOKABLE osg::QReflect_Referenced*  getDatabaseOptions()const;
Q_INVOKABLE void  setDatabaseOptions(osg::QReflect_Referenced *options);
Q_INVOKABLE void  setDatabasePath(const  QString &path);
Q_INVOKABLE void  setDisableExternalChildrenPaging( bool flag);
Q_INVOKABLE void  setFileName( unsigned int childNo ,const  QString &filename);
Q_INVOKABLE void  setFrameNumber( unsigned int childNo , unsigned int frameNumber);
Q_INVOKABLE void  setFrameNumberOfLastTraversal( unsigned int frameNumber);
Q_INVOKABLE void  setMinimumExpiryFrames( unsigned int childNo , unsigned int minFrames);
Q_INVOKABLE void  setMinimumExpiryTime( unsigned int childNo , double minTime);
Q_INVOKABLE void  setNumChildrenThatCannotBeExpired( unsigned int num);
Q_INVOKABLE void  setPriorityOffset( unsigned int childNo , float priorityOffset);
Q_INVOKABLE void  setPriorityScale( unsigned int childNo , float priorityScale);
Q_INVOKABLE void  setTimeStamp( unsigned int childNo , double timeStamp);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(QString  DatabasePath  READ getDatabasePath WRITE setDatabasePath NOTIFY DatabasePathChanged)
Q_PROPERTY(bool  DisableExternalChildrenPaging  READ getDisableExternalChildrenPaging WRITE setDisableExternalChildrenPaging NOTIFY DisableExternalChildrenPagingChanged)
Q_PROPERTY(osg::QReflect_Referenced * DatabaseOptions  READ getDatabaseOptions WRITE setDatabaseOptions NOTIFY DatabaseOptionsChanged)
Q_PROPERTY(unsigned int  FrameNumberOfLastTraversal  READ getFrameNumberOfLastTraversal WRITE setFrameNumberOfLastTraversal NOTIFY FrameNumberOfLastTraversalChanged)
Q_PROPERTY(unsigned int  NumChildrenThatCannotBeExpired  READ getNumChildrenThatCannotBeExpired WRITE setNumChildrenThatCannotBeExpired NOTIFY NumChildrenThatCannotBeExpiredChanged)
signals: void DatabaseOptionsChanged();
public:
signals: void DatabasePathChanged();
public:
signals: void DisableExternalChildrenPagingChanged();
public:
signals: void FrameNumberOfLastTraversalChanged();
public:
signals: void NumChildrenThatCannotBeExpiredChanged();
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


#endif //osg_PagedLOD_pmocHPP

