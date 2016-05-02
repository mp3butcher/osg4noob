#include "QtToOSGView.h"

#include <osgViewer/ViewerEventHandlers>
//#include "../myStatsHandler.h"


#include <qpoint.h>
#include <iostream>
#include <QtWidgets/qdockwidget.h>
#include <QQuickItem>
//
//	 void QtToOSGView::keyPressEvent( QKeyEvent* event){
//
//#define CASEKEYNAME(XXX,NNN) case Qt::XXX :  managedview->getEventQueue()->keyPress(osgGA::GUIEventAdapter::NNN);break;
//		switch(event->key()){
//			CASEKEYNAME(Key_A,KEY_A);		CASEKEYNAME(Key_B,KEY_B);		CASEKEYNAME(Key_C,KEY_C);		CASEKEYNAME(Key_D,KEY_D);		CASEKEYNAME(Key_E,KEY_E);
//			CASEKEYNAME(Key_F,KEY_F);		CASEKEYNAME(Key_G,KEY_G);		CASEKEYNAME(Key_H,KEY_H);		CASEKEYNAME(Key_I,KEY_I);CASEKEYNAME(Key_J,KEY_J);
//			CASEKEYNAME(Key_K,KEY_K);CASEKEYNAME(Key_L,KEY_L);CASEKEYNAME(Key_M,KEY_M);CASEKEYNAME(Key_N,KEY_N);CASEKEYNAME(Key_O,KEY_O);
//			CASEKEYNAME(Key_P,KEY_P);CASEKEYNAME(Key_Q,KEY_Q);CASEKEYNAME(Key_R,KEY_R);CASEKEYNAME(Key_S,KEY_S);CASEKEYNAME(Key_T,KEY_T);CASEKEYNAME(Key_U,KEY_U);CASEKEYNAME(Key_V,KEY_V);
//			CASEKEYNAME(Key_W,KEY_W);		CASEKEYNAME(Key_X,KEY_Y);		CASEKEYNAME(Key_Y,KEY_Y);		CASEKEYNAME(Key_Z,KEY_Z);
//			CASEKEYNAME(Key_Up ,KEY_Up);		CASEKEYNAME(Key_Down ,KEY_Down);		CASEKEYNAME(Key_Left ,KEY_Left);		CASEKEYNAME(Key_Right ,KEY_Right);
//			CASEKEYNAME(Key_Control ,KEY_Control_L);
//			//no right ctrl in qt?
//			CASEKEYNAME(Key_Alt ,KEY_Alt_L);
//			CASEKEYNAME(Key_Space ,KEY_Space);
//			CASEKEYNAME(Key_Return ,KEY_Return);
//			CASEKEYNAME(Key_Tab ,KEY_Tab);
//			CASEKEYNAME(Key_Shift ,KEY_Shift_L);
//			CASEKEYNAME(Key_Backspace ,KEY_BackSpace);
//			CASEKEYNAME(Key_Escape ,KEY_Escape);
//			CASEKEYNAME(Key_F1 ,KEY_F1);CASEKEYNAME(Key_F2 ,KEY_F2);CASEKEYNAME(Key_F3 ,KEY_F3);CASEKEYNAME(Key_F4 ,KEY_F4);CASEKEYNAME(Key_F5 ,KEY_F5);
//			CASEKEYNAME(Key_F6 ,KEY_F6);CASEKEYNAME(Key_F7 ,KEY_F7);CASEKEYNAME(Key_F8 ,KEY_F8);CASEKEYNAME(Key_F9 ,KEY_F9);CASEKEYNAME(Key_F10 ,KEY_F10);
//			CASEKEYNAME(Key_F11 ,KEY_F11);CASEKEYNAME(Key_F12 ,KEY_F12);
//		default:
//			std::cout << "press:" << event;
//		}
//		QQuickView::keyPressEvent(event);
//	}
//
//	  void QtToOSGView::keyReleaseEvent( QKeyEvent* event){
//
//#define CASEKEYNAME(XXX,NNN) case Qt::XXX :  managedview->getEventQueue()->keyRelease(osgGA::GUIEventAdapter::NNN);break;
//		switch(event->key()){
//			CASEKEYNAME(Key_A,KEY_A);		CASEKEYNAME(Key_B,KEY_B);		CASEKEYNAME(Key_C,KEY_C);		CASEKEYNAME(Key_D,KEY_D);		CASEKEYNAME(Key_E,KEY_E);
//			CASEKEYNAME(Key_F,KEY_F);		CASEKEYNAME(Key_G,KEY_G);		CASEKEYNAME(Key_H,KEY_H);		CASEKEYNAME(Key_I,KEY_I);CASEKEYNAME(Key_J,KEY_J);
//			CASEKEYNAME(Key_K,KEY_K);CASEKEYNAME(Key_L,KEY_L);CASEKEYNAME(Key_M,KEY_M);CASEKEYNAME(Key_N,KEY_N);CASEKEYNAME(Key_O,KEY_O);
//			CASEKEYNAME(Key_P,KEY_P);CASEKEYNAME(Key_Q,KEY_Q);CASEKEYNAME(Key_R,KEY_R);CASEKEYNAME(Key_S,KEY_S);CASEKEYNAME(Key_T,KEY_T);CASEKEYNAME(Key_U,KEY_U);CASEKEYNAME(Key_V,KEY_V);
//			CASEKEYNAME(Key_W,KEY_W);		CASEKEYNAME(Key_X,KEY_Y);		CASEKEYNAME(Key_Y,KEY_Y);		CASEKEYNAME(Key_Z,KEY_Z);
//			CASEKEYNAME(Key_Up ,KEY_Up);		CASEKEYNAME(Key_Down ,KEY_Down);		CASEKEYNAME(Key_Left ,KEY_Left);		CASEKEYNAME(Key_Right ,KEY_Right);
//			CASEKEYNAME(Key_Control ,KEY_Control_L);
//			//no right ctrl in qt?
//			CASEKEYNAME(Key_Alt ,KEY_Alt_L);
//			CASEKEYNAME(Key_Space ,KEY_Space);
//			CASEKEYNAME(Key_Return ,KEY_Return);
//			CASEKEYNAME(Key_Tab ,KEY_Tab);
//			CASEKEYNAME(Key_Shift ,KEY_Shift_L);
//			CASEKEYNAME(Key_Backspace ,KEY_BackSpace);
//			CASEKEYNAME(Key_Escape ,KEY_Escape);
//			CASEKEYNAME(Key_F1 ,KEY_F1);CASEKEYNAME(Key_F2 ,KEY_F2);CASEKEYNAME(Key_F3 ,KEY_F3);CASEKEYNAME(Key_F4 ,KEY_F4);CASEKEYNAME(Key_F5 ,KEY_F5);
//			CASEKEYNAME(Key_F6 ,KEY_F6);CASEKEYNAME(Key_F7 ,KEY_F7);CASEKEYNAME(Key_F8 ,KEY_F8);CASEKEYNAME(Key_F9 ,KEY_F9);CASEKEYNAME(Key_F10 ,KEY_F10);
//			CASEKEYNAME(Key_F11 ,KEY_F11);CASEKEYNAME(Key_F12 ,KEY_F12);
//		default:
//			std::cout << "press:" << event;
//		}
//		QQuickView::keyPressEvent(event);
//	}
//
//	 void QtToOSGView::mousePressEvent(QMouseEvent *event)
//	{
//		QPointF pos = event->windowPos();
//	//	pos.setX((2.0*pos.x()/(float(this->width())))-1.0);
//	//	pos.setY((2.0*pos.y()/(float(this->height())))-1.0);
//	//pos.setX(pos.x()<-1?-1:pos.x()>1?1:pos.x());
//	//pos.setY(pos.y()<-1?-1:pos.y()>1?1:pos.y());
//		switch(event->button())
//		{
//		case Qt::LeftButton:
//			managedview->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 1);break;
//		case Qt::RightButton:
//			managedview->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 3);break;
//		case Qt::MiddleButton:
//			managedview->getEventQueue()->mouseButtonPress(pos.x(), pos.y(), 2);break;
//		}
//		QQuickView::mousePressEvent(event);
//	}
//
//	 void  QtToOSGView::mouseMoveEvent(QMouseEvent *event)
//	{
//		QPointF pos = event->windowPos();
//	//pos.setX((2.0*pos.x()/(float(this->width())))-1.0);
//	//	pos.setY((2.0*pos.y()/(float(this->height())))-1.0);
//	//		pos.setX(pos.x()<-1?-1:pos.x()>1?1:pos.x());
//	//pos.setY(pos.y()<-1?-1:pos.y()>1?1:pos.y());
//		managedview->getEventQueue()->mouseMotion(pos.x(), pos.y());
//		//event->ignore();
//		QQuickView::mouseMoveEvent(event);
//	}
//
//	 void  QtToOSGView::mouseReleaseEvent(QMouseEvent *event)
//	{
//
//		QPointF pos = event->windowPos();
//	//pos.setX((2.0*pos.x()/(float(this->width())))-1.0);
//	//	pos.setY((2.0*pos.y()/(float(this->height())))-1.0);
//	//		pos.setX(pos.x()<-1?-1:pos.x()>1?1:pos.x());
//	//pos.setY(pos.y()<-1?-1:pos.y()>1?1:pos.y());
//	std::cerr<< pos.x()<<" "<<pos.y()<< " released:" << event;
//		switch(event->button())
//		{
//		case Qt::LeftButton:
//			managedview->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 1);break;
//		case Qt::RightButton:
//			managedview->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 3);break;
//		case Qt::MiddleButton:
//			managedview->getEventQueue()->mouseButtonRelease(pos.x(), pos.y(), 2);break;
//		}
//QQuickView::mouseReleaseEvent(event);
//	}
//
//	 void  QtToOSGView::wheelEvent(QWheelEvent *event)
//	{
//		//qDebug() << "wheel:" << event;
//		managedview->getEventQueue()->mouseScroll(
//			event->orientation() == Qt::Vertical ?
//			(event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_UP : osgGA::GUIEventAdapter::SCROLL_DOWN) :
//			(event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_LEFT : osgGA::GUIEventAdapter::SCROLL_RIGHT) );
//
//QQuickView::wheelEvent(event);
//	}
//
//
void  QtToOSGView::resizeEvent(QResizeEvent *event){
	QSize s=event->size();
	//reset view camera andit self
	//		QQuickItem *item=this->	rootObject();
	//		item->setWidth(s.width());
	//				item->setHeight(s.height());
	//		parent()->parent()->parent()->resize(s.width(),s.height());
	//		parent()->parent()->resize(s.width(),s.height());
	//			parent()->resize(s.width(),s.height());
	//resize(s.width(),s.height());
		QQuickView::resizeEvent(event);
		//QPoint p=this->geometry().topLeft();
			//QPoint p=this->geometry().topLeft();
				QPoint p=this->geometry().bottomLeft();
	//		std::cout<<"resize "<<s.width()<<" "<<s.height()<<std::endl;		osg::Viewport * vp=managedview->getCamera()->getViewport();
	//		if(vp->width()!=s.width()||vp->height()!=s.height()){
	//	
		/*
managedview->getCamera()->getGraphicsContext()->resized(0,0,s.width(),s.height());
		managedview->getCamera()->setViewport(0,0,s.width(),s.height());
			managedview->getCamera()->setProjectionMatrix( osg::Matrix::perspective( 30., (double)s.width()/(double)s.height(), 1., 500 ) );
	//*/
		managedview->getEventQueue()->windowResize(p.x(),p.y(),s.width(),s.height());
	//		}
}




