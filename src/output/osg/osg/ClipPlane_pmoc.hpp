#ifndef osg_ClipPlane_pmocHPP
#define  osg_ClipPlane_pmocHPP 1


#include <osg/ClipPlane_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Plane;
			} ;
#include <osg/ClipPlane>
#include <osg/ClipPlane>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClipPlane: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClipPlane * _model;
QReflect_ClipPlane(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClipPlane( );
//ClipPlane
//virtual  Type  getType();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//const  Vec4d & getClipPlane();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getClipPlaneNum()const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setClipPlane( double a , double b , double c , double d);
Q_INVOKABLE void  setClipPlane(osg::QReflect_Plane *plane);
Q_INVOKABLE void  setClipPlane(osg::QReflect_Vec4d *plane);
Q_INVOKABLE void  setClipPlaneNum( unsigned int num);
Q_PROPERTY(unsigned int  ClipPlaneNum  READ getClipPlaneNum WRITE setClipPlaneNum NOTIFY ClipPlaneNumChanged)
signals: void ClipPlaneNumChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClipPlane: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClipPlane> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClipPlane();
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


#endif //osg_ClipPlane_pmocHPP

