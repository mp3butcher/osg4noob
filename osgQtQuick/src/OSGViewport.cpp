#include "osgQtQuick/OSGViewport.hpp"

#include "osgQtQuick/OSGNode.hpp"
#include "osgQtQuick/QuickWindowViewer.hpp"

#include <QQuickWindow>
#include <QOpenGLFramebufferObject>
#include <QSGSimpleTextureNode>
#include <QDebug>

#include <osgViewer/CompositeViewer>
#include <osgViewer/ViewerEventHandlers>
#include <osgGA/TrackballManipulator>
#include <iostream>
namespace osgQtQuick {

	struct OSGViewport::Hidden : public QObject
	{
		Q_OBJECT

		struct PreDraw: public osg::Camera::DrawCallback {
		public:
			PreDraw(Hidden *h);

			void operator ()(osg::RenderInfo &renderInfo) const;

			mutable Hidden *h;
		};
		friend struct PreDraw;

		struct PostDraw: public osg::Camera::DrawCallback {
		public:
			PostDraw(Hidden *h);

			void operator ()(osg::RenderInfo &renderInfo) const;

			mutable Hidden *h;
		};
		friend struct PostDraw;

	public:

		// Конструктор
		Hidden(OSGViewport *quickItem) :
		  QObject(quickItem),
			  quickItem(quickItem),
			  drawingMode(OSGViewport::Buffer),
			  sceneData(0),
			  mode(OSGViewport::Native),
			  fbo(0),
			  texture(0),
			  textureNode(0)
		  {
			  // Создание сцены и вьювера
			  initOSG();
			  //quickItem->setAcceptedMouseButtons(Qt::AllButtons);
			  acceptQuickItem();
		  }

		  // Деструктор
		  ~Hidden() {

		  }

		  QPointF mousePoint(QMouseEvent *event) {
			  qreal x = 0.01 * (event->x() - quickItem->width() / 2);
			  qreal y = 0.01 * (event->y() - quickItem->height() / 2);
			  return QPointF(x, y);
		  }

		  bool acceptSceneData(osgQtQuick::OSGNode *node)
		  {
			  if (sceneData == node) return false;

			  if (sceneData) {
				  disconnect(sceneData);
			  }

			  sceneData = node;
			  view->setSceneData( node ? node->node() : 0);

			  if (node) {
				  connect(node, SIGNAL(nodeChanged(osg::Node*)),
					  this, SLOT(onNodeChanged(osg::Node*)));
			  }

			  return true;
		  }

		  bool acceptMode(OSGViewport::DrawingMode mode) {
			  if (this->mode == mode) return false;

			  this->mode = mode;
			  if (mode == OSGViewport::Buffer) {
				  if(!preDraw.valid()) {
					  preDraw = new PreDraw(this);
					  view->getCamera()->setPreDrawCallback(preDraw.get());
				  }
				  if(!postDraw.valid()) {
					  postDraw = new PostDraw(this);
					  view->getCamera()->setPostDrawCallback(postDraw.get());
				  }
			  }

			  return true;
		  }

		  // Public data
		  OSGViewport::DrawingMode drawingMode;

		  // Public Qt data
		  OSGViewport *quickItem;

		  // Public OSG data
		  osg::ref_ptr<osgViewer::View> view;

		  osgQtQuick::OSGNode *sceneData;

		  OSGViewport::DrawingMode mode;

		  QOpenGLFramebufferObject *fbo;
		  QSGTexture *texture;
		  QSGSimpleTextureNode *textureNode;

		  osg::ref_ptr<PreDraw> preDraw;
		  osg::ref_ptr<PostDraw> postDraw;

		  public slots:
			  void updateViewport() {
				  if (!quickItem->window()) return;
				  if (mode == OSGViewport::Native) {
					  QRectF rect = quickItem->mapRectToItem(0, quickItem->boundingRect());
					  view->getCamera()->getGraphicsContext()->resized(0,0,//rect.x(),
						  //quickItem->window()->height() - ( rect.y() + rect.height()),
						 rect.width(),
						 rect.height());
                    view->getEventQueue()->windowResize (rect.x(),rect.y(),
						  //quickItem->window()->height() - ( rect.y() + rect.height()),
						rect.width(),
						rect.height());
					  view->getCamera()->setViewport(rect.x(),rect.y(),
						  //quickItem->window()->height() - ( rect.y() + rect.height()),
						rect.width(),
						rect.height());
					  view->getCamera()->setProjectionMatrixAsPerspective(30.0f, static_cast<double>(rect.width())/static_cast<double>(rect.height()), 1.0f, 10000.0f );
/**/
				  }
				  if (mode == OSGViewport::Buffer) {
					  QSize dsize(quickItem->boundingRect().size().toSize());
					  view->getCamera()->setViewport(0, 0, dsize.width(), dsize.height());
					  view->getCamera()->setProjectionMatrixAsPerspective(30.0f, static_cast<double>(dsize.width())/static_cast<double>(dsize.height()), 1.0f, 10000.0f );
					  if (texture && texture->textureSize() != dsize) {
						  updateFBO();
					  }
				  }
			  }

