#ifndef INSERTSORTER_H
#define INSERTSORTER_H
#include "sorter_0_base.h"

class Insertsorter: public Sorter{
    public:
        void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons)  override ;
        void shiftButton(QVector <QPushButton*>& arrButtons, int firstButtonIndex, int secondButtonIndex);
        void upAndDownButton(QPushButton* button, int rotationY);
};

#endif // INSERTSORTER_H
