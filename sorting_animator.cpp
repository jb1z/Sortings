#include "sorting_animator.h"

animationThread::animationThread(){
    bubble = new BubbleSorter();
    insert = new Insertsorter();
    select = new Selectsorter();
}

void animationThread::runSorting(QVector<int> arrToSort, QVector<QPushButton *>* arrButtons, Sorter::SortingType sortingTypeToSet){
    this->sortingTypeThread = sortingTypeToSet;
    this->arrButtonsThread = arrButtons;
    this->arrToSortThread = arrToSort;
    this->start();
}

void animationThread::run(){
    if(this->sortingTypeThread == Sorter::SortingType::BUBBLE){
        bubble->sort(arrToSortThread, *arrButtonsThread);
    }
    else if(this->sortingTypeThread == Sorter::SortingType::INSERT){
        insert->sort(arrToSortThread, *arrButtonsThread);
    }
    else if(this->sortingTypeThread == Sorter::SortingType::SELECT){
        select->sort(arrToSortThread, *arrButtonsThread);
    }
}
