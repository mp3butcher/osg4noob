#ifndef osg_TexEnvCombine_pmocHPP
#define  osg_TexEnvCombine_pmocHPP 1


#include <osg/TexEnvCombine_pmoc.hpp>
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
QReflect_TexEnvCombine(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexEnvCombine( );
//TexEnvCombine
// Vec3  getConstantColorAsLightDirection();
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
Q_INVOKABLE  float  getScale_Alpha()const;
Q_INVOKABLE  float  getScale_RGB()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setCombine_Alpha( GLint cm);
Q_INVOKABLE void  setCombine_RGB( GLint cm);
Q_INVOKABLE void  setConstantColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setConstantColorAsLightDirection(osg::QReflect_Vec3f *direction);
Q_INVOKABLE void  setOperand0_Alpha( GLint op);
Q_INVOKABLE void  setOperand0_RGB( GLint op);
Q_INVOKABLE void  setOperand1_Alpha( GLint op);
Q_INVOKABLE void  setOperand1_RGB( GLint op);
Q_INVOKABLE void  setOperand2_Alpha( GLint op);
Q_INVOKABLE void  setOperand2_RGB( GLint op);
Q_INVOKABLE void  setScale_Alpha( float scale);
Q_INVOKABLE void  setScale_RGB( float scale);
Q_INVOKABLE void  setSource0_Alpha( GLint sp);
Q_INVOKABLE void  setSource0_RGB( GLint sp);
Q_INVOKABLE void  setSource1_Alpha( GLint sp);
Q_INVOKABLE void  setSource1_RGB( GLint sp);
Q_INVOKABLE void  setSource2_Alpha( GLint sp);
Q_INVOKABLE void  setSource2_RGB( GLint sp);
Q_PROPERTY(GLint  Combine_Alpha  READ getCombine_Alpha WRITE setCombine_Alpha NOTIFY Combine_AlphaChanged)
Q_PROPERTY(GLint  Combine_RGB  READ getCombine_RGB WRITE setCombine_RGB NOTIFY Combine_RGBChanged)
Q_PROPERTY(GLint  Operand0_Alpha  READ getOperand0_Alpha WRITE setOperand0_Alpha NOTIFY Operand0_AlphaChanged)
Q_PROPERTY(GLint  Operand0_RGB  READ getOperand0_RGB WRITE setOperand0_RGB NOTIFY Operand0_RGBChanged)
Q_PROPERTY(GLint  Operand1_Alpha  READ getOperand1_Alpha WRITE setOperand1_Alpha NOTIFY Operand1_AlphaChanged)
Q_PROPERTY(GLint  Operand1_RGB  READ getOperand1_RGB WRITE setOperand1_RGB NOTIFY Operand1_RGBChanged)
Q_PROPERTY(GLint  Operand2_Alpha  READ getOperand2_Alpha WRITE setOperand2_Alpha NOTIFY Operand2_AlphaChanged)
Q_PROPERTY(GLint  Operand2_RGB  READ getOperand2_RGB WRITE setOperand2_RGB NOTIFY Operand2_RGBChanged)
Q_PROPERTY(GLint  Source0_Alpha  READ getSource0_Alpha WRITE setSource0_Alpha NOTIFY Source0_AlphaChanged)
Q_PROPERTY(GLint  Source0_RGB  READ getSource0_RGB WRITE setSource0_RGB NOTIFY Source0_RGBChanged)
Q_PROPERTY(GLint  Source1_Alpha  READ getSource1_Alpha WRITE setSource1_Alpha NOTIFY Source1_AlphaChanged)
Q_PROPERTY(GLint  Source1_RGB  READ getSource1_RGB WRITE setSource1_RGB NOTIFY Source1_RGBChanged)
Q_PROPERTY(GLint  Source2_Alpha  READ getSource2_Alpha WRITE setSource2_Alpha NOTIFY Source2_AlphaChanged)
Q_PROPERTY(GLint  Source2_RGB  READ getSource2_RGB WRITE setSource2_RGB NOTIFY Source2_RGBChanged)
Q_PROPERTY(float  Scale_Alpha  READ getScale_Alpha WRITE setScale_Alpha NOTIFY Scale_AlphaChanged)
Q_PROPERTY(float  Scale_RGB  READ getScale_RGB WRITE setScale_RGB NOTIFY Scale_RGBChanged)
signals: void Combine_AlphaChanged();
public:
signals: void Combine_RGBChanged();
public:
signals: void Operand0_AlphaChanged();
public:
signals: void Operand0_RGBChanged();
public:
signals: void Operand1_AlphaChanged();
public:
signals: void Operand1_RGBChanged();
public:
signals: void Operand2_AlphaChanged();
public:
signals: void Operand2_RGBChanged();
public:
signals: void Scale_AlphaChanged();
public:
signals: void Scale_RGBChanged();
public:
signals: void Source0_AlphaChanged();
public:
signals: void Source0_RGBChanged();
public:
signals: void Source1_AlphaChanged();
public:
signals: void Source1_RGBChanged();
public:
signals: void Source2_AlphaChanged();
public:
signals: void Source2_RGBChanged();
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


#endif //osg_TexEnvCombine_pmocHPP

