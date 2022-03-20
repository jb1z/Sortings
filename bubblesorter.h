#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include "sorter.h"
#include <QPushButton>
#include <QPoint>

class BubbleSorter: public Sorter
{
    public:
        BubbleSorter();
        void sort(int* arrToSort, QVector <QPushButton*> arrButtons, int N);
};

#endif // BUBBLESORTER_H
