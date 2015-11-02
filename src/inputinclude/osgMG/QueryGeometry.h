#ifndef MYOCCLUSIONQUERYGEOM
#define MYOCCLUSIONQUERYGEOM

#include "Export.h"
#include <osg/OcclusionQueryNode>
#include <OpenThreads/ScopedLock>
#include <osg/Timer>
#include <osg/Notify>
#include <osg/CopyOp>
#include <osg/Vec3>
#include <osg/MatrixTransform>
#include <osg/Group>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/Referenced>
#include <osg/ComputeBoundsVisitor>
#include <osg/StateSet>
#include <osg/StateAttribute>
#include <osg/PolygonMode>
#include <osg/ColorMask>
#include <osg/PolygonOffset>
#include <osg/Depth>
#include <map>
#include <vector>

#include <OpenThreads/Thread>
#include "FIMPass.h"



//#include "..\EveLifeOSteerRBodyDLL.h"


// TestResult -- stores (per context) results of an occlusion query
//   test performed by QueryGeometry. An OcclusionQueryNode has a
//   Geode owning a single QueryGeometry that
//   draws the occlusion query geometry. QueryGeometry keeps a
//   TestResult per context to store the result/status of each query.
// Accessed during the cull and draw traversals.
class OSGMULTIGRID_EXPORT  TestResult : public osg::Referenced
{
public:
	TestResult() : _init( false ), _id( 0 ), _contextID( 0 ), _active( false ), _numPixels( 0 ) {}
	~TestResult() {}

	bool _init;

	// Query ID for this context.
	GLuint _id;

	// Context ID owning this query ID.
	unsigned int _contextID;

	std::list<unsigned int>::iterator _index;

	// Set to true when a query gets issued and set to
	//   false when the result is retrieved.
	mutable bool _active;

	// Result of last query.
	GLuint _numPixels;
};


// QueryGeometry -- A Drawable that performs an occlusion query,
//   using its geometric data as the query geometry.
typedef struct query{
GLuint id;
	GLint ready;
	unsigned int result;
}Query;



typedef struct tResult{
	Query  q;
	unsigned int idx;
	unsigned int idy;
	std::list<std::pair<unsigned int,unsigned int> >::iterator iter;
}testResult;



//The drawer to GPU
class OSGMULTIGRID_EXPORT  QueryGeometry ;


//The controller CPU
class OSGMULTIGRID_EXPORT QueryGeometryController{
public:
	QueryGeometryController(){_ext=0;};
	QueryGeometryController(QueryGeometry*g){
		_ext=0;
		setGeometry(g);};

	void setGeometry(QueryGeometry*g){_managed=g;};

	void setDone(bool b){_isDone=b;}

	bool isDone(){return _isDone;}

	virtual testResult *getQuery(){return &res;}

	osg::GLExtensions* getExtension(){return _ext;};

	void setExtension(osg::GLExtensions* ext){
		_ext=ext;
	}

protected:
	bool _isDone;
	testResult res;
	QueryGeometry * _managed;
	osg::GLExtensions* _ext;
};


class OSGMULTIGRID_EXPORT loopGeometry : public osg::Geometry{
protected:
//	osg::StateSet * norm,reverse;
	unsigned int _nbblindpass;
public:
	loopGeometry(unsigned int nbblindpass): osg::Geometry(){
		_nbblindpass=nbblindpass;

	}
	void setOutputTexture(osg::Texture * tex){
	
	}
virtual void drawImplementation( osg::RenderInfo& renderInfo ) const;


};


//The drawer to GPU
class OSGMULTIGRID_EXPORT  QueryGeometry : public loopGeometry
{protected:
//The controller CPU
QueryGeometryController * _master;

bool _first;

public:
	QueryGeometry(unsigned int nbblindpass);
	~QueryGeometry();

	void reset();

	// TBD implement copy constructor
	virtual void drawImplementation( osg::RenderInfo& renderInfo ) const;

	unsigned int getNumPixels( const osg::Camera* cam );


