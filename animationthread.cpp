#include "animationthread.h"

animationThread::animationThread()
{
    bubble = new BubbleSorter();
    insert = new Insertsorter();
    select = new Selectsorter();
}

void animationThread::runSorting(int *arrToSort, QVector<QPushButton *>* arrButtons, int N, int sortingTypeToSet)
{
    this->N = N;
    this->sortingTypeThread = sortingTypeToSet;
    this->arrButtonsThread = arrButtons;
    this->arrToSortThread = arrToSort;
    this->start();
}

void animationThread::run()
{
    if(this->sortingTypeThread == 1)
    {
        bubble->sort(arrToSortThread, *arrButtonsThread, N);
    }
    else if(this->sortingTypeThread == 3)
    {
        select->sort(arrToSortThread, *arrButtonsThread, N);
    }
}
