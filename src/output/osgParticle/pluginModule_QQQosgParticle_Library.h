#ifndef GLOBAL_CPP_CONTEXT_pluginModule_QQQosgParticle_LibraryH
#define GLOBAL_CPP_CONTEXT_pluginModule_QQQosgParticle_LibraryH 

 #include <list> 
#include <map>
#include <MetaQQuickLibrary.h>
#include <memory>
#include <osgParticle/AccelOperator>
#include <osgParticle/AngularAccelOperator>
#include <osgParticle/AngularDampingOperator>
#include <osgParticle/BounceOperator>
#include <osgParticle/BoxPlacer>
#include <osgParticle/CenteredPlacer>
#include <osgParticle/CompositePlacer>
#include <osgParticle/ConnectedParticleSystem>
#include <osgParticle/ConstantRateCounter>
#include <osgParticle/Counter>
#include <osgParticle/DampingOperator>
#include <osgParticle/DomainOperator>
#include <osgParticle/Emitter>
#include <osgParticle/ExplosionDebrisEffect>
#include <osgParticle/ExplosionEffect>
#include <osgParticle/ExplosionOperator>
#include <osgParticle/Export>
#include <osgParticle/FireEffect>
#include <osgParticle/FluidFrictionOperator>
#include <osgParticle/FluidProgram>
#include <osgParticle/ForceOperator>
#include <osgParticle/Interpolator>
#include <osgParticle/LinearInterpolator>
#include <osgParticle/ModularEmitter>
#include <osgParticle/ModularProgram>
#include <osgParticle/MultiSegmentPlacer>
#include <osgParticle/Operator>
#include <osgParticle/OrbitOperator>
#include <osgParticle/Particle>
#include <osgParticle/ParticleEffect>
#include <osgParticle/ParticleProcessor>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystemUpdater>
#include <osgParticle/Placer>
#include <osgParticle/PointPlacer>
#include <osgParticle/PrecipitationEffect>
#include <osgParticle/Program>
#include <osgParticle/RadialShooter>
#include <osgParticle/RandomRateCounter>
#include <osgParticle/SectorPlacer>
#include <osgParticle/SegmentPlacer>
#include <osgParticle/Shooter>
#include <osgParticle/SinkOperator>
#include <osgParticle/SmokeEffect>
#include <osgParticle/SmokeTrailEffect>
#include <osgParticle/VariableRateCounter>
#include <osgParticle/Version>
#include <osgParticle/range>
#include <osg/ref_ptr>


namespace pmoc{
	class pluginModule_QQQosgParticle_Library_QMLLibrary: public MetaQQuickLibrary{
	private:
 public:
 //virtual Instance createClassInstance(const std::string&);
	///TODO all products of the factory (hierarchyleafs)
		//osg::Group * managedPointer_osg_Group;
		//osg::MatrixTransform * managed_osg_Matrix;
	public:
///Add  object whose lifecycle is not managed by the context	 
//carefull to the crash if you operate them after you delete
//perhaps a type_info could be bettet
//void addObject(osg::Node*n){ Instance o((void*)n, getClassByID("osg::Node"), false); if (o.model != 0){ managedobjects.push_back(o); objectrecord[o.MetaClass].push_back(&managedobjects.back()) } else{ cerr << "osg.Node class not managed" << endl; } }
//...etc..
pluginModule_QQQosgParticle_Library_QMLLibrary();
~pluginModule_QQQosgParticle_Library_QMLLibrary();
	///setup metaclass children and parents (require dependancies to be loaded)
virtual void setupRelations() ;
 };
		 
}
#endif

