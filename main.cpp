#include "mainwindow.h"
#include "bubblesorter.h"
#include "insertsorter.h"
#include "selectsorter.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Selectsorter *select = new Selectsorter();
    Insertsorter *insert = new Insertsorter();
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 10;
    select->sort(arr, N);
    qDebug() << "\n";
    insert->sort(arr, N);
    qDebug() << "\n";
    return a.exec();
}
