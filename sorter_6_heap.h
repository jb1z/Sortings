#ifndef HEAPSORTER_H
#define HEAPSORTER_H
#include "sorter_0_base.h"

class heapsorter: public Sorter{
    public:
        void make(int *arr, int n);
        void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) override;
        void insert(int *arr, int n, int x);
        void pop(int *arr, int n);
};

#endif // HEAPSORTER_H