void	QtQtToOSGView::showEvent(QShowEvent *event)
{
	osg::Timer::instance()->tick();
	QtToOSGView::showEvent(event);
	/*osg::ref_ptr<MyStatsHandler> stat=new MyStatsHandler();
	std::cout<<"show"<<std::endl;
	stat->getCamera()->setGraphicsContext(managedview->getCamera()->getGraphicsContext());
	stat->reset();

	managedview->addEventHandler(stat);
	managedview->addEventHandler(new osgViewer::WindowSizeHandler);*/

	connect(this,SIGNAL(windowStateChanged(Qt::WindowState )),this,SLOT(pate(Qt::WindowState )));
}


		  void 	QtQtToOSGView::geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry){
			  
	managedview->getEventQueue()->windowResize(newGeometry.x(),newGeometry.y(),newGeometry.width(),newGeometry.height());

		  }
void QtQtToOSGView::pate(Qt::WindowState windowState){
	std::cerr<<"windowstate" <<windowState<<std::endl;
	if(windowState==Qt::WindowFullScreen){
		std::cerr<<"fullscreen"<<width()<<" "<<height()<<std::endl;
			managedview->getEventQueue()->windowResize(0,0,this->width(),this->height());
		//	managedview->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_F);
	}
}

void QtQtToOSGView:: setDockBar(QDockWidget*c){w=c;w->setWindowFlags(Qt::WindowStaysOnTopHint);}
