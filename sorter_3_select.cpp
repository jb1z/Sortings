#include "sorter_3_select.h"

void Selectsorter::sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons){
    for(int i = 0; i < arrToSort.size() - 1;i++){
        int min_index = i;
        arrButtons[i]->setDisabled(true);
        for(int j = i + 1;j < arrToSort.size();j++){
            arrButtons[j]->setDisabled(true);
            Sleep(500);
            arrButtons[j]->setDisabled(false);
            if(arrToSort[j] < arrToSort[min_index]){
                if(min_index != i)arrButtons[min_index]->setDisabled(false);
                min_index = j;
                arrButtons[min_index]->setDisabled(true);
            }
        }       
        if(i!=min_index){
            this->swap(arrToSort[i], arrToSort[min_index]);
            this->swapButtons(arrButtons, i, min_index);
            arrButtons[min_index]->setDisabled(false);
        }
        arrButtons[i]->setDisabled(false);
    }
}
