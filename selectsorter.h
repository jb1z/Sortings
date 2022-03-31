#ifndef SELECTSORTER_H
#define SELECTSORTER_H
#include "sorter.h"

class Selectsorter: public Sorter
{
public:
    Selectsorter();
    void sort(int* arrToSort, QVector <QPushButton*>& arrButtons, int N);
};

#endif // SELECTSORTER_H
