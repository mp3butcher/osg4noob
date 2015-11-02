
#ifndef osgVOXELIZERTT_H
#define osgVOXELIZERTT_H 1
#include "Export.h"

#include "osgOctreePass.h"


#include <osg/Camera>
namespace osgMG{

///OVERRIDE
class OSGMULTIGRID_EXPORT fokcallback  : public osg::Drawable::DrawCallback
	{
	public:
	osg::Drawable*_drawable;
	fokcallback(osg::Drawable*d=0){_drawable=d;}
protected:
		virtual void drawImplementation(osg::RenderInfo& renderInfo,const osg::Drawable* drawable) const{
		std::cout<<"fok";
//		_drawable->asGeometry()->osg::Geometry::drawImplementation(renderInfo);
		_drawable->drawImplementation(renderInfo);
		}
};
///OVERRIDE
class OSGMULTIGRID_EXPORT PointsGeneratorCallback  : public osg::Drawable::DrawCallback
	{
protected:
		virtual void drawImplementation(osg::RenderInfo& renderInfo,const osg::Drawable* drawable) const;

	public :
PointsGeneratorCallback();
	//void setRenderer(TrianglesRenderer*renderer);
	void addOutputBuffer(osg::VertexBufferObject*vbo,osg::Vec4Array* target,std::string name){
	_genbuffers.push_back(vbo);
	_genbuffernames.push_back(name);
	//_genatttargets.push_back(target);
	_target=target;
	}

	void setGeneratorProgram(osg::Program*p){_generatorProgram=p;
	//getOrCreateStateSet()->setAttributeAndModes(p);
	}
	osg::Program *getGeneratorProgram()const{return _generatorProgram;}
unsigned int getNumOutputBuffers()const{return _genbuffers.size();}

osg::BufferObject * getOutputBufferPointer(int i)const {return _genbuffers[i];}
std::string getOutputBufferName(int i)const {return _genbuffernames[i];}

	///the maximum output per triangle gs output
	void setExpansionFactor(unsigned int i){_expansionfactor=i;}
	unsigned int  getExpansionFactor()const{return _expansionfactor;}
	/*GLuint getNumPrimitivesGenerated()const{
	return getExpansionFactor()*this->getVertexArray()->getNumElements();
	}*/

protected:
unsigned int _expansionfactor;
///shortcuts set at first drawimpl call
	mutable osg::GLExtensions* ext;


	osg::ref_ptr<osg::Program >  _generatorProgram;
	std::vector<osg::ref_ptr<osg::VertexBufferObject> > _genbuffers;//TriangleRenderer  buffer;
	std::vector<std::string> _genbuffernames;//TriangleRenderer  buffer
	std::vector<unsigned int> _genatttargets;
	osg::ref_ptr<osg::Vec4Array> _target;//GPU target Array (!!!will not be modified CPU side!!)
	//osg::Vec4Array* vAry;//vertex array just for its size

	//virtual void drawImplementation( osg::RenderInfo& renderInfo ) const;
};
/*
class TrianglesRenderer : public osg::Geometry	{
public:

	TrianglesRenderer(TrianglesGenerator*_generator){

		setUseVertexBufferObjects(true);



		addPrimitiveSet( new osg::DrawArrays( GL_TRIANGLES, 0,_generator->getNumPrimitivesGenerated()));


		getOrCreateVertexBufferObject();
		///now you can set

	}



};
*/
	///Voxelize its children in a regular Texture3D
	///Hack the stateset of its children in order to try keeping its stateset:
	///Children Program Hacking tentative
	//1inject stuff in fragment shader
	//2Add a vs and a gs if none
	class OSGMULTIGRID_EXPORT Voxelizer : public osg::Camera{
		std::set<osg::ref_ptr<osg::Node> > _virtualchildrens;//contains children added before being modified
	public:
	const	std::set<osg::ref_ptr<osg::Node> > & getChildren()const { return _virtualchildrens; }
		//addVirtualChildren(){}

	osg::ref_ptr<osg::Group> VerticesAttribGenerationGroup;
    osg::ref_ptr<osg::Group> InstancingGroup ;

		static osg::ref_ptr<osg::Shader> classicInstancingGeometryShader;
		static osg::ref_ptr<osg::Shader> classicInstancingVertexShader;
		Voxelizer();
		META_Node(osgMG, Voxelizer);
		/** Copy constructor using CopyOp to manage deep vs shallow copy.*/
		Voxelizer(const Voxelizer&, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
///  child will be DEEP Copied in order to hack its stateset
		virtual bool addChild(Node *child);
		//void setOutputTexture(osg::Texture3D *tex){ _voxels = tex; }

		///transformation for children to fit the normalized voxel space (-1,1)
		///another way would be to specified voxelspace transform in local coordinates
		void setChildTransform(osg::Matrixf &m){
			_mat = m;
		}
		inline osg::Matrixf &getChildTransform(){ return _mat; }

		inline osg::Texture3D*getOutputTexture(){ return _voxels; }
		void setRasterizationResolution(const osg::Vec3ui&);
		const osg::Vec3ui & getRasterizationResolution()const { return _resolution; }
		osg::ref_ptr<osg::Texture3D> _voxels;
		osg::Vec3ui _resolution;
		virtual void traverse(osg::NodeVisitor &nv);
		osg::Matrixf _mat;
		bool _dirty;
		osg::ref_ptr<osg::Uniform > _rdx;//vec3 but just using z component
	};
	/*
	///rasterize to a single Texture
	class OSGMULTIGRID_EXPORT VoxelizeGeometry: public FBOWritter
	{
	VoxelizeGeometry():FBOWritter(){

	///setup StateSEt
	osg::StateSet * ss=getOrCreateStateSet();
	///draw it before others
	ss->setRenderBinDetails(-1,"RenderBin");
	///setup rastrisation shaders

	}
	virtual void addOutputTexture(osg::Texture3D*oc){
	FBOWritter::addOutputTexture(oc);
	///add an Instanced primitives set
	for(int i=0;i<getNumPrimitiveSets ();i++)
	this->getPrimitiveSet(i)->setNumInstances(oc->d());

	}
	};

	*/
}
#endif
