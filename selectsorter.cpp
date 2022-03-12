#include "selectsorter.h"

Selectsorter::Selectsorter()
{

}
void Selectsorter::sort(int* arrToSort, QVector <QPushButton*> arrButtons, int N)
{
    for(int i = 0; i < N - 1;i++)
    {
        int min_index = i;
        for(int j = i + 1;j < N;j++)
        {
            if(arrToSort[j] < arrToSort[min_index]) min_index = j;
        }
        this->swap(arrToSort[i], arrToSort[min_index]);
        this->swapButtons(arrButtons, i, min_index);
    }
}
