#include "animationthread.h"

animationThread::animationThread()
{
    bubble = new BubbleSorter();
    insert = new Insertsorter();
    select = new Selectsorter();
}

void animationThread::runSorting(int *arrToSort, QVector<QPushButton *> arrButtons, int N, int sortingTypeToSet)
{
    this->N = N;
    this->sortingTypeThread = sortingTypeToSet;
    for(int i = 0; i < N;i++){
        this->arr[i] = arrToSort[i];
        this->arrButtons.append(arrButtons[i]);
    }
    this->start();
}

void animationThread::run()
{
    switch (this->sortingTypeThread) {
        case 1:{
            bubble->sort(arr, arrButtons, N);
        }
        case 3:{
            select->sort(arr, arrButtons, N);
        }
    }

}