			  private slots:

				  // Обработка события смены окна для элемента
				  void onWindowChanged(QQuickWindow *window) {
					  if (QuickWindowViewer *qwv = QuickWindowViewer::instance(window)) {
						  view->getCamera()->setGraphicsContext(qwv->graphicsContext());
						   view->getEventQueue()->setGraphicsContext(qwv->graphicsContext());

						  updateViewport();
    qwv->compositeViewer()->setThreadSafeReferenceCounting(true);
    /*qwv->compositeViewer()->setThreadingModel( osgViewer::ViewerBase::ThreadPerContext);
    qwv->compositeViewer()->setRunFrameScheme(osgViewer::ViewerBase::ON_DEMAND);*/
						  qwv->compositeViewer()->addView(view.get());
					//	  qwv->compositeViewer()->realize();
						  connect(window, SIGNAL(widthChanged(int)),
							  this, SLOT(updateViewport()));
						  connect(window, SIGNAL(heightChanged(int)),
							  this, SLOT(updateViewport()));
					  }
				  }

				  void onNodeChanged(osg::Node *node) {
					  if (view.valid()) view->setSceneData(node);
				  }

	private:
		void initOSG() {
			view = new osgViewer::View();
			view->setLightingMode(osg::View::NO_LIGHT);
			//  view->addEventHandler( new osgViewer::StatsHandler );
			//    view->setCameraManipulator( new osgGA::TrackballManipulator );
			//        view->getCamera()->setGraphicsContext();
		}

		void initFBO() {
			QRectF rect = quickItem->mapRectToItem(0, quickItem->boundingRect());
			QOpenGLFramebufferObjectFormat format;
			format.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
			QSize size(rect.size().toSize());
			fbo = new QOpenGLFramebufferObject(size, format);
			texture = quickItem->window()->createTextureFromId(fbo->texture(), size);
			textureNode = new QSGSimpleTextureNode();
			textureNode->setRect(0, quickItem->height(), quickItem->width(), -quickItem->height());
			textureNode->setTexture(texture);
			quickItem->setFlag(QQuickItem::ItemHasContents, true);
			updateViewport();
			quickItem->update();
		}

		void updateFBO()
		{
			std::cout<<"updateFBO"<<std::endl;
			if (fbo) delete fbo;
			QRectF rect = quickItem->mapRectToItem(0, quickItem->boundingRect());
			QOpenGLFramebufferObjectFormat format;
			format.setAttachment(QOpenGLFramebufferObject::CombinedDepthStencil);
			QSize size(rect.size().toSize());
			fbo = new QOpenGLFramebufferObject(size, format);
			if (texture) delete texture;
			texture = quickItem->window()->createTextureFromId(fbo->texture(), size);
			textureNode = new QSGSimpleTextureNode();
			textureNode->setRect(0, quickItem->height(), quickItem->width(), -quickItem->height());
			textureNode->setTexture(texture);
			quickItem->update();
		}

		void acceptQuickItem() {
			Q_ASSERT(quickItem);
			connect(quickItem, SIGNAL(windowChanged(QQuickWindow*)),
				this, SLOT(onWindowChanged(QQuickWindow*)));
		}
	};

	/* ----------------------------------------------- struct Hidden::PreDraw --- */

	OSGViewport::Hidden::PreDraw::PreDraw(Hidden *h) : h(h) {
	}

	void OSGViewport::Hidden::PreDraw::operator ()(osg::RenderInfo &/*renderInfo*/) const
	{
		if (!h->fbo) h->initFBO();
		if (h->fbo) h->fbo->bind();
	}

	/* ----------------------------------------------- struct Hidden::PostDraw --- */

	OSGViewport::Hidden::PostDraw::PostDraw(Hidden *h) : h(h) {
	}

	void OSGViewport::Hidden::PostDraw::operator ()(osg::RenderInfo &/*renderInfo*/) const
	{
		if (h->fbo) h->fbo->bindDefault();
	}

