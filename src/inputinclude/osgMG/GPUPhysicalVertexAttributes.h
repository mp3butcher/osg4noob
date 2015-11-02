
#ifndef osgVOXELIZERTT_H
#define osgVOXELIZERTT_H 1
#include "Export.h"

#include "osgOctreePass.h"


#include <osg/Camera>
namespace osgMG{

///OVERRIDE
class OSGMULTIGRID_EXPORT TrianglesGeneratorCallback  : public osg::Drawable::DrawCallback
	{
protected:
		virtual void drawImplementation(osg::RenderInfo& renderInfo,const osg::Drawable* drawable) const;

	public :

	//void setRenderer(TrianglesRenderer*renderer);
	void addOutputBuffer(osg::VertexBufferObject*vbo,std::string name){
	_genbuffers.push_back(vbo);
	_genbuffernames.push_back(name);
	}

	void setGeneratorProgram(osg::Program*p){_generatorProgram=p;
	//getOrCreateStateSet()->setAttributeAndModes(p);
	}
	osg::Program *getGeneratorProgram()const{return _generatorProgram;}
unsigned int getNumOutputBuffers()const{return _genbuffers.size();}

osg::VertexBufferObject * getOutputBufferPointer(int i)const {return _genbuffers[i];}
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
	mutable osg::GLBufferObject::Extensions* ext;
	mutable osg::GL2Extensions * ext2;

	osg::ref_ptr<osg::Program >  _generatorProgram;
	std::vector<osg::VertexBufferObject*> _genbuffers;//TriangleRenderer  buffer;
	std::vector<std::string> _genbuffernames;//TriangleRenderer  buffer
	//osg::Vec4Array* vAry;//vertex array just for its size

	//virtual void drawImplementation( osg::RenderInfo& renderInfo ) const;
};
	///Generate physical GPU VertexAttributes over time from a given the given channel
	/// oldpos/velocity (for the moment)
	///TODO
	///TODO Children Geometry Program Hacking tentative
	//1inject stuff in fragment shader
	//2Add a vs and a gs if none
	class OSGMULTIGRID_EXPORT PhysicalGenerator : public osg::Group{

	public:
		static osg::ref_ptr<osg::Shader> kclassicInstancingGeometryShader;
		static osg::ref_ptr<osg::Shader> kclassicInstancingVertexShader;
		PhysicalGenerator();

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
		void setRasterizationResolution(osg::Vec3ui);
		osg::Vec3ui getRasterizationResolution(){ return _resolution; }
		osg::ref_ptr<osg::Texture3D> _voxels;
		osg::Vec3ui _resolution;
		virtual void traverse(osg::NodeVisitor &nv);
		osg::Matrixf _mat;
		bool _dirty;
		osg::ref_ptr<osg::Uniform > _rdx;//vec3 but just using z component
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

}
#endif
