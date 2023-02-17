#include <stdio.h>
#include <stdlib.h>
#define MAX    32768
#define MIN   -32768

int getMax(int arr[])
{
    int max = MIN;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
    
}

int getMin(int arr[])
{
    int min = MAX;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
