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
    BubbleSorter *bubble = new BubbleSorter();
    Selectsorter *select = new Selectsorter();
    Insertsorter *insert = new Insertsorter();
    int arr[] = {10, 9 ,8, 7, 6, 5, 4, 3, 2, 1};
    int N = 10;
    bubble->sort(arr, N);
    qDebug() << "\n";
    select->sort(arr, N);
    qDebug() << "\n";
    insert->sort(arr, N);
    qDebug() << "\n";
    return a.exec();
}
