#include "bubblesorter.h"

BubbleSorter::BubbleSorter()
{

}

void BubbleSorter::sort(int arrToSort[], int N)
{
    for(int i =0; i < N - 1;i++)
    {
        for(int j = 0; j < N - 1;j++)
        {
            if(arrToSort[j] > arrToSort[j + 1]) this->swap(arrToSort[j], arrToSort[j + 1]);
        }
    }
    this->print(arrToSort, N);
    if(this->isSorted(arrToSort, N)) qDebug() << "Sorted";
    else qDebug() << "Not sorted";
}
