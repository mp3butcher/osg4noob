#ifndef osg_TexMat_pmocHPP
#define  osg_TexMat_pmocHPP 1


#include <osg/TexMat_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/TexMat>
#include <osg/TexMat>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexMat: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexMat * _model;
QReflect_TexMat(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexMat( );
//TexMat
// Matrix & getMatrix();
//const  Matrix & getMatrix();
Q_INVOKABLE  bool  getScaleByTextureRectangleSize()const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setMatrix(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setScaleByTextureRectangleSize( bool flag);
Q_PROPERTY(bool  ScaleByTextureRectangleSize  READ getScaleByTextureRectangleSize WRITE setScaleByTextureRectangleSize NOTIFY ScaleByTextureRectangleSizeChanged)
signals: void ScaleByTextureRectangleSizeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexMat: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexMat> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexMat();
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


#endif //osg_TexMat_pmocHPP

