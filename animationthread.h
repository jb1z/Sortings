#ifndef ANIMATIONTHREAD_H
#define ANIMATIONTHREAD_H
#include "bubblesorter.h"
#include <QThread>
#include <windows.h>
#include <QDebug>

class animationThread:public QThread
{
     Q_OBJECT
public:
    animationThread();
    void runSorting(int* arrToSort, QVector <QPushButton*> arrButtons, int N);
    int* arr = new int[10];
    int N = 10;
    QVector <QPushButton*> arrButtons;
    BubbleSorter* bubble = new BubbleSorter();
protected:
     void run();
};

#endif // ANIMATIONTHREAD_H
