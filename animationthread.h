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
    void runSorting(int* arrToSort, QVector <QPushButton*> arrButtons, int N, int sortingType);
    int* arr = new int[10];
    int N = 10;
    QVector <QPushButton*> arrButtons;
    BubbleSorter* bubble = new BubbleSorter();
    Insertsorter* insert = new Insertsorter();
    Selectsorter* select = new Selectsorter();
protected:
     void run();
};

#endif // ANIMATIONTHREAD_H
