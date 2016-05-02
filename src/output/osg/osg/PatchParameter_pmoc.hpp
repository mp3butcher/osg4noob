#ifndef osg_PatchParameter_pmocHPP
#define  osg_PatchParameter_pmocHPP 1


#include <osg/PatchParameter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec2f;
			} ;
#include <osg/PatchParameter>
#include <osg/PatchParameter>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PatchParameter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PatchParameter * _model;
QReflect_PatchParameter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PatchParameter( );
//PatchParameter
//const  osg::Vec2 & getPatchDefaultInnerLevel();
//const  osg::Vec4 & getPatchDefaultOuterLevel();
Q_INVOKABLE  GLint  getVertices()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setPatchDefaultInnerLevel(osg::QReflect_Vec2f *level);
Q_INVOKABLE void  setPatchDefaultOuterLevel(osg::QReflect_Vec4f *level);
Q_INVOKABLE void  setVertices( GLint vertices);
Q_PROPERTY(GLint  Vertices  READ getVertices WRITE setVertices NOTIFY VerticesChanged)
signals: void VerticesChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PatchParameter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PatchParameter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PatchParameter();
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


#endif //osg_PatchParameter_pmocHPP

