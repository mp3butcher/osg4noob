#ifndef osgOctreeVolume_H
#define osgOctreeVolume_H
#include "Export.h"
#include <osg/Texture3D>
namespace osgMG{

	class OSGMULTIGRID_EXPORT osgOctreeVolume :public osg::Texture3D{
	protected:

	public:

		META_StateAttribute(osgMG, osgOctreeVolume, TEXTURE);
		///Define how is stored stuff
		  enum  StorageScheme{
			CENTER_DEFINED = 0, //potentials are stored at cell center
			MAC_STYLE_DEFINED = 1,   //potentials are stored at cell face middle
			CORNERS_DEFINED = 2  //potentials are stored at cell corners
		} ;

		osgOctreeVolume();
		osgOctreeVolume(int nummipmapsimages);
	 
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		osgOctreeVolume(const osgOctreeVolume& text, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		StorageScheme  getStorageScheme()const { return _scheme; }
		void setStorageScheme(StorageScheme sc){ _scheme = sc; }
		inline std::vector<osg::ref_ptr<osg::Image> > & getMipMapLevelImage(){ return _images; }
		void setImage4MipMapLevel(osg::Image*im, int level = 0);

		//test to handle texturereadback
		//write back 
		virtual void releaseGLObjects(osg::State* state = 0) const;
		//read in : case from
		virtual void apply(osg::State& state) const;


		/** overide Sets the texture image to get its mipmaplevels setting it*/
		virtual void setImage(osg::Image* image);
	protected:
		std::vector<osg::ref_ptr<osg::Image> > _images;
		void applyTexImage3D(GLenum target, osg::Image* image, osg::State& state, GLsizei& inwidth, GLsizei& inheight, GLsizei& indepth, GLsizei& numMipmapLevels) const;

		StorageScheme _scheme;
	};

	class OSGMULTIGRID_EXPORT osgOctreeLoading : public osg::Texture3D::SubloadCallback
	{
	public:
		std::vector<osg::ref_ptr<osg::Image> > & _images;
		osgOctreeLoading(std::vector<osg::ref_ptr<osg::Image> > &images) :_images(images){}
		virtual void load(const osg::Texture3D& texture, osg::State& state) const;
		virtual void subload(const osg::Texture3D& texture, osg::State& state) const;
	};
}
	#endif