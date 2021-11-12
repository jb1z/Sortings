#ifndef SELECTSORTER_H
#define SELECTSORTER_H
#include "sorter.h"

class selectsorter:sorter
{
public:
    selectsorter();
    void sort(int* arrToSort, int N);
};

#endif // SELECTSORTER_H
