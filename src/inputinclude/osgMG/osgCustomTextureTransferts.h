#ifndef OSGCUSTOMTEXTURETRANSFERT_H
#define OSGCUSTOMTEXTURETRANSFERT_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/Program>

#include "GL3Extensions"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
namespace osgMG{

///custom image to manage readback from texture
	class OSGMULTIGRID_EXPORT CustomImage :public osg::Image{
public:
CustomImage();
CustomImage(const CustomImage& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);

   /** same as osg::Image but correct the read back behavior:
   *hack 1D->2d->3d->cubemap priority scheme to 3d->2d->1d->cubemap
        kind of dirty and restrict to my use case (I have 2D and 1D texture binding ON so the function read back 2D as 1D Image)
        (my advice would be to add the texture binding as a parameter (the function is only used in osgconv) )
   *Don't dirty image at the end (avoid a lot of rendering bug)*/
   virtual void readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, GLenum type = GL_UNSIGNED_BYTE, unsigned int face = 0);

   };



class OSGMULTIGRID_EXPORT CustomTexture3D :public osg::Texture3D{

public:
CustomTexture3D();
CustomTexture3D(const CustomTexture3D& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);




};

}
#endif
