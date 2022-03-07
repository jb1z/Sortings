#ifndef SORTER_H
#define SORTER_H
#include <QDebug>

class Sorter
{
public:
    Sorter();
    virtual void sort(int arrToSort[], int N) = 0;
    void swap(int &par1, int &par2);
    void print(int *arrToSort, int N);
    bool isSorted(int *arrToSort, int N);
};

#endif // SORTER_H
