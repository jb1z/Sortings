#ifndef COUNTSORTER_H
#define COUNTSORTER_H
#include "sorter.h"

class countsorter: public Sorter
{
public:
    countsorter();
    void sort(int arrToSort[], int m, int n);
};

#endif // COUNTSORTER_H
