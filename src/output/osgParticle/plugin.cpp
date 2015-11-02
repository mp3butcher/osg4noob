#include <customCode/osgParticle/AccelOperator_pmoc.hpp>
#include <customCode/osgParticle/AngularAccelOperator_pmoc.hpp>
#include <customCode/osgParticle/AngularDampingOperator_pmoc.hpp>
#include <customCode/osgParticle/BounceOperator_pmoc.hpp>
#include <customCode/osgParticle/BoxPlacer_pmoc.hpp>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
#include <customCode/osgParticle/CompositePlacer_pmoc.hpp>
#include <customCode/osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/ConstantRateCounter_pmoc.hpp>
#include <customCode/osgParticle/Counter_pmoc.hpp>
#include <customCode/osgParticle/DampingOperator_pmoc.hpp>
#include <customCode/osgParticle/DomainOperator_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/ExplosionDebrisEffect_pmoc.hpp>
#include <customCode/osgParticle/ExplosionEffect_pmoc.hpp>
#include <customCode/osgParticle/ExplosionOperator_pmoc.hpp>
#include <customCode/osgParticle/FireEffect_pmoc.hpp>
#include <customCode/osgParticle/FluidFrictionOperator_pmoc.hpp>
#include <customCode/osgParticle/FluidProgram_pmoc.hpp>
#include <customCode/osgParticle/ForceOperator_pmoc.hpp>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
#include <customCode/osgParticle/LinearInterpolator_pmoc.hpp>
#include <customCode/osgParticle/ModularEmitter_pmoc.hpp>
#include <customCode/osgParticle/ModularProgram_pmoc.hpp>
#include <customCode/osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osgParticle/OrbitOperator_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
#include <customCode/osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osgParticle/PointPlacer_pmoc.hpp>
#include <customCode/osgParticle/PrecipitationEffect_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
#include <customCode/osgParticle/RadialShooter_pmoc.hpp>
#include <customCode/osgParticle/RandomRateCounter_pmoc.hpp>
#include <customCode/osgParticle/SectorPlacer_pmoc.hpp>
#include <customCode/osgParticle/SegmentPlacer_pmoc.hpp>
#include <customCode/osgParticle/Shooter_pmoc.hpp>
#include <customCode/osgParticle/SinkOperator_pmoc.hpp>
#include <customCode/osgParticle/SmokeEffect_pmoc.hpp>
#include <customCode/osgParticle/SmokeTrailEffect_pmoc.hpp>
#include <customCode/osgParticle/VariableRateCounter_pmoc.hpp>
#include "MetaQQuickLibraryRegistry.h"
//#include <pmoc.blackboard.hpp>
#include "plugin.h"
using namespace pmoc;
REGISTER_METAQQUICKLIBRARY(osgParticle_QMLLibrary);
 osgParticle_QMLLibrary::osgParticle_QMLLibrary():MetaQQuickLibrary("osgParticle"){
_components.insert( new osgParticle::MetaQMLAccelOperator()); 
_components.insert( new osgParticle::MetaQMLAngularAccelOperator()); 
_components.insert( new osgParticle::MetaQMLAngularDampingOperator()); 
_components.insert( new osgParticle::MetaQMLBounceOperator()); 
_components.insert( new osgParticle::MetaQMLBoxPlacer()); 
_components.insert( new osgParticle::MetaQMLCenteredPlacer()); 
_components.insert( new osgParticle::MetaQMLCompositePlacer()); 
_components.insert( new osgParticle::MetaQMLConnectedParticleSystem()); 
_components.insert( new osgParticle::MetaQMLConstantRateCounter()); 
_components.insert( new osgParticle::MetaQMLCounter()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLDampingOperator()); 
_components.insert( new osgParticle::MetaQMLDomainOperator()); 
_components.insert( new osgParticle::MetaQMLEmitter()); 
_components.insert( new osgParticle::MetaQMLExplosionDebrisEffect()); 
_components.insert( new osgParticle::MetaQMLExplosionEffect()); 
_components.insert( new osgParticle::MetaQMLExplosionOperator()); 
_components.insert( new osgParticle::MetaQMLFireEffect()); 
_components.insert( new osgParticle::MetaQMLFluidFrictionOperator()); 
_components.insert( new osgParticle::MetaQMLFluidProgram()); 
_components.insert( new osgParticle::MetaQMLForceOperator()); 
_components.insert( new osgParticle::MetaQMLInterpolator()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLLinearInterpolator()); 
_components.insert( new osgParticle::MetaQMLModularEmitter()); 
_components.insert( new osgParticle::MetaQMLModularProgram()); 
_components.insert( new osgParticle::MetaQMLMultiSegmentPlacer()); 
_components.insert( new osgParticle::MetaQMLOperator()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLOrbitOperator()); 
_components.insert( new osgParticle::MetaQMLParticle()); 
_components.insert( new osgParticle::MetaQMLParticleEffect()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLParticleProcessor()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLParticleSystem()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLParticleSystemUpdater()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLPlacer()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLPointPlacer()); 
_components.insert( new osgParticle::MetaQMLPrecipitationEffect()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLProgram()); 
_components.insert( new osgParticle::MetaQMLRadialShooter()); 
_components.insert( new osgParticle::MetaQMLRandomRateCounter()); 
_components.insert( new osgParticle::MetaQMLSectorPlacer()); 
_components.insert( new osgParticle::MetaQMLSegmentPlacer()); 
_components.insert( new osgParticle::MetaQMLShooter()); 
addDependency("osg");
_components.insert( new osgParticle::MetaQMLSinkOperator()); 
_components.insert( new osgParticle::MetaQMLSmokeEffect()); 
_components.insert( new osgParticle::MetaQMLSmokeTrailEffect()); 
_components.insert( new osgParticle::MetaQMLVariableRateCounter()); 

}
osgParticle_QMLLibrary::~osgParticle_QMLLibrary(){}
	///setup metaclass children and parents (require dependancies to be loaded)
 void osgParticle_QMLLibrary::setupRelations() {MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::AccelOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::AngularAccelOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::AngularDampingOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::BounceOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::DomainOperator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::BoxPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::CenteredPlacer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::CenteredPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Placer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::CompositePlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Placer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ConnectedParticleSystem")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleSystem")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ConstantRateCounter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Counter")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Counter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::DampingOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::DomainOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Emitter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleProcessor")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ExplosionDebrisEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ExplosionEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ExplosionOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::FireEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::FluidFrictionOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::FluidProgram")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Program")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ForceOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Interpolator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::LinearInterpolator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Interpolator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ModularEmitter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Emitter")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ModularProgram")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Program")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::MultiSegmentPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Placer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::OrbitOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Operator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Group")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleProcessor")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Node")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleSystem")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Drawable")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleSystemUpdater")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Node")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Placer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::PointPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::CenteredPlacer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::PrecipitationEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Node")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Program")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleProcessor")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::RadialShooter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Shooter")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::RandomRateCounter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::VariableRateCounter")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::SectorPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::CenteredPlacer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::SegmentPlacer")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Placer")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Shooter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osg::Object")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::SinkOperator")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::DomainOperator")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::SmokeEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::SmokeTrailEffect")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::ParticleEffect")); 
MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::VariableRateCounter")->addParent(MetaQQuickLibraryRegistry::instance()->getMetaClassByID("osgParticle::Counter")); 
}
 