	void releaseGLObjects( osg::State* state = 0 );
	static void deleteQueryObject( unsigned int contextID, GLuint handle );
	static void flushDeletedQueryObjects( unsigned int contextID, double currentTime, double& availableTime );
	static void discardDeletedQueryObjects( unsigned int contextID );

	void addGeometry(osg::ref_ptr<osg::Geometry> g,int i ,int j){_composites[i][j]=(g);}

	//draw inlist and out outmapwith occrequest given ext and contextid
	void drawocclusiontest(std::list<unsigned int>&inlist,std::list<TestResult*> &outmap,osg::GLExtensions* ext,osg::RenderInfo& renderInfo )const;

	//composites geometry (tesselated geoms)
	osg::ref_ptr<osg::Geometry> ** _composites;

	//typedef std::map< const osg::Camera*, TestResult > ResultMap;
	typedef std::vector< TestResult > ResultMap;
	;
	mutable OpenThreads::Mutex _mapMutex;

	// Needed for debug only
	std::string _oqnName;
protected:



};


//Regular grid mapped render surface controlled by a list
///Dont work for GPU Tesselate geometry

class OSGMULTIGRID_EXPORT ComposedQueryGeometryController : public QueryGeometryController {
protected:
	std::list< std::pair< unsigned int ,unsigned int> > _actives; 
	testResult** mapresult;
	
public:

	ComposedQueryGeometryController(QueryGeometry*h):QueryGeometryController(h){};

	ComposedQueryGeometryController(QueryGeometry* k,unsigned int w,unsigned int h):QueryGeometryController(k){
		
		setupQueries(w,h);
	};


	void setupQueries(int w,int h){
		mapresult=new testResult *[w];
		for(int i = 0; i<w; i++)mapresult[i]=new testResult[h];
	};


	std::list< std::pair< unsigned int ,unsigned int> > & getActives(){return _actives;}


	void addActive(int i,int j){
		_actives.push_back(std::pair<unsigned int ,unsigned int>(i,j));
	};

	testResult * getQuery(unsigned int i ,unsigned int j){
		return &mapresult[i][j];
	}





};

//The drawer to GPU
class OSGMULTIGRID_EXPORT  ComposedQueryGeometry : public QueryGeometry
{
	osg::ref_ptr<osg::Geometry> ** _map; //
	unsigned int _width,_height;
public:
	ComposedQueryGeometry( unsigned int nbbliiind,unsigned int w,unsigned int h);

	void initGeometry(float xmin,float xmax,float ymin, float ymax);

	void setMemory( unsigned int w,unsigned int h){
		_width=w;
		_height=h;
		int * p=new int [4];
		_map = new osg::ref_ptr<osg::Geometry> * [_width];
		//[w];
		for(int i = 0; i<w; i++) _map[i]=new osg::ref_ptr<osg::Geometry>[h];
	};

public:
	ComposedQueryGeometry(unsigned int f):QueryGeometry(f){};

	~ComposedQueryGeometry(){};

	void reset();

	// TBD implement copy constructor
	virtual void drawImplementation( osg::RenderInfo& renderInfo ) const;

	unsigned int getNumPixels( const osg::Camera* cam );

	void releaseGLObjects( osg::State* state = 0 );

	static void deleteQueryObject( unsigned int contextID, GLuint handle );

	static void flushDeletedQueryObjects( unsigned int contextID, double currentTime, double& availableTime );

	static void discardDeletedQueryObjects( unsigned int contextID );

	void addGeometry(osg::ref_ptr<osg::Geometry> g){_composites.push_back(g);}

	//draw inlist and out outmapwith occrequest given ext and contextid
	void drawocclusiontest(std::list<unsigned int>&inlist,std::list<TestResult*> &outmap,osg::GLExtensions* ext,osg::RenderInfo& renderInfo )const;
	//composites geometry (tesselated geoms)
	std::vector<osg::ref_ptr<osg::Geometry> > _composites;
	//typedef std::map< const osg::Camera*, TestResult > ResultMap;
	typedef std::vector< TestResult > ResultMap;
	mutable ResultMap _results;
	mutable OpenThreads::Mutex _mapMutex;

	// Needed for debug only
	std::string _oqnName;protected:
};
#endif
