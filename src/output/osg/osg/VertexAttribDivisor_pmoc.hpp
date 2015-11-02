#ifndef osg_VertexAttribDivisor_pmocHPP
#define  osg_VertexAttribDivisor_pmocHPP 1
#include <osg/VertexAttribDivisor_pmoc.hpp>
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
#include <osg/VertexAttribDivisor>
#include <osg/VertexAttribDivisor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_VertexAttribDivisor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
VertexAttribDivisor * _model;
QReflect_VertexAttribDivisor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexAttribDivisor( );
//VertexAttribDivisor
//virtual  Type  getType();
//virtual  void  apply( State &);
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const unsigned int  getDivisor()const;
Q_INVOKABLE const unsigned int  getIndex()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void setDivisor(const unsigned int &);
Q_INVOKABLE void setIndex(const unsigned int &);
Q_PROPERTY(unsigned int Divisor  READ getDivisor WRITE setDivisor NOTIFY DivisorChanged)
Q_PROPERTY(unsigned int Index  READ getIndex WRITE setIndex NOTIFY IndexChanged)
signals: void DivisorChanged(const unsigned int&);
public:
signals: void IndexChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_VertexAttribDivisor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::VertexAttribDivisor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_VertexAttribDivisor();
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

#endif //osg_VertexAttribDivisor_pmocHPP

