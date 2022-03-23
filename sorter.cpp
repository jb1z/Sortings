#include "sorter.h"

int Sorter::sortingType;

Sorter::Sorter()
{
    sortingType = 0;
}

int Sorter::getSortingType()
{
    return sortingType;
}

void Sorter::setSortingType(int sortingTypeToSet)
{
    sortingType = sortingTypeToSet;
}

void Sorter::print(int *arrToSort, int N)
{
   for (int i = 0; i < N;i++) qDebug() << arrToSort[i];
}

void Sorter::swapButtons(QVector <QPushButton*>& arrButtons, int firstButtonIndex, int secondButtonIndex)
{
    QPoint firstPoint = arrButtons[firstButtonIndex]->pos();
    QPoint secondPoint = arrButtons[secondButtonIndex]->pos();
    int i = 0;
    int rastX = (secondPoint.rx() - firstPoint.rx()) / 5;
    while(i < 15)
    {
        if(i < 5){
            firstPoint.ry() +=10;
            secondPoint.ry() +=10;
            Sleep(100);
        }
        else if (i >= 5 && i < 10){
            firstPoint.rx() +=rastX;
            secondPoint.rx() -=rastX;
            Sleep(1000);
        }
        else if (i >= 10){
            firstPoint.ry() -=10;
            secondPoint.ry() -=10;
            Sleep(100);
        }
        arrButtons[firstButtonIndex]->move(firstPoint.rx(), firstPoint.ry());
        arrButtons[secondButtonIndex]->move(secondPoint.rx(), secondPoint.ry());
        i++;
    }
    QPushButton* temp = arrButtons[firstButtonIndex];
    arrButtons[firstButtonIndex] = arrButtons[secondButtonIndex];
    arrButtons[secondButtonIndex] = temp;
}

bool Sorter::isSorted(int *arrToSort, int N)
{
    int checker = arrToSort[0];
    for(int i = 1; i < N; i++)
    {
        if(arrToSort[i] < checker) return false;
        checker = arrToSort[i];
    }
    return true;
}

void Sorter::swap(int &par1, int &par2)
{
    int tmp = par1;
    par1 = par2;
    par2 = tmp;
}
