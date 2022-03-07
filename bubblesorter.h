#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include "sorter.h"

class BubbleSorter: private Sorter
{
    public:
        BubbleSorter();
        void sort(int arrToSort[], int N);
};

#endif // BUBBLESORTER_H
