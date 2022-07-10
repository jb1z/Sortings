#ifndef SORTER_H
#define SORTER_H
#include <QDebug>
#include <QPushButton>
#include <windows.h>

class Sorter{
    public:
        enum SortingType{
            BUBBLE = 1,
            INSERT,
            SELECT,
            QUICK,
            MERGE,
            HEAP,
            COUNT
        };
        virtual void sort(QVector<int> arrToSort, QVector <QPushButton*>& arrButtons) = 0;
        void swap(int &par1, int &par2);
        void swapButtons(QVector <QPushButton*>& arrButtons, int firstButtonIndex, int secondButtonIndex);
        void print(int *arrToSort, int N);
        bool isSorted(int *arrToSort, int N);
        static SortingType getSortingType();
        static void setSortingType(SortingType sortingTypeToSet);
    private:
        static SortingType sortingType_;
};

#endif // SORTER_H
