#include "sorter_1_bubble.h"

void BubbleSorter::sort (QVector<int> arrToSort, QVector <QPushButton*>& arrButtons){
    for(int i =0; i < arrToSort.size() - 1;i++){
        for(int j = 0; j < arrToSort.size() - 1;j++){
            //For visualising comparisons
            arrButtons[j]->setDisabled(true);
            arrButtons[j + 1]->setDisabled(true);
            Sleep(500);
            arrButtons[j]->setDisabled(false);
            arrButtons[j + 1]->setDisabled(false);
            if(arrToSort[j] > arrToSort[j + 1]){
                this->swap(arrToSort[j], arrToSort[j + 1]);
                this->swapButtons(arrButtons, j, j + 1);
            }
        }
    }  
}
