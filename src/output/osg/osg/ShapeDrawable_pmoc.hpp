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
QReflect_TessellationHints(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TessellationHints( );
//TessellationHints
Q_INVOKABLE const bool  getCreateBackFace()const;
Q_INVOKABLE const bool  getCreateBody()const;
Q_INVOKABLE const bool  getCreateBottom()const;
Q_INVOKABLE const bool  getCreateFrontFace()const;
Q_INVOKABLE const bool  getCreateNormals()const;
Q_INVOKABLE const bool  getCreateTextureCoords()const;
Q_INVOKABLE const bool  getCreateTop()const;
Q_INVOKABLE const float  getDetailRatio()const;
Q_INVOKABLE const unsigned int  getTargetNumFaces()const;
Q_INVOKABLE osg::QReflect_TessellationHints::TessellationMode  getTessellationMode()const;
Q_INVOKABLE void  setTessellationMode(osg::QReflect_TessellationHints::TessellationMode );
Q_INVOKABLE void setCreateBackFace(const bool &);
Q_INVOKABLE void setCreateBody(const bool &);
Q_INVOKABLE void setCreateBottom(const bool &);
Q_INVOKABLE void setCreateFrontFace(const bool &);
Q_INVOKABLE void setCreateNormals(const bool &);
Q_INVOKABLE void setCreateTextureCoords(const bool &);
Q_INVOKABLE void setCreateTop(const bool &);
Q_INVOKABLE void setDetailRatio(const float &);
Q_INVOKABLE void setTargetNumFaces(const unsigned int &);
Q_PROPERTY(bool CreateBackFace  READ getCreateBackFace WRITE setCreateBackFace NOTIFY CreateBackFaceChanged)
Q_PROPERTY(bool CreateBody  READ getCreateBody WRITE setCreateBody NOTIFY CreateBodyChanged)
Q_PROPERTY(bool CreateBottom  READ getCreateBottom WRITE setCreateBottom NOTIFY CreateBottomChanged)
Q_PROPERTY(bool CreateFrontFace  READ getCreateFrontFace WRITE setCreateFrontFace NOTIFY CreateFrontFaceChanged)
Q_PROPERTY(bool CreateNormals  READ getCreateNormals WRITE setCreateNormals NOTIFY CreateNormalsChanged)
Q_PROPERTY(bool CreateTextureCoords  READ getCreateTextureCoords WRITE setCreateTextureCoords NOTIFY CreateTextureCoordsChanged)
Q_PROPERTY(bool CreateTop  READ getCreateTop WRITE setCreateTop NOTIFY CreateTopChanged)
Q_PROPERTY(float DetailRatio  READ getDetailRatio WRITE setDetailRatio NOTIFY DetailRatioChanged)
Q_PROPERTY(unsigned int TargetNumFaces  READ getTargetNumFaces WRITE setTargetNumFaces NOTIFY TargetNumFacesChanged)
signals: void CreateBackFaceChanged(const bool&);
public:
signals: void CreateBodyChanged(const bool&);
public:
signals: void CreateBottomChanged(const bool&);
public:
signals: void CreateFrontFaceChanged(const bool&);
public:
signals: void CreateNormalsChanged(const bool&);
public:
signals: void CreateTextureCoordsChanged(const bool&);
public:
signals: void CreateTopChanged(const bool&);
public:
signals: void DetailRatioChanged(const float&);
public:
signals: void TargetNumFacesChanged(const unsigned int&);
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
#include <osg/ShapeDrawable_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_TessellationHints;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
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
QReflect_ShapeDrawable(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShapeDrawable( );
//ShapeDrawable
//virtual  BoundingBox  computeBoundingBox();
//virtual  bool  supports(const  AttributeFunctor &);
//virtual  bool  supports(const  Drawable::ConstAttributeFunctor &);
//virtual  void  accept( Drawable::ConstAttributeFunctor &);
//const  Vec4 & getColor();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE  osg::QReflect_TessellationHints * getTessellationHints()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void pmoc_reverse_setTessellationHints( osg::QReflect_TessellationHints *par=0);
Q_INVOKABLE void setTessellationHints( osg::QReflect_TessellationHints *par);
signals: void TessellationHintsChanged(const osg::QReflect_TessellationHints*);
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

#endif //osg_ShapeDrawable_pmocHPP

