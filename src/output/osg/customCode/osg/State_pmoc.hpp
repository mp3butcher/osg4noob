#ifndef osg_State_customHPP
#define  osg_State_customHPP 1

//includes
#include <osg/State_pmoc.hpp>
#include <QObject>
#include <osg/State>

#include <osg/State_pmoc.hpp>
namespace osg{
class  QMLVertexAttribAlias: public QReflect_VertexAttribAlias
{
Q_OBJECT
public:
QMLVertexAttribAlias(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVertexAttribAlias :public MetaQReflect_VertexAttribAlias{};

}
  Q_DECLARE_METATYPE(osg::QMLVertexAttribAlias)
#include <osg/State_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_StateAttribute;
			} ;
namespace osg{
class QReflect_ShaderComposer;
			} ;
namespace osg{
class QReflect_DisplaySettings;
			} ;
namespace osg{
class QReflect_FrameStamp;
			} ;
namespace osg{
class QReflect_GLBufferObject;
			} ;
namespace osg{
	} ;
namespace osg{
class QReflect_GraphicsContext;
			} ;
namespace osg{
class QReflect_VertexAttribAlias;
			} ;
namespace osg{
class QReflect_GraphicsCostEstimator;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/DisplaySettings>
#include <osg/DisplaySettings_pmoc.hpp>
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <osg/Program>
#include <osg/Program_pmoc.hpp>
#include <osg/Referenced_pmoc.hpp>
#include <osg/ShaderComposer>
#include <osg/ShaderComposer_pmoc.hpp>
#include <osg/State>
#include <osg/State>

#include <osg/StateAttribute>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/State_pmoc.hpp>
#include <osg/State_pmoc.hpp>
namespace osg{
class  QMLState: public QReflect_State
{
Q_OBJECT
public:
QMLState(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLState :public MetaQReflect_State{};

}
  Q_DECLARE_METATYPE(osg::QMLState)

#endif //osg_State_customHPP

