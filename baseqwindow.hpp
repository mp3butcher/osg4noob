#ifndef MAINWINDOW_RECENTFILES_H
#define MAINWINDOW_RECENTFILES_H

#include <QObject>
#include <QList>
#include <QMainWindow>

class QAction;
class QMenu;
class QTextEdit;

class BaseQWindow : public QMainWindow
{
    Q_OBJECT

public:
    BaseQWindow();

private slots:
   virtual void newFile();
   virtual void open();
    virtual void save();
    virtual void saveAs();
    virtual void openRecentFile();
    virtual void about();

protected:
    virtual void createActions();
    virtual void createMenus();
    virtual void loadFile(const QString &fileName);
    virtual void saveFile(const QString &fileName);
    virtual void setCurrentFile(const QString &fileName);
    virtual void updateRecentFileActions();
    virtual QString strippedName(const QString &fullFileName);

    QString curFile;

    QTextEdit *textEdit;
    QMenu *fileMenu;
    QMenu *recentFilesMenu;
    QMenu *helpMenu;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *exitAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *separatorAct;

    enum { MaxRecentFiles = 5 };
    QAction *recentFileActs[MaxRecentFiles];
};

#endif
