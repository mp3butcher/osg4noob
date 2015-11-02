#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QQuickView>

namespace Ui {
class MainWindow;
}
class QtToOSGView;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	//virtual void resizeEvent(QResizeEvent *event);
protected:
	virtual void mouseMoveEvent(QMouseEvent*);
	virtual void closeEvent(QCloseEvent *event);
	//	 osg::Group* createdaScene(osg::Image *start_im);
private:

	/*osg::Group *_scene;
	QWidget * createDockBar();*/
	Ui::MainWindow *ui;
	QQuickView* win;//QtToOSGView
	QWidget *container;
	/*QDockWidget * _dock;
	osgOctreeVolume* _ink;*/
	public slots:
		void Quit( );
		void updateTest(int);
		void Fullscreen();
	//	void addDangerousGeode();
signals:
		void wannaDie();
};

#endif // MAINWINDOW_H
