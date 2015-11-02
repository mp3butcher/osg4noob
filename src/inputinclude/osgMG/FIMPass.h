/* OpenSceneGraph example, osggameoflife.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
*  THE SOFTWARE.
*/


#ifndef FIMPasse_H
#define FIMPasse_H 1

//#define TESSELATION_HINT 6
//ASSUME LASTCONSTRAINT IS GOAL
#define NBCONSTRAINTS 4
#include <osg/ref_ptr>
#include <osg/Group>
#include <osg/Switch>
#include <osg/Camera>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/TextureRectangle>
#include <osg/TextureRectangle>

//#include <osg/OcclusionQueryNode>


//#include "..\EveLifeOSteerRBodyDLL.h"

/**
The FIM Passe is making gpu iterations until it converge (can play on render rate)
It assume minimisation of Phi field according C Phield 

*/
//namespace EveLifeOSteerRBody{

class SwitchGeometry:public osg::Geometry{
private:
	bool _active;
	
	std::list<unsigned int> OQResult;
public:
	unsigned int _size;
	GLuint _requestid;
osg::GLExtensions* _ext;
	void setupOCQ(osg::GLExtensions* ext){ 
		ext->isARBOcclusionQuerySupported=true;
		//ext->glGenOcclusionQueries
		ext->glGenQueries( 1, &_requestid );
	_ext=ext;}
	SwitchGeometry(unsigned int minupdatepix):osg::Geometry(){
		_active=false;
		_size=minupdatepix;
		OQResult.push_back(FLT_MAX);
		
		//OQResult.push_back(FLT_MAX-1);
		//OQResult.push_back(FLT_MAX-2);
	};
	~SwitchGeometry(){
	//_ext->glDeleteOcclusionQueries(1,&_requestid);
	_ext->glDeleteQueries(1,&_requestid);
	}
	bool isActive(){return _active;};

	//when activation reset OQResult
	void setActive(bool a){_active=a;
	if(_active){
		//reset OQResults
		OQResult.clear();
		//OQResult.push_back(FLT_MAX);
		//OQResult.push_back(FLT_MAX-1);
		OQResult.push_back(FLT_MAX-2);
	}
	};

	void addOQResult(unsigned int i){
		OQResult.clear();//pop_back();
		OQResult.push_front(i);
	}
	bool isOQStable(){
		std::list<unsigned int>::iterator q,p=OQResult.begin();
		q=p;
	//	q++;
		for(;q!=OQResult.end();q++){
			if(//(*q)!=*p 
				(*q)>_size 
				//|| *q>300
				)return false;
		}
		return true;
	}
	bool isDone(){
		std::list<unsigned int>::iterator q,p=OQResult.begin();
		q=p;
	//	q++;
		for(;q!=OQResult.end();q++){
			if(//(*q)!=*p 
				(*q)>0 
				//|| *q>300
				)return false;
		}
		return true;
	}

};

class  ProcessPass {
public:
	unsigned int TESSELATION_HINT;
	unsigned int STAT_HINT;
	int _nbblindpass;
	ProcessPass(osg::ref_ptr<osg::TextureRectangle> *in_texs,
		osg::TextureRectangle *out_tex,
		int width, int height, int no,int ,int,int);
	~ProcessPass();
	//no need of the cam
	//	osg::Camera* getCamera(){return _Camera.get();}
	void createTexturedQuad(int incx,int incy,osg::Vec3Array* quad_coords,osg::Vec2Array* quad_tcoords);

	osg::ref_ptr<osg::Group> getRoot() { return _RootGroup; }

	//Texture->getImage In Order to manage to update of the FIM
	osg::ref_ptr<osg::TextureRectangle> getOutputTexture() { return _OutTexture; }
	void setShader(int i);

	osg::ref_ptr<SwitchGeometry>* getRenderSurface(){return _geometries;}
	std::list<unsigned int>& getNarrowBand(){return _activegeometries;}
	unsigned int getBlockSize(){return TESSELATION_HINT ;}
std::set<unsigned int>& getSeedBlocks(){return _goalcells ;}

bool isOCQReady(){return _userflag;}
void setOCQReady(bool t){_userflag=t;}

bool _userflag;
	osg::ref_ptr<osg::Group> createOcclusionQuad();
	osg::ref_ptr<osg::Group> createNormalQuad();
	void setupCamera(int i);

	osg::ref_ptr<osg::Group> _RootGroup;
	osg::ref_ptr<osg::Camera> _Camera[3];

	osg::ref_ptr<osg::TextureRectangle> * _InTextures;
	osg::ref_ptr<osg::TextureRectangle> _OutTexture;
	osg::ref_ptr<osg::TextureRectangle> _OutGradTexture;

	osg::ref_ptr<SwitchGeometry> *_geometries;//render surfaces tesselated
	std::list<unsigned int> _activegeometries;
	std::set<unsigned int> _goalcells;

unsigned	int _TextureWidth;
unsigned	int _TextureHeight;
	osg::ref_ptr<osg::Program> _FragmentProgram[3];
	osg::ref_ptr<osg::StateSet> _StateSet[3];
private:};



		/**
		The FIMPass is the node that has to be inserted in your scenegraph
		*/
		class LongTermMemory;
		class FIMPass {
		public:

			//in_image is the rgba image containing cost in R and Phi in GB componenent
			//TODO swap to rgb support has alpha cant be used becaose of occlusion query in GeometryQuery
			FIMPass(osg::Image*,int size,int tess,int stat);
			~FIMPass();
			osg::ref_ptr<osg::Group> getRoot() { return _RootGroup; }
			osg::ref_ptr<osg::TextureRectangle> getOutputTexture();
			//change the shader to change the FIM frag shader
			void setShader(std::string filename);
			// Switch branches so we flip pingpongtextures
			// void flip();
			ProcessPass * getPass(){return _ProcessPass;}
		private:
			osg::Image* _ltm;
			osg::ref_ptr<osg::Group> createTexturedQuad();
			//void setupCamera();
			void createOutputTexture();
			void createInputTextures();
			// void activateBranch();

			osg::ref_ptr<osg::Group> _RootGroup;

			//Phi
			osg::ref_ptr<osg::TextureRectangle> _OutTexture;
			//Ci
			osg::ref_ptr<osg::TextureRectangle> _InTextures[NBCONSTRAINTS];



			unsigned int _TextureWidth;
			unsigned int _TextureHeight;
			int _ActiveBranch;
			osg::ref_ptr<osg::Program> _FragmentProgram;
			osg::ref_ptr<osg::StateSet> _StateSet;
			// no more pingpong neede osg::ref_ptr<osg::Switch> _BranchSwith[2];
			ProcessPass *_ProcessPass;
		};

#endif //FIMPass_H
