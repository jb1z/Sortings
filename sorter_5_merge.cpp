#include "sorter_5_merge.h"

mergesorter::mergesorter()
{

}

void mergesorter::sort(int* a, int a_len, int* b, int b_len, int* c)
{
    int i = 0;
    int j = 0;
    for(; i < a_len && j < b_len;)
    {
        if(a[i] < b[j])
        {
            c[i + j] = a[i];
            ++i;
        }
        else
        {
            c[i + j] = b[j];
            ++j;
        }
    }
    if(i == a_len)
    {
        for(;j = b_len;++j) c[i + j] = b[j];
    }
    else
    {
        for(;i < a_len;++i) c[i+j] = a[i];
    }
}
