#ifndef ANIMATIONTHREAD_H
#define ANIMATIONTHREAD_H
#include "bubblesorter.h"
#include "insertsorter.h"
#include "selectsorter.h"
#include <QThread>
#include <windows.h>
#include <QDebug>

class animationThread:public QThread
{
     Q_OBJECT
public:
    animationThread();
    void runSorting(int* arrToSort, QVector <QPushButton*> arrButtons, int N, int sortingTypeToSet);
    int* arr = new int[10];
    int N = 10;
    int sortingTypeThread;
    QVector <QPushButton*> arrButtons;
    BubbleSorter* bubble;
    Insertsorter* insert;
    Selectsorter* select;
protected:
     void run();
};

#endif // ANIMATIONTHREAD_H
