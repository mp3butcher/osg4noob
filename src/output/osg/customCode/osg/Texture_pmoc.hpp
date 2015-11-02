#ifndef osg_Texture_customHPP
#define  osg_Texture_customHPP 1

//includes
#include <osg/Texture_pmoc.hpp>
#include <QObject>
#include <osg/Texture>

#include <osg/Texture_pmoc.hpp>
namespace osg{
class  QMLTextureObjectManager: public QReflect_TextureObjectManager
{
Q_OBJECT
public:
QMLTextureObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureObjectManager :public MetaQReflect_TextureObjectManager{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureObjectManager)
#include <osg/Texture_pmoc.hpp>
#include <QObject>
#include <osg/Referenced_pmoc.hpp>
#include <osg/Texture>

#include <osg/Texture_pmoc.hpp>
namespace osg{
class  QMLTextureObjectSet: public QReflect_TextureObjectSet
{
Q_OBJECT
public:
QMLTextureObjectSet(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureObjectSet :public MetaQReflect_TextureObjectSet{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureObjectSet)
#include <osg/Texture_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Vec4d;
			} ;
namespace osg{
class QReflect_Vec4i;
			} ;
namespace osg{
class QReflect_GraphicsContext;
			} ;
#include <osg/GraphicsContext>
#include <osg/GraphicsContext_pmoc.hpp>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Texture>

#include <osg/Vec4d>
#include <osg/Vec4d_pmoc.hpp>
#include <osg/Vec4i>
#include <osg/Vec4i_pmoc.hpp>
#include <osg/Texture_pmoc.hpp>
namespace osg{
class  QMLTexture: public QReflect_Texture
{
Q_OBJECT

 Q_PROPERTY(int textureUnit READ gettextureUnit WRITE settextureUnit NOTIFY textureUnitChanged)
    int _textureUnit;
    public:
      inline int gettextureUnit()const
    {
        /*  */
        return _textureUnit;
    }
    void settextureUnit(int s)
    {
        if(s!=_textureUnit)
        {
            _textureUnit=s;
            emit textureUnitChanged(s);
        }
    }
    signals:
    void textureUnitChanged(int);
    public:
Q_PROPERTY(int InternalFormat  READ getInternalFormat WRITE setInternalFormat NOTIFY InternalFormatChanged)
Q_PROPERTY(unsigned int SourceFormat  READ getSourceFormat WRITE setSourceFormat NOTIFY SourceFormatChanged)
Q_PROPERTY(unsigned int SourceType  READ getSourceType WRITE setSourceType NOTIFY SourceTypeChanged)
public:
QMLTexture(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 Q_INVOKABLE void setInternalFormat( int i){
 if(i!=getInternalFormat()){
 _model->setInternalFormat(i);
 emit InternalFormatChanged(i);
 }
 }
 Q_INVOKABLE int getInternalFormat( ){
 return _model->getInternalFormat();
 }


 Q_INVOKABLE void setSourceFormat( unsigned int i){
 if(i!=getSourceFormat()){
 _model->setSourceFormat(i);
 emit SourceFormatChanged(i);
 }
 }
 Q_INVOKABLE unsigned int getSourceFormat( ){
 return _model->getSourceFormat();
 }
 Q_INVOKABLE void setSourceType( unsigned int i){
 if(i!=getSourceType()){
 _model->setSourceType(i);
 emit SourceTypeChanged(i);
 }
 }
 Q_INVOKABLE unsigned int getSourceType( ){
 return _model->getSourceType();
 }
 signals:
 void InternalFormatChanged(int);
 void SourceFormatChanged(unsigned int);
 void SourceTypeChanged(unsigned int);

};
class   MetaQMLTexture :public MetaQReflect_Texture{};

}
  Q_DECLARE_METATYPE(osg::QMLTexture)

#endif //osg_Texture_customHPP

