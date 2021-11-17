#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include "sorter.h"

class bubbleSorter: sorter
{
    public:
        bubbleSorter();
        void sort(int arrToSort[], int N);
};

#endif // BUBBLESORTER_H
