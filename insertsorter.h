#ifndef INSERTSORTER_H
#define INSERTSORTER_H
#include "sorter.h"

class Insertsorter: public Sorter
{
public:
    Insertsorter();
    void sort(int* arrToSort, QVector <QPushButton*>& arrButtons, int N);
};

#endif // INSERTSORTER_H
