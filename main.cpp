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
    //w.show();
    bubbleSorter *bubble = new bubbleSorter();
    selectsorter *select = new selectsorter();
    insertsorter *insert = new insertsorter();
    int arr[] = {10, 9 ,8, 7, 6, 5, 4, 3, 2, 1};
    int N = 10;
    bubble->sort(arr, N);
    qDebug() << "\n";
    select->sort(arr, N);
    qDebug() << "\n";
    insert->sort(arr, N);
    return a.exec();
}
