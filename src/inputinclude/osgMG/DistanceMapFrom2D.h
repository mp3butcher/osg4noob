
#ifndef osgDISTANCEMAPRTT_H
#define osgDISTANCEMAPRTT_H 1
#include "Export.h"

#include <osg/Image>

#include <osg/Camera>
#include "osgOctreePass.h"


namespace osgMG{


	class OSGMULTIGRID_EXPORT Texture3DDistanceMap : public osg::Camera{
 	public:
	//const	std::set<osg::ref_ptr<osg::Node> > & getChildren()const { return _virtualchildrens; }
		//addVirtualChildren(){}
osg::ref_ptr<osg::Image> _inputimage;
	osg::ref_ptr<osg::Group> VerticesAttribGenerationGroup;
    osg::ref_ptr<osg::Group> InstancingGroup ;
unsigned int _outmapheight;
		static osg::ref_ptr<osg::Shader> classicInstancingGeometryShader;
		static osg::ref_ptr<osg::Shader> classicInstancingVertexShader;
		Texture3DDistanceMap();
		META_Node(osgMG, Texture3DDistanceMap);
		/** Copy constructor using CopyOp to manage deep vs shallow copy.*/
		Texture3DDistanceMap(const Texture3DDistanceMap&, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
///  child will be DEEP Copied in order to hack its stateset
		virtual bool addChild(Node *child);
		void setInputImage(osg::Image  *im);//setup camera{ _inputimage = tex; }
		osg::Image  * getInputImage()const{return _inputimage; }
		unsigned int  getOutMapHeight()const{return _outmapheight; }
void setOutMapHeight(unsigned int i){_outmapheight=i;}

		inline osg::Texture3D*getOutputTexture(){ return _voxels; }
	//	void setRasterizationResolution(const osg::Vec3ui&);
		//const osg::Vec3ui & getRasterizationResolution()const { return _resolution; }
		osg::ref_ptr<osg::Texture3D> _voxels;
		osg::Vec3ui _resolution;
		//virtual void traverse(osg::NodeVisitor &nv);
		osg::Matrixf _mat;
		bool _dirty;
		osg::ref_ptr<osg::Uniform > _rdx;//vec3 but just using z component
	};

}
#endif
