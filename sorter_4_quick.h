#ifndef QUICKSORTER_H
#define QUICKSORTER_H
#include "sorter_0_base.h"

class QuickSorter: public Sorter{
    public:
        void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) override;
};

#endif // QUICKSORTER_H
