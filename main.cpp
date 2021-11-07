#include "mainwindow.h"
#include "bubblesorter.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    bubbleSorter bubble;
    w.show();
    qDebug() << "5";
    return a.exec();
}
