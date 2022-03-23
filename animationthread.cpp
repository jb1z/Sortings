#include "animationthread.h"

animationThread::animationThread()
{

}

void animationThread::runSorting(int *arrToSort, QVector<QPushButton *> arrButtons, int N)
{
    this->N = N;
    for(int i = 0; i < N;i++){
        this->arr[i] = arrToSort[i];
        this->arrButtons.append(arrButtons[i]);
    }
    this->start();
}

void animationThread::run()
{
    bubble->sort(arr, arrButtons, N);
}
