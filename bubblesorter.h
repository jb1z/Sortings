#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include "sorter.h"
#include <QPushButton>
#include <QPoint>

class BubbleSorter: private Sorter
{
    public:
        BubbleSorter();
        void sort(int arrToSort[], QVector <QPushButton*> arrButtons, int N);
};

#endif // BUBBLESORTER_H
