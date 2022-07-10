#ifndef COUNTSORTER_H
#define COUNTSORTER_H
#include "sorter_0_base.h"

class countsorter: public Sorter{
    public:
        void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) override;
};

#endif // COUNTSORTER_H
