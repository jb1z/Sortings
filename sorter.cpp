#include "sorter.h"

sorter::sorter()
{

}

void sorter::print(int *arrToSort, int N)
{
   for(int i = 0; i < N;i++) qDebug() << arrToSort[i];
}

void sorter::swap(int &par1, int &par2)
{
    int tmp = par1;
    par1 = par2;
    par2 = tmp;
}
