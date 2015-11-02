#ifndef osg_GLU_pmocHPP
#define  osg_GLU_pmocHPP 1
#include <osg/GLU_pmoc.hpp>
#include <QObject>
#include <osg/GLU>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PixelStorageModes: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
struct PixelStorageModes * _model;
QReflect_PixelStorageModes(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PixelStorageModes( );
//PixelStorageModes
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PixelStorageModes: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_PixelStorageModes();
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

#endif //osg_GLU_pmocHPP

