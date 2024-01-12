#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>


#include "mainwindow.h"
//#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    setWindowTitle(tr("Main Window"));

    openAction = new QAction(QIcon(":/images/Qt"), tr("&Open..."), this);  /*":/images/doc-open"*/
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    statusBar() ;
    resize(500,500);
}

MainWindow::~MainWindow()
{

}
void MainWindow::open()
{
    QDialog dialog(this);
    dialog.setWindowTitle(tr("Hello, dialog!"));
    dialog.exec();

}
