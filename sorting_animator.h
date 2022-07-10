#ifndef ANIMATIONTHREAD_H
#define ANIMATIONTHREAD_H
#include "sorter_0_base.h"
#include "sorter_1_bubble.h"
#include "sorter_2_insert.h"
#include "sorter_3_select.h"
#include <QThread>
#include <windows.h>
#include <QDebug>

class animationThread:public QThread
{
     Q_OBJECT
public:
    animationThread();
    void runSorting(int* arrToSort, QVector <QPushButton*>* arrButtons, int N, Sorter::SortingType sortingTypeToSet);
    int* arrToSortThread = new int[10];
    int N = 10;
    int sortingTypeThread;
    QVector <QPushButton*>* arrButtonsThread;
    BubbleSorter* bubble;
    Insertsorter* insert;
    Selectsorter* select;
protected:
     void run();
};

#endif // ANIMATIONTHREAD_H
