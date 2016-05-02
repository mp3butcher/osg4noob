#ifndef osg_DeleteHandler_pmocHPP
#define  osg_DeleteHandler_pmocHPP 1


#include <osg/DeleteHandler_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Referenced;
			} ;
#include <osg/DeleteHandler>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DeleteHandler: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
DeleteHandler * _model;
QReflect_DeleteHandler(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DeleteHandler( );
//DeleteHandler
Q_INVOKABLE  unsigned int  getFrameNumber()const;
Q_INVOKABLE  unsigned int  getNumFramesToRetainObjects()const;
Q_INVOKABLE void  doDelete(osg::QReflect_Referenced *object);
Q_INVOKABLE void  flush();
Q_INVOKABLE void  flushAll();
Q_INVOKABLE void  requestDelete(osg::QReflect_Referenced *object);
Q_INVOKABLE void  setFrameNumber( unsigned int frameNumber);
Q_INVOKABLE void  setNumFramesToRetainObjects( unsigned int numberOfFramesToRetainObjects);
Q_PROPERTY(unsigned int  FrameNumber  READ getFrameNumber WRITE setFrameNumber NOTIFY FrameNumberChanged)
Q_PROPERTY(unsigned int  NumFramesToRetainObjects  READ getNumFramesToRetainObjects WRITE setNumFramesToRetainObjects NOTIFY NumFramesToRetainObjectsChanged)
signals: void FrameNumberChanged();
public:
signals: void NumFramesToRetainObjectsChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DeleteHandler: public pmoc::MetaQQuickClass{
protected:
std::set<osg::DeleteHandler* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DeleteHandler();
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


#endif //osg_DeleteHandler_pmocHPP

