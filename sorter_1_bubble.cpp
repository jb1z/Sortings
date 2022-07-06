#include "sorter_1_bubble.h"

BubbleSorter::BubbleSorter()
{

}

void BubbleSorter::sort(int* arrToSort, QVector <QPushButton*>& arrButtons, int N)
{
    for(int i =0; i < N - 1;i++)
    {
        for(int j = 0; j < N - 1;j++)
        {
            //For visualising comparisons
            arrButtons[j]->setDisabled(true);
            arrButtons[j + 1]->setDisabled(true);
            Sleep(500);
            arrButtons[j]->setDisabled(false);
            arrButtons[j + 1]->setDisabled(false);
            if(arrToSort[j] > arrToSort[j + 1])
            {
                this->swap(arrToSort[j], arrToSort[j + 1]);
                this->swapButtons(arrButtons, j, j + 1);
            }
        }
    }  
}
