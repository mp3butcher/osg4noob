#ifndef osg_VertexProgram_customHPP
#define  osg_VertexProgram_customHPP 1

//includes
#include <osg/VertexProgram_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/VertexProgram>

#include <osg/VertexProgram_pmoc.hpp>
namespace osg{
class  QMLVertexProgram: public QReflect_VertexProgram
{
Q_OBJECT
public:
QMLVertexProgram(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVertexProgram :public MetaQReflect_VertexProgram{};

}
  Q_DECLARE_METATYPE(osg::QMLVertexProgram)

#endif //osg_VertexProgram_customHPP

