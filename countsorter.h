#ifndef COUNTSORTER_H
#define COUNTSORTER_H
#include "sorter.h"

class countsorter: private Sorter
{
public:
    countsorter();
    void sort(int arrToSort[], int m, int n);
};

#endif // COUNTSORTER_H
