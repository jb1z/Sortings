#ifndef BUBBLESORTER_H
#define BUBBLESORTER_H
#include "sorter_0_base.h"
#include <QPushButton>
#include <QPoint>

class BubbleSorter: public Sorter{
    public:
        void sort (QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) override;
};

#endif // BUBBLESORTER_H
