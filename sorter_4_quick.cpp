#include "sorter_4_quick.h"

quicksorter::quicksorter()
{

}

void quicksorter::sort(int arrToSort[], int N)
{
        int i = 0;
        int j = N - 1;
        bool side = 0;
        while(i!=j)
        {
            if(arrToSort[i] > arrToSort[j])
            {
                this->swap(arrToSort[i], arrToSort[j]);
                side = (!side);
            }
            if(side)++i;
            else --j;
        }
        if(i > 1) sort(arrToSort, i);
        if(N > i + 1) sort(arrToSort + (i + 1), N - (i + 1));
}
