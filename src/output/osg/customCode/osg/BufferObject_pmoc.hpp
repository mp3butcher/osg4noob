#ifndef osg_BufferObject_customHPP
#define  osg_BufferObject_customHPP 1

//includes
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLGLBufferObjectManager: public QReflect_GLBufferObjectManager
{
Q_OBJECT
public:
QMLGLBufferObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLBufferObjectManager :public MetaQReflect_GLBufferObjectManager{};

}
  Q_DECLARE_METATYPE(osg::QMLGLBufferObjectManager)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/Object_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLBufferObject: public QReflect_BufferObject
{
Q_OBJECT
public:
QMLBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBufferObject :public MetaQReflect_BufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLAtomicCounterBufferObject: public QReflect_AtomicCounterBufferObject
{
Q_OBJECT
public:
QMLAtomicCounterBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAtomicCounterBufferObject :public MetaQReflect_AtomicCounterBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLAtomicCounterBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLVertexBufferObject: public QReflect_VertexBufferObject
{
Q_OBJECT
public:
QMLVertexBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVertexBufferObject :public MetaQReflect_VertexBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLVertexBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLShaderStorageBufferObject: public QReflect_ShaderStorageBufferObject
{
Q_OBJECT
public:
QMLShaderStorageBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShaderStorageBufferObject :public MetaQReflect_ShaderStorageBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLShaderStorageBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Image;
			} ;
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLPixelBufferObject: public QReflect_PixelBufferObject
{
Q_OBJECT
public:
QMLPixelBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPixelBufferObject :public MetaQReflect_PixelBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLPixelBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/Referenced_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLGLBufferObjectSet: public QReflect_GLBufferObjectSet
{
Q_OBJECT
public:
QMLGLBufferObjectSet(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLBufferObjectSet :public MetaQReflect_GLBufferObjectSet{};

}
  Q_DECLARE_METATYPE(osg::QMLGLBufferObjectSet)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLElementBufferObject: public QReflect_ElementBufferObject
{
Q_OBJECT
public:
QMLElementBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLElementBufferObject :public MetaQReflect_ElementBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLElementBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLBufferObjectProfile: public QReflect_BufferObjectProfile
{
Q_OBJECT
public:
QMLBufferObjectProfile(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBufferObjectProfile :public MetaQReflect_BufferObjectProfile{};

}
  Q_DECLARE_METATYPE(osg::QMLBufferObjectProfile)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLUniformBufferObject: public QReflect_UniformBufferObject
{
Q_OBJECT
public:
QMLUniformBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLUniformBufferObject :public MetaQReflect_UniformBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLUniformBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLPixelDataBufferObject: public QReflect_PixelDataBufferObject
{
Q_OBJECT
public:
QMLPixelDataBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPixelDataBufferObject :public MetaQReflect_PixelDataBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLPixelDataBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_BufferObject;
			} ;
namespace osg{
class QReflect_BufferObjectProfile;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLGLBufferObject: public QReflect_GLBufferObject
{
Q_OBJECT
public:
QMLGLBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLBufferObject :public MetaQReflect_GLBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLGLBufferObject)
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>

#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_BufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/BufferObject_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/BufferObject_pmoc.hpp>
namespace osg{
class  QMLBufferData: public QReflect_BufferData
{
Q_OBJECT
public:
QMLBufferData(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBufferData :public MetaQReflect_BufferData{};

}
  Q_DECLARE_METATYPE(osg::QMLBufferData)

#endif //osg_BufferObject_customHPP

