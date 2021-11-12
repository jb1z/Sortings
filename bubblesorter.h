#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include <QDebug>
#include "sorter.h"

class bubbleSorter: sorter
{
    public:
        bubbleSorter();
        void sort(int* arrToSort, int N);
        void swap(int &par1, int &par2);
        void print(int *arrToSort, int N);
};

#endif // BUBBLESORTER_H
