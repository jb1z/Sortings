#include "heapsorter.h"

heapsorter::heapsorter()
{

}

void heapsorter::make(int *arr, int n)
{
    for(int i = n/2;i>=1;--i)
    {
        for(int j=1;j<=n/2;)
        {
            int k = j*2;
            if(k+1<=n && arr[k]<arr[k+1])k++;
            if(arr[j]<arr[k])
            {
                this->swap(arr[k], arr[j]);
                j = k;
            }
            else break;
        }
    }
}

void heapsorter::sort(int *arrToSort, int n)
{
    int *buff = new int[n+1];
    for(int i = 0; i < n;++i)
    {
        this->insert(buff,i,arrToSort[i]);
    }
    for(int i = 0; i < n;i++)
    {
        arrToSort[n - 1 - i] = buff[1];
        this->pop(buff,n - i);
    }
    delete []buff;
}

void heapsorter::insert(int *arr, int n, int x)
{
    arr[n+1] = x;
    for(int i = n+1; i> 1;)
    {
        if(arr[i]>arr[i/2])
        {
            this->swap(arr[i], arr[i/2]);
            i=i/2;
        }
        else break;
    }
}

void heapsorter::pop(int *arr, int n)
{
    this->swap(arr[n],arr[1]);
    for(int i = 1; 2*i<n;)
    {
        i*=2;
        if(i+1<n && arr[i]<arr[i+1])i++;
        if(arr[i/2]<arr[i])swap(arr[i/2],arr[i]);
    }
}
