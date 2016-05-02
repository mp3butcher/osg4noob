#ifndef QTTOOSGVIEW_H
#define QTTOOSGVIEW_H 1

#include <QtQuick/QQuickView>
namespace osgViewer{
	class View;
}
class QtToOSGView: public QQuickView{
	Q_OBJECT
public:

	osgViewer::View * getManagedView(){return managedview;}
	inline void setManagedview(osgViewer::View*v){managedview=v;}
	protected:
	osgViewer::View *managedview;
	//virtual void keyPressEvent( QKeyEvent* event);
	//virtual void keyReleaseEvent( QKeyEvent* event);
	//virtual void mousePressEvent(QMouseEvent *event);

	//virtual void mouseMoveEvent(QMouseEvent *event);

	//virtual void mouseReleaseEvent(QMouseEvent *event);

	//virtual void wheelEvent(QWheelEvent *event);


	virtual void resizeEvent(QResizeEvent *event);



};
class QDockWidget;
class QtQtToOSGView:public QtToOSGView{
	Q_OBJECT
	QDockWidget* w;
public:
	void setDockBar(QDockWidget*c);

protected:
		virtual void	showEvent(QShowEvent *event);
	
			public slots:
		 void pate(Qt::WindowState windowState);
		
		 virtual void 	geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry);
};


#endif