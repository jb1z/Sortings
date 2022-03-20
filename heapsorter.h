#ifndef HEAPSORTER_H
#define HEAPSORTER_H
#include "sorter.h"

class heapsorter: public Sorter
{
public:
    heapsorter();
    void make(int *arr, int n);
    void sort(int arrToSort[], int N);
    void insert(int *arr, int n, int x);
    void pop(int *arr, int n);
};

#endif // HEAPSORTER_H
