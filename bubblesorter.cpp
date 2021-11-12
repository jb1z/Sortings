#include "bubblesorter.h"

bubbleSorter::bubbleSorter()
{

}
void bubbleSorter::print(int *arrToSort, int N)
{
   for(int i = 0; i < N;i++)qDebug() << arrToSort[i];
}

void bubbleSorter::swap(int &par1, int &par2)
{
    int tmp = par1;
    par1 = par2;
    par2 = tmp;
}

void bubbleSorter::sort(int* arrToSort, int N)
{
    for(int i =0; i < N - 1;i++)
    {
        for(int j = 0; j < N - 1;j++)
        {
            if(arrToSort[j] > arrToSort[j + 1]) this->swap(arrToSort[j], arrToSort[j + 1]);
        }
    }
    this->print(arrToSort, N);
}
