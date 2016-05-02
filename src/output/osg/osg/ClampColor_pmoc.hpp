#ifndef osg_ClampColor_pmocHPP
#define  osg_ClampColor_pmocHPP 1


#include <osg/ClampColor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/ClampColor>
#include <osg/ClampColor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClampColor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClampColor * _model;
QReflect_ClampColor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClampColor( );
//ClampColor
Q_INVOKABLE  GLenum  getClampFragmentColor()const;
Q_INVOKABLE  GLenum  getClampReadColor()const;
Q_INVOKABLE  GLenum  getClampVertexColor()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setClampFragmentColor( GLenum mode);
Q_INVOKABLE void  setClampReadColor( GLenum mode);
Q_INVOKABLE void  setClampVertexColor( GLenum mode);
Q_PROPERTY(GLenum  ClampFragmentColor  READ getClampFragmentColor WRITE setClampFragmentColor NOTIFY ClampFragmentColorChanged)
Q_PROPERTY(GLenum  ClampReadColor  READ getClampReadColor WRITE setClampReadColor NOTIFY ClampReadColorChanged)
Q_PROPERTY(GLenum  ClampVertexColor  READ getClampVertexColor WRITE setClampVertexColor NOTIFY ClampVertexColorChanged)
signals: void ClampFragmentColorChanged();
public:
signals: void ClampReadColorChanged();
public:
signals: void ClampVertexColorChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClampColor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClampColor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClampColor();
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


#endif //osg_ClampColor_pmocHPP

