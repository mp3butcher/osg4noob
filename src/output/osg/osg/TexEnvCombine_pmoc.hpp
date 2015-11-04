#ifndef osg_TexEnvCombine_pmocHPP
#define  osg_TexEnvCombine_pmocHPP 1
#include <osg/TexEnvCombine_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/TexEnvCombine>
#include <osg/TexEnvCombine>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexEnvCombine: public pmoc::QQModel
{
Q_OBJECT
public:
 enum CombineParam{
REPLACE =TexEnvCombine::REPLACE,
MODULATE =TexEnvCombine::MODULATE,
ADD =TexEnvCombine::ADD,
ADD_SIGNED =TexEnvCombine::ADD_SIGNED,
INTERPOLATE =TexEnvCombine::INTERPOLATE,
SUBTRACT =TexEnvCombine::SUBTRACT,
DOT3_RGB =TexEnvCombine::DOT3_RGB,
DOT3_RGBA =TexEnvCombine::DOT3_RGBA};
  Q_ENUMS(CombineParam)
private:
public:
 enum OperandParam{
SRC_COLOR =TexEnvCombine::SRC_COLOR,
ONE_MINUS_SRC_COLOR =TexEnvCombine::ONE_MINUS_SRC_COLOR,
SRC_ALPHA =TexEnvCombine::SRC_ALPHA,
ONE_MINUS_SRC_ALPHA =TexEnvCombine::ONE_MINUS_SRC_ALPHA};
  Q_ENUMS(OperandParam)
private:
public:
 enum SourceParam{
CONSTANT =TexEnvCombine::CONSTANT,
PRIMARY_COLOR =TexEnvCombine::PRIMARY_COLOR,
PREVIOUS =TexEnvCombine::PREVIOUS,
TEXTURE =TexEnvCombine::TEXTURE,
TEXTURE0 =TexEnvCombine::TEXTURE0,
TEXTURE1 =TexEnvCombine::TEXTURE1,
TEXTURE2 =TexEnvCombine::TEXTURE2,
TEXTURE3 =TexEnvCombine::TEXTURE3,
TEXTURE4 =TexEnvCombine::TEXTURE4,
TEXTURE5 =TexEnvCombine::TEXTURE5,
TEXTURE6 =TexEnvCombine::TEXTURE6,
TEXTURE7 =TexEnvCombine::TEXTURE7};
  Q_ENUMS(SourceParam)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexEnvCombine * _model;
QReflect_TexEnvCombine(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexEnvCombine( );
//TexEnvCombine
// Vec3  getConstantColorAsLightDirection();
//virtual  void  apply( State &);
//const  Vec4 & getConstantColor();
Q_INVOKABLE  GLint  getCombine_Alpha()const;
Q_INVOKABLE  GLint  getCombine_RGB()const;
Q_INVOKABLE  GLint  getOperand0_Alpha()const;
Q_INVOKABLE  GLint  getOperand0_RGB()const;
Q_INVOKABLE  GLint  getOperand1_Alpha()const;
Q_INVOKABLE  GLint  getOperand1_RGB()const;
Q_INVOKABLE  GLint  getOperand2_Alpha()const;
Q_INVOKABLE  GLint  getOperand2_RGB()const;
Q_INVOKABLE  GLint  getSource0_Alpha()const;
Q_INVOKABLE  GLint  getSource0_RGB()const;
Q_INVOKABLE  GLint  getSource1_Alpha()const;
Q_INVOKABLE  GLint  getSource1_RGB()const;
Q_INVOKABLE  GLint  getSource2_Alpha()const;
Q_INVOKABLE  GLint  getSource2_RGB()const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const float  getScale_Alpha()const;
Q_INVOKABLE const float  getScale_RGB()const;
Q_INVOKABLE void  setCombine_Alpha( GLint );
Q_INVOKABLE void  setCombine_RGB( GLint );
Q_INVOKABLE void  setConstantColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setConstantColorAsLightDirection(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setOperand0_Alpha( GLint );
Q_INVOKABLE void  setOperand0_RGB( GLint );
Q_INVOKABLE void  setOperand1_Alpha( GLint );
Q_INVOKABLE void  setOperand1_RGB( GLint );
Q_INVOKABLE void  setOperand2_Alpha( GLint );
Q_INVOKABLE void  setOperand2_RGB( GLint );
Q_INVOKABLE void  setSource0_Alpha( GLint );
Q_INVOKABLE void  setSource0_RGB( GLint );
Q_INVOKABLE void  setSource1_Alpha( GLint );
Q_INVOKABLE void  setSource1_RGB( GLint );
Q_INVOKABLE void  setSource2_Alpha( GLint );
Q_INVOKABLE void  setSource2_RGB( GLint );
Q_INVOKABLE void setScale_Alpha(const float &);
Q_INVOKABLE void setScale_RGB(const float &);
Q_PROPERTY(float Scale_Alpha  READ getScale_Alpha WRITE setScale_Alpha NOTIFY Scale_AlphaChanged)
Q_PROPERTY(float Scale_RGB  READ getScale_RGB WRITE setScale_RGB NOTIFY Scale_RGBChanged)
signals: void Scale_AlphaChanged(const float&);
public:
signals: void Scale_RGBChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexEnvCombine: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexEnvCombine> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexEnvCombine();
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

#endif //osg_TexEnvCombine_pmocHPP

