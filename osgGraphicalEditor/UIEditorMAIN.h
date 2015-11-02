#include <QApplication>
class MainWindow;
class MainEntry :public QApplication{
	  Q_OBJECT
public:
	MainEntry(int &argc,char** argv);
 MainWindow * gui;
	public slots:
	void killit();
};
