#include "qsort.h"
#include "cmp.h"
#include <stdio.h>

static void swap(struct String* index, int i, int j)
{
    struct String temp = index[i];
    index[i] = index[j];
    index[j] = temp;
}

void Qsort(struct String* index, int left, int right)
{
    int i, last;
    if (left >= right)
    {
        return;
    }
    swap(index, left,  (left + right)/2);
    last = left;
    for (i = left+1; i <= right; ++i)
    {
        if (Cmp(index[i], index[left]) == 2)
        {
            swap(index, ++last, i);
        }
    }
    swap(index, left, last);
    Qsort(index, left, last-1);
    Qsort(index, last+1, right);
}
