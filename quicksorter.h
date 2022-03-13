#ifndef QUICKSORTER_H
#define QUICKSORTER_H
#include "sorter.h"

class quicksorter: public Sorter
{
public:
    quicksorter();
    void sort(int arrToSort[], int N);
};

#endif // QUICKSORTER_H
