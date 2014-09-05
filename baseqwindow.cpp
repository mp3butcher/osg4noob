#include "baseqwindow.hpp"
#include <QtGui>

#include <QMenuBar>
#include <QApplication>
#include <QTextEdit>
#include <QFileDialog>
#include <QAction>
#include <QStatusBar>
#include <QMessageBox>
 BaseQWindow::BaseQWindow()
 {
    
  //   resize(400, 300);
 }

 void BaseQWindow::newFile()
 {
     BaseQWindow *other = new BaseQWindow;
     other->show();
 }

 void BaseQWindow::open()
 {
     QString fileName = QFileDialog::getOpenFileName(this);
     if (!fileName.isEmpty())
         loadFile(fileName);
 }

 void BaseQWindow::save()
 {
     if (curFile.isEmpty())
         saveAs();
     else
         saveFile(curFile);
 }

 void BaseQWindow::saveAs()
 {
     QString fileName = QFileDialog::getSaveFileName(this);
     if (fileName.isEmpty())
         return;

     saveFile(fileName);
 }

 void BaseQWindow::openRecentFile()
 {
     QAction *action = qobject_cast<QAction *>(sender());
     if (action)
         loadFile(action->data().toString());
 }

 void BaseQWindow::about()
 {
    QMessageBox::about(this, tr("About Recent Files"),
             tr("The <b>Recent Files</b> example demonstrates how to provide a "
                "recently used file menu in a Qt application."));
 }

 void BaseQWindow::createActions()
 {
     newAct = new QAction(tr("&New"), this);
     newAct->setShortcuts(QKeySequence::New);
     newAct->setStatusTip(tr("Create a new file"));
     connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));

     openAct = new QAction(tr("&Open..."), this);
     openAct->setShortcuts(QKeySequence::Open);
     openAct->setStatusTip(tr("Open an existing file"));
     connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

     saveAct = new QAction(tr("&Save"), this);
     saveAct->setShortcuts(QKeySequence::Save);
     saveAct->setStatusTip(tr("Save the document to disk"));
     connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

     saveAsAct = new QAction(tr("Save &As..."), this);
     saveAsAct->setShortcuts(QKeySequence::SaveAs);
     saveAsAct->setStatusTip(tr("Save the document under a new name"));
     connect(saveAsAct, SIGNAL(triggered()), this, SLOT(saveAs()));

     for (int i = 0; i < MaxRecentFiles; ++i) {
         recentFileActs[i] = new QAction(this);
         recentFileActs[i]->setVisible(false);
         connect(recentFileActs[i], SIGNAL(triggered()),
                 this, SLOT(openRecentFile()));
     }

     exitAct = new QAction(tr("E&xit"), this);
     exitAct->setShortcuts(QKeySequence::Quit);
     exitAct->setStatusTip(tr("Exit the application"));
     connect(exitAct, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));

     aboutAct = new QAction(tr("&About"), this);
     aboutAct->setStatusTip(tr("Show the application's About box"));
     connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

     aboutQtAct = new QAction(tr("About &Qt"), this);
     aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
     connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
 }

 void BaseQWindow::createMenus()
 {
     fileMenu = menuBar()->addMenu(tr("&File"));
     fileMenu->addAction(newAct);
     fileMenu->addAction(openAct);
     fileMenu->addAction(saveAct);
     fileMenu->addAction(saveAsAct);
     separatorAct = fileMenu->addSeparator();
     for (int i = 0; i < MaxRecentFiles; ++i)
         fileMenu->addAction(recentFileActs[i]);
     fileMenu->addSeparator();
     fileMenu->addAction(exitAct);
     updateRecentFileActions();

     menuBar()->addSeparator();

     helpMenu = menuBar()->addMenu(tr("&Help"));
     helpMenu->addAction(aboutAct);
     helpMenu->addAction(aboutQtAct);
 }

 void BaseQWindow::loadFile(const QString &fileName)
 {
     QFile file(fileName);
     if (!file.open(QFile::ReadOnly | QFile::Text)) {
         QMessageBox::warning(this, tr("Recent Files"),
                              tr("Cannot read file %1:\n%2.")
                              .arg(fileName)
                              .arg(file.errorString()));
         return;
     }

     QTextStream in(&file);
     QApplication::setOverrideCursor(Qt::WaitCursor);
     textEdit->setPlainText(in.readAll());
     QApplication::restoreOverrideCursor();

     setCurrentFile(fileName);
     statusBar()->showMessage(tr("File loaded"), 2000);
 }

 void BaseQWindow::saveFile(const QString &fileName)
 {
     QFile file(fileName);
     if (!file.open(QFile::WriteOnly | QFile::Text)) {
         QMessageBox::warning(this, tr("Recent Files"),
                              tr("Cannot write file %1:\n%2.")
                              .arg(fileName)
                              .arg(file.errorString()));
         return;
     }

     QTextStream out(&file);
     QApplication::setOverrideCursor(Qt::WaitCursor);
     out << textEdit->toPlainText();
     QApplication::restoreOverrideCursor();

     setCurrentFile(fileName);
     statusBar()->showMessage(tr("File saved"), 2000);
 }

 void BaseQWindow::setCurrentFile(const QString &fileName)
 {
     curFile = fileName;
     setWindowFilePath(curFile);

     QSettings settings;
     QStringList files = settings.value("recentFileList").toStringList();
     files.removeAll(fileName);
     files.prepend(fileName);
     while (files.size() > MaxRecentFiles)
         files.removeLast();

     settings.setValue("recentFileList", files);

     foreach (QWidget *widget, QApplication::topLevelWidgets()) {
         BaseQWindow *mainWin = qobject_cast<BaseQWindow *>(widget);
         if (mainWin)
             mainWin->updateRecentFileActions();
     }
 }

 void BaseQWindow::updateRecentFileActions()
 {
     QSettings settings;
     QStringList files = settings.value("recentFileList").toStringList();

     int numRecentFiles = qMin(files.size(), (int)MaxRecentFiles);

     for (int i = 0; i < numRecentFiles; ++i) {
         QString text = tr("&%1 %2").arg(i + 1).arg(strippedName(files[i]));
         recentFileActs[i]->setText(text);
         recentFileActs[i]->setData(files[i]);
         recentFileActs[i]->setVisible(true);
     }
     for (int j = numRecentFiles; j < MaxRecentFiles; ++j)
         recentFileActs[j]->setVisible(false);

     separatorAct->setVisible(numRecentFiles > 0);
 }

 QString BaseQWindow::strippedName(const QString &fullFileName)
 {
     return QFileInfo(fullFileName).fileName();
 }
