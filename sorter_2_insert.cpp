#include "sorter_2_insert.h"

Insertsorter::Insertsorter()
{

}
void Insertsorter::sort(int* arrToSort, QVector <QPushButton*>& arrButtons, int N)
{
    for(int i = 1; i < N; i++)
    {
        int temp = arrToSort[i];
        int j = i;
        arrButtons[j]->setDisabled(true);
        upAndDownButton(arrButtons[j], 10);
        for(; j> 0;j--)
        {
            arrButtons[j - 1]->setDisabled(true);
            Sleep(250);
            arrButtons[j - 1]->setDisabled(false);
            if(temp < arrToSort[j - 1])
            {
                arrToSort[j] = arrToSort[j - 1];
                shiftButton(arrButtons, j, j - 1);
            }
            else break;
        }
        arrToSort[j] = temp;      
        upAndDownButton(arrButtons[j], -10);
        arrButtons[j]->setDisabled(false);
    }
}

void Insertsorter::upAndDownButton(QPushButton *button, int rotationY)
{
    QPoint point = button->pos();
    for(int i = 0; i < 5; i++)
    {
        point.ry()+=rotationY;
        button->move(point.rx(), point.ry());
        Sleep(100);
    }

}

void Insertsorter::shiftButton(QVector<QPushButton *> &arrButtons, int firstButtonIndex, int secondButtonIndex)
{
    QPoint firstPoint = arrButtons[firstButtonIndex]->pos();
    QPoint secondPoint = arrButtons[secondButtonIndex]->pos();
    int i = 0;
    while(i < 5)
    {
        firstPoint.rx()-=10;
        secondPoint.rx()+=10;
        arrButtons[firstButtonIndex]->move(firstPoint.rx(), firstPoint.ry());
        arrButtons[secondButtonIndex]->move(secondPoint.rx(), secondPoint.ry());
        Sleep(100);
        i++;
    }
    QPushButton* temp = arrButtons[firstButtonIndex];
    arrButtons[firstButtonIndex] = arrButtons[secondButtonIndex];
    arrButtons[secondButtonIndex] = temp;
}
