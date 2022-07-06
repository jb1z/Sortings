#ifndef MERGESORTER_H
#define MERGESORTER_H
#include "sorter_0_base.h"

class mergesorter: public Sorter
{
public:
    mergesorter();
    void sort(int* a, int a_len, int* b, int b_len, int* c);
};

#endif // MERGESORTER_H
