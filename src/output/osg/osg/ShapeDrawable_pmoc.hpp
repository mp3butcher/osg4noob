#ifndef osg_ShapeDrawable_pmocHPP
#define  osg_ShapeDrawable_pmocHPP 1


#include <osg/ShapeDrawable_pmoc.hpp>
#include <QObject>
#include <osg/ShapeDrawable>
#include <osg/ShapeDrawable>

#include <osg/ref_ptr>
#include<osg/ShapeDrawable_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TessellationHints: public pmoc::QQModel
{
Q_OBJECT
public:
 enum TessellationMode{
USE_SHAPE_DEFAULTS =TessellationHints::USE_SHAPE_DEFAULTS,
USE_TARGET_NUM_FACES =TessellationHints::USE_TARGET_NUM_FACES};
  Q_ENUMS(TessellationMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TessellationHints * _model;
QReflect_TessellationHints(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TessellationHints( );
//TessellationHints
Q_INVOKABLE  bool  getCreateBackFace()const;
Q_INVOKABLE  bool  getCreateBody()const;
Q_INVOKABLE  bool  getCreateBottom()const;
Q_INVOKABLE  bool  getCreateFrontFace()const;
Q_INVOKABLE  bool  getCreateNormals()const;
Q_INVOKABLE  bool  getCreateTextureCoords()const;
Q_INVOKABLE  bool  getCreateTop()const;
Q_INVOKABLE  float  getDetailRatio()const;
Q_INVOKABLE  unsigned int  getTargetNumFaces()const;
Q_INVOKABLE osg::QReflect_TessellationHints::TessellationMode  getTessellationMode()const;
Q_INVOKABLE void  setCreateBackFace( bool on);
Q_INVOKABLE void  setCreateBody( bool on);
Q_INVOKABLE void  setCreateBottom( bool on);
Q_INVOKABLE void  setCreateFrontFace( bool on);
Q_INVOKABLE void  setCreateNormals( bool on);
Q_INVOKABLE void  setCreateTextureCoords( bool on);
Q_INVOKABLE void  setCreateTop( bool on);
Q_INVOKABLE void  setDetailRatio( float ratio);
Q_INVOKABLE void  setTargetNumFaces( unsigned int target);
Q_INVOKABLE void  setTessellationMode(osg::QReflect_TessellationHints::TessellationMode mode);
Q_PROPERTY(bool  CreateBackFace  READ getCreateBackFace WRITE setCreateBackFace NOTIFY CreateBackFaceChanged)
Q_PROPERTY(bool  CreateBody  READ getCreateBody WRITE setCreateBody NOTIFY CreateBodyChanged)
Q_PROPERTY(bool  CreateBottom  READ getCreateBottom WRITE setCreateBottom NOTIFY CreateBottomChanged)
Q_PROPERTY(bool  CreateFrontFace  READ getCreateFrontFace WRITE setCreateFrontFace NOTIFY CreateFrontFaceChanged)
Q_PROPERTY(bool  CreateNormals  READ getCreateNormals WRITE setCreateNormals NOTIFY CreateNormalsChanged)
Q_PROPERTY(bool  CreateTextureCoords  READ getCreateTextureCoords WRITE setCreateTextureCoords NOTIFY CreateTextureCoordsChanged)
Q_PROPERTY(bool  CreateTop  READ getCreateTop WRITE setCreateTop NOTIFY CreateTopChanged)
Q_PROPERTY(float  DetailRatio  READ getDetailRatio WRITE setDetailRatio NOTIFY DetailRatioChanged)
Q_PROPERTY(osg::QReflect_TessellationHints::TessellationMode  TessellationMode  READ getTessellationMode WRITE setTessellationMode NOTIFY TessellationModeChanged)
Q_PROPERTY(unsigned int  TargetNumFaces  READ getTargetNumFaces WRITE setTargetNumFaces NOTIFY TargetNumFacesChanged)
signals: void CreateBackFaceChanged();
public:
signals: void CreateBodyChanged();
public:
signals: void CreateBottomChanged();
public:
signals: void CreateFrontFaceChanged();
public:
signals: void CreateNormalsChanged();
public:
signals: void CreateTextureCoordsChanged();
public:
signals: void CreateTopChanged();
public:
signals: void DetailRatioChanged();
public:
signals: void TargetNumFacesChanged();
public:
signals: void TessellationModeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TessellationHints: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TessellationHints> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TessellationHints();
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
#include <osg/ShapeDrawable_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
namespace osg{ 
class QReflect_TessellationHints;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
#include <osg/ShapeDrawable>
#include <osg/ShapeDrawable>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShapeDrawable: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShapeDrawable * _model;
QReflect_ShapeDrawable(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShapeDrawable( );
//ShapeDrawable
//virtual  BoundingBox  computeBoundingBox();
//virtual  bool  supports(const  AttributeFunctor &);
//virtual  bool  supports(const  Drawable::ConstAttributeFunctor &);
//virtual  void  accept( Drawable::ConstAttributeFunctor &);
//const  Vec4 & getColor();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_TessellationHints*  getTessellationHints();
Q_INVOKABLE osg::QReflect_TessellationHints*  getTessellationHints()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *pf)const;
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setTessellationHints(osg::QReflect_TessellationHints *hints);
Q_PROPERTY(osg::QReflect_TessellationHints * TessellationHints  READ getTessellationHints WRITE setTessellationHints NOTIFY TessellationHintsChanged)
signals: void TessellationHintsChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShapeDrawable: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShapeDrawable> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShapeDrawable();
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


#endif //osg_ShapeDrawable_pmocHPP