	/* ---------------------------------------------------- class OSGViewport --- */

	OSGViewport::OSGViewport(QQuickItem *parent) :
	QQuickItem(parent), h(new Hidden(this))
	{
		setAcceptHoverEvents(true);
		setAcceptedMouseButtons(Qt::AllButtons);
	}

	void OSGViewport::setDarawingMode(OSGViewport::DrawingMode mode)
	{
		if (h->drawingMode != mode) {
			h->drawingMode = mode;
		}
	}

	osgQtQuick::OSGNode *OSGViewport::sceneData()
	{
		return h->sceneData;
	}

	void OSGViewport::setSceneData(osgQtQuick::OSGNode *node)
	{
		if (h->acceptSceneData(node)) {
			emit sceneDataChanged(node);
		}
	}

	QColor OSGViewport::color() const
	{
		const osg::Vec4 osgColor = h->view->getCamera()->getClearColor();
		return QColor::fromRgbF(
			osgColor.r(),
			osgColor.g(),
			osgColor.b(),
			osgColor.a());
	}

	void OSGViewport::setColor(const QColor &color)
	{
		osg::Vec4 osgColor(
			color.redF(),
			color.greenF(),
			color.blueF(),
			color.alphaF());
		if (h->view->getCamera()->getClearColor() != osgColor) {
			h->view->getCamera()->setClearColor(osgColor);
			emit colorChanged(color);
		}
	}

	OSGViewport::DrawingMode OSGViewport::mode() const
	{
		return h->mode;
	}

	void OSGViewport::setMode(OSGViewport::DrawingMode mode)
	{
		if (h->acceptMode(mode)) emit modeChanged(mode);
	}

	void OSGViewport::geometryChanged(const QRectF &newGeometry, const QRectF &oldGeometry)
	{
		if (window()){ h->updateViewport();
//			h->view->getEventQueue()->windowResize(newGeometry.x(),newGeometry.y(),newGeometry.width(),newGeometry.height());
		}
		QQuickItem::geometryChanged(newGeometry, oldGeometry);
	}

	void OSGViewport::mouseDoubleClickEvent(QMouseEvent *event)
	{
		//qDebug() << "press:" << event;ŝ
			QPointF pos(event->x(),event->y());// = h->mousePoint(event);
		//h->view->getEventQueue()->setUseFixedMouseInputRange(false);
//		QPointF pos =event->globalPos();
			switch(event->button())
		{
		case Qt::LeftButton:
			h->view->getEventQueue()->mouseDoubleButtonPress(pos.x(), pos.y(), 1);break;
		case Qt::RightButton:
			h->view->getEventQueue()->mouseDoubleButtonPress(pos.x(), pos.y(), 3);break;
		case Qt::MiddleButton:
			h->view->getEventQueue()->mouseDoubleButtonPress(pos.x(), pos.y(), 2);break;

		}
		QQuickItem::mousePressEvent(event);

event->accept();
	}
	void OSGViewport::mousePressEvent(QMouseEvent *event)
	{
		//qDebug() << "press:" << event;ŝ
			QPointF pos(event->x(),event->y());// = h->mousePoint(event);
		//h->view->getEventQueue()->setUseFixedMouseInputRange(false);
//		QPointF pos =event->globalPos();
			switch(event->button())
		{
		case Qt::LeftButton:
			h->view->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 1);break;
		case Qt::RightButton:
			h->view->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 3);break;
		case Qt::MiddleButton:
			h->view->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 2);break;

		}
		QQuickItem::mousePressEvent(event);

event->accept();
	}

	void OSGViewport::mouseMoveEvent(QMouseEvent *event)
	{
//QQuickItem::mouseMoveEvent(event);
		//qDebug() << "move:" << event->x() << event->y() << event;
	//	QPointF pos = h->mousePoint(event);
		//QPointF pos =event->globalPos();
		QPointF pos(event->x(),event->y());
		h->view->getEventQueue()->mouseMotion(pos.x(), pos.y());
event->accept();
}

	void OSGViewport::mouseReleaseEvent(QMouseEvent *event)
	{

		//qDebug() << "release:" << event;
	//	QPointF pos = h->mousePoint(event);
		//QPointF pos =event->globalPos();
		QPointF pos(event->x(),event->y());
		switch(event->button())
		{
		case Qt::LeftButton:
			h->view->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 1);break;
		case Qt::RightButton:
			h->view->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 3);break;
		case Qt::MiddleButton:
			h->view->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 2);break;



		}
		QQuickItem::mouseReleaseEvent(event);
