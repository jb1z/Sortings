#ifndef INSERTSORTER_H
#define INSERTSORTER_H
#include "sorter_0_base.h"

class Insertsorter: public Sorter
{
public:
    Insertsorter();
    void sort(int* arrToSort, QVector <QPushButton*>& arrButtons, int N);
    void shiftButton(QVector <QPushButton*>& arrButtons, int firstButtonIndex, int secondButtonIndex);
    void upAndDownButton(QPushButton* button, int rotationY);
};

#endif // INSERTSORTER_H
