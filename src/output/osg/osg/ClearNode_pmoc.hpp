#ifndef osg_ClearNode_pmocHPP
#define  osg_ClearNode_pmocHPP 1

#include <osg/ClearNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/ClearNode>
#include <osg/ClearNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClearNode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClearNode * _model;
QReflect_ClearNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClearNode( );
//ClearNode
// GLbitfield  getClearMask();
// void  setClearMask( GLbitfield );
//const  Vec4 & getClearColor();
Q_INVOKABLE const bool  getRequiresClear()const;
Q_INVOKABLE void  setClearColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void setRequiresClear(const bool &);
Q_PROPERTY(bool RequiresClear  READ getRequiresClear WRITE setRequiresClear NOTIFY RequiresClearChanged)
signals: void RequiresClearChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClearNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClearNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClearNode();
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

#endif //osg_ClearNode_pmocHPP

