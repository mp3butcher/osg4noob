#ifndef osgParticle_ModularProgram_customHPP
#define  osgParticle_ModularProgram_customHPP 1

//includes


#include <osgParticle/ModularProgram_pmoc.hpp>
#include <QObject>
#include <osgParticle/ModularProgram>

#include <osgParticle/Program_pmoc.hpp>
#include <osgParticle/ModularProgram_pmoc.hpp>
namespace osgParticle{
class  QMLModularProgram: public QReflect_ModularProgram
{
Q_OBJECT
public:
QMLModularProgram(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLModularProgram :public MetaQReflect_ModularProgram{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLModularProgram)


#endif //osgParticle_ModularProgram_customHPP

