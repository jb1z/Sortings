#include "sorter.h"

Sorter::Sorter()
{

}

void Sorter::print(int *arrToSort, int N)
{
   for(int i = 0; i < N;i++) qDebug() << arrToSort[i];
}

bool Sorter::isSorted(int *arrToSort, int N)
{
    int checker = arrToSort[0];
    for(int i = 1; i < N; i++)
    {
        if(arrToSort[i] < checker) return false;
        checker = arrToSort[i];
    }
    return true;
}

void Sorter::swap(int &par1, int &par2)
{
    int tmp = par1;
    par1 = par2;
    par2 = tmp;
}
