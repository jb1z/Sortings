#ifndef SELECTSORTER_H
#define SELECTSORTER_H
#include "sorter_0_base.h"

class Selectsorter: public Sorter{
    public:
        void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) override;
};

#endif // SELECTSORTER_H