event->accept();
	}


	void OSGViewport::wheelEvent(QWheelEvent *event)
	{
		//qDebug() << "wheel:" << event;
		h->view->getEventQueue()->mouseScroll(
			event->orientation() == Qt::Vertical ?
			(event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_UP : osgGA::GUIEventAdapter::SCROLL_DOWN) :
			(event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_LEFT : osgGA::GUIEventAdapter::SCROLL_RIGHT) );
	QQuickItem::wheelEvent(event);
event->accept();
	}
//	> if(event->key() == Qt::Key_Left)
//>    _gw->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_Left);
//> else if(event->key() == Qt::Key_Right)
//>    _gw->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_Right);
//> else if(event->key() == Qt::Key_Up)
//>    _gw->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_Up);
//> else if(event->key() == Qt::Key_Down)
//>    _gw->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_Down);
//> else
//>    _gw->getEventQueue()->keyPress( (osgGA::GUIEventAdapter::KeySymbol) *(event->text().toAscii().data() ) );
	void OSGViewport::keyPressEvent( QKeyEvent* event){

#define CASEKEYNAME(XXX,NNN) case Qt::XXX :  h->view->getEventQueue()->keyPress(osgGA::GUIEventAdapter::NNN);break;
		switch(event->key()){
				//CASEKEYNAME(Key_A,KEY_A);		CASEKEYNAME(Key_B,KEY_B);		CASEKEYNAME(Key_C,KEY_C);		CASEKEYNAME(Key_D,KEY_D);		CASEKEYNAME(Key_E,KEY_E);
				//CASEKEYNAME(Key_F,KEY_F);		CASEKEYNAME(Key_G,KEY_G);		CASEKEYNAME(Key_H,KEY_H);		CASEKEYNAME(Key_I,KEY_I);CASEKEYNAME(Key_J,KEY_J);
			//	CASEKEYNAME(Key_K,KEY_K);CASEKEYNAME(Key_L,KEY_L);CASEKEYNAME(Key_M,KEY_M);CASEKEYNAME(Key_N,KEY_N);CASEKEYNAME(Key_O,KEY_O);
			//	CASEKEYNAME(Key_P,KEY_P);CASEKEYNAME(Key_Q,KEY_Q);CASEKEYNAME(Key_R,KEY_R);CASEKEYNAME(Key_S,KEY_S);CASEKEYNAME(Key_T,KEY_T);CASEKEYNAME(Key_U,KEY_U);CASEKEYNAME(Key_V,KEY_V);
		//	CASEKEYNAME(Key_W,KEY_W);		CASEKEYNAME(Key_X,KEY_Y);		CASEKEYNAME(Key_Y,KEY_Y);		CASEKEYNAME(Key_Z,KEY_Z);
			CASEKEYNAME(Key_Up ,KEY_Up);		CASEKEYNAME(Key_Down ,KEY_Down);		CASEKEYNAME(Key_Left ,KEY_Left);		CASEKEYNAME(Key_Right ,KEY_Right);
			//CASEKEYNAME(Key_Control ,KEY_Control_L);
			////no right ctrl in qt?
			//CASEKEYNAME(Key_Alt ,KEY_Alt_L);
			//CASEKEYNAME(Key_Space ,KEY_Space);
			//CASEKEYNAME(Key_Return ,KEY_Return);
			//CASEKEYNAME(Key_Tab ,KEY_Tab);
			//CASEKEYNAME(Key_Shift ,KEY_Shift_L);
			//CASEKEYNAME(Key_Backspace ,KEY_BackSpace);
			//CASEKEYNAME(Key_Escape ,KEY_Escape);
			//CASEKEYNAME(Key_F1 ,KEY_F1);CASEKEYNAME(Key_F2 ,KEY_F2);CASEKEYNAME(Key_F3 ,KEY_F3);CASEKEYNAME(Key_F4 ,KEY_F4);CASEKEYNAME(Key_F5 ,KEY_F5);
			//CASEKEYNAME(Key_F6 ,KEY_F6);CASEKEYNAME(Key_F7 ,KEY_F7);CASEKEYNAME(Key_F8 ,KEY_F8);CASEKEYNAME(Key_F9 ,KEY_F9);CASEKEYNAME(Key_F10 ,KEY_F10);
			//CASEKEYNAME(Key_F11 ,KEY_F11);CASEKEYNAME(Key_F12 ,KEY_F12);
		default:
			std::cout << "key pressed:" << event;
			std::cout<<std::endl;
			h->view->getEventQueue()->keyPress( (osgGA::GUIEventAdapter::KeySymbol) *(event->text().toLatin1().data() ) );
		}
		QQuickItem::keyPressEvent(event);//event->accept();
	}

	void OSGViewport::keyReleaseEvent( QKeyEvent* event){

#define CASEKEYNAME(XXX,NNN) case Qt::XXX :  h->view->getEventQueue()->keyRelease(osgGA::GUIEventAdapter::NNN);break;
		switch(event->key()){
				//CASEKEYNAME(Key_A,KEY_A);		CASEKEYNAME(Key_B,KEY_B);		CASEKEYNAME(Key_C,KEY_C);		CASEKEYNAME(Key_D,KEY_D);		CASEKEYNAME(Key_E,KEY_E);
				//CASEKEYNAME(Key_F,KEY_F);		CASEKEYNAME(Key_G,KEY_G);		CASEKEYNAME(Key_H,KEY_H);		CASEKEYNAME(Key_I,KEY_I);CASEKEYNAME(Key_J,KEY_J);
			//	CASEKEYNAME(Key_K,KEY_K);CASEKEYNAME(Key_L,KEY_L);CASEKEYNAME(Key_M,KEY_M);CASEKEYNAME(Key_N,KEY_N);CASEKEYNAME(Key_O,KEY_O);
			//	CASEKEYNAME(Key_P,KEY_P);CASEKEYNAME(Key_Q,KEY_Q);CASEKEYNAME(Key_R,KEY_R);CASEKEYNAME(Key_S,KEY_S);CASEKEYNAME(Key_T,KEY_T);CASEKEYNAME(Key_U,KEY_U);CASEKEYNAME(Key_V,KEY_V);
		//	CASEKEYNAME(Key_W,KEY_W);		CASEKEYNAME(Key_X,KEY_Y);		CASEKEYNAME(Key_Y,KEY_Y);		CASEKEYNAME(Key_Z,KEY_Z);
			CASEKEYNAME(Key_Up ,KEY_Up);		CASEKEYNAME(Key_Down ,KEY_Down);		CASEKEYNAME(Key_Left ,KEY_Left);		CASEKEYNAME(Key_Right ,KEY_Right);
			//CASEKEYNAME(Key_Control ,KEY_Control_L);
			////no right ctrl in qt?
			//CASEKEYNAME(Key_Alt ,KEY_Alt_L);
			//CASEKEYNAME(Key_Space ,KEY_Space);
			//CASEKEYNAME(Key_Return ,KEY_Return);
			//CASEKEYNAME(Key_Tab ,KEY_Tab);
			//CASEKEYNAME(Key_Shift ,KEY_Shift_L);
			//CASEKEYNAME(Key_Backspace ,KEY_BackSpace);
			//CASEKEYNAME(Key_Escape ,KEY_Escape);
			//CASEKEYNAME(Key_F1 ,KEY_F1);CASEKEYNAME(Key_F2 ,KEY_F2);CASEKEYNAME(Key_F3 ,KEY_F3);CASEKEYNAME(Key_F4 ,KEY_F4);CASEKEYNAME(Key_F5 ,KEY_F5);
			//CASEKEYNAME(Key_F6 ,KEY_F6);CASEKEYNAME(Key_F7 ,KEY_F7);CASEKEYNAME(Key_F8 ,KEY_F8);CASEKEYNAME(Key_F9 ,KEY_F9);CASEKEYNAME(Key_F10 ,KEY_F10);
			//CASEKEYNAME(Key_F11 ,KEY_F11);CASEKEYNAME(Key_F12 ,KEY_F12);
		/*
			CASEKEYNAME(Key_A,KEY_A);		CASEKEYNAME(Key_B,KEY_B);		CASEKEYNAME(Key_C,KEY_C);		CASEKEYNAME(Key_D,KEY_D);		CASEKEYNAME(Key_E,KEY_E);
			CASEKEYNAME(Key_F,KEY_F);		CASEKEYNAME(Key_G,KEY_G);		CASEKEYNAME(Key_H,KEY_H);		CASEKEYNAME(Key_I,KEY_I);CASEKEYNAME(Key_J,KEY_J);
			CASEKEYNAME(Key_K,KEY_K);CASEKEYNAME(Key_L,KEY_L);CASEKEYNAME(Key_M,KEY_M);CASEKEYNAME(Key_N,KEY_N);CASEKEYNAME(Key_O,KEY_O);
			CASEKEYNAME(Key_P,KEY_P);CASEKEYNAME(Key_Q,KEY_Q);CASEKEYNAME(Key_R,KEY_R);CASEKEYNAME(Key_S,KEY_S);CASEKEYNAME(Key_T,KEY_T);CASEKEYNAME(Key_U,KEY_U);CASEKEYNAME(Key_V,KEY_V);
			CASEKEYNAME(Key_W,KEY_W);		CASEKEYNAME(Key_X,KEY_Y);		CASEKEYNAME(Key_Y,KEY_Y);		CASEKEYNAME(Key_Z,KEY_Z);
			CASEKEYNAME(Key_Up ,KEY_Up);		CASEKEYNAME(Key_Down ,KEY_Down);		CASEKEYNAME(Key_Left ,KEY_Left);		CASEKEYNAME(Key_Right ,KEY_Right);
			CASEKEYNAME(Key_Control ,KEY_Control_L);
			//no right ctrl in qt?
			CASEKEYNAME(Key_Alt ,KEY_Alt_L);
			CASEKEYNAME(Key_Space ,KEY_Space);
			CASEKEYNAME(Key_Return ,KEY_Return);
			CASEKEYNAME(Key_Tab ,KEY_Tab);
			CASEKEYNAME(Key_Shift ,KEY_Shift_L);
			CASEKEYNAME(Key_Backspace ,KEY_BackSpace);
			CASEKEYNAME(Key_Escape ,KEY_Escape);
			CASEKEYNAME(Key_F1 ,KEY_F1);CASEKEYNAME(Key_F2 ,KEY_F2);CASEKEYNAME(Key_F3 ,KEY_F3);CASEKEYNAME(Key_F4 ,KEY_F4);CASEKEYNAME(Key_F5 ,KEY_F5);
			CASEKEYNAME(Key_F6 ,KEY_F6);CASEKEYNAME(Key_F7 ,KEY_F7);CASEKEYNAME(Key_F8 ,KEY_F8);CASEKEYNAME(Key_F9 ,KEY_F9);CASEKEYNAME(Key_F10 ,KEY_F10);
			CASEKEYNAME(Key_F11 ,KEY_F11);CASEKEYNAME(Key_F12 ,KEY_F12);*/
		default:
			std::cout << "key released:" << event;
			std::cout<<std::endl;
			h->view->getEventQueue()->keyRelease( (osgGA::GUIEventAdapter::KeySymbol) *(event->text().toLatin1().data() ) );
		}
		QQuickItem::keyReleaseEvent(event);//event->accept();
	}
	void  OSGViewport::resizeEvent(QResizeEvent *event){
		QSize s=event->size();
		//reset view camera andit self
		//		QQuickItem *item=this->	rootObject();
		//		item->setWidth(s.width());
		//				item->setHeight(s.height());
		//		parent()->parent()->parent()->resize(s.width(),s.height());
		//		parent()->parent()->resize(s.width(),s.height());
		//			parent()->resize(s.width(),s.height());
		//resize(s.width(),s.height());
		//	QQuickView::resizeEvent(event);
		//		std::cout<<"resize "<<s.width()<<" "<<s.height()<<std::endl;		osg::Viewport * vp=managedview->getCamera()->getViewport();
		//		if(vp->width()!=s.width()||vp->height()!=s.height()){
		//	/***/
/*				h->view->getCamera()->getGraphicsContext()->resized(0,0,s.width(),s.height());
				h->view->getCamera()->setViewport(0,0,s.width(),s.height());
				h->view->getCamera()->setProjectionMatrix( osg::Matrix::perspective( 30., (double)s.width()/(double)s.height(), 1., 500 ) );
		//
		h->view->getEventQueue()->windowResize(0,0,s.width(),s.height());
*/		//		}



	}

	QSGNode *OSGViewport::updatePaintNode(QSGNode *oldNode, QQuickItem::UpdatePaintNodeData *updatePaintNodeData)
	{
		if (oldNode && oldNode != h->textureNode) {
			delete oldNode;
		}
		Q_UNUSED(updatePaintNodeData);

		return h->textureNode;
	}

        void OSGViewport:: hackview(osg::View*v){
        h->view=dynamic_cast<osgViewer::View*>(v);


       // h->onWindowChanged(h->window());
        }
} // namespace osgQtQuick

//#include "moc_OSGViewport.cpp"
#include "OSGViewport.moc"
