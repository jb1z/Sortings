#ifndef SORTER_H
#define SORTER_H


class sorter
{
public:
    sorter();
    virtual void sort(int *arrToSort, int N) = 0;
    virtual void swap(int &par1, int &par2) = 0;
    virtual void print(int *arrToSort, int N) = 0;
};

#endif // SORTER_H
