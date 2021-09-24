#include "qsort.h"
#include "cmp.h"
#include <stdio.h>

//--------------------------------------
//!
//! Swaps two arguments
//!
//! @param[in] <index> pointer to array
//!
//! @param[in] <size> size of data type
//!
//! @param[in] <i> index of first arg
//!
//! @param[in] <j> index of second arg
//!
//--------------------------------------
static void swap(void* index, size_t size, int i, int j)
{
	void*  ptr1 = index + size * i;
	void*  ptr2 = index + size * j;
	unsigned char* p1 = ptr1;
	unsigned char* p2 = ptr2;
	unsigned char tmp;
	
    for (int k = 0; k < size; k++)
    {
		/*p2[k] = p1[k] - p2[k];
		p1[k] = p1[k] - p2[k];
		p2[k] = p1[k] + p2[k];*/
		tmp = p1[k];
		p1[k] = p2[k];
		p2[k] = tmp;
	}
}

void Qsort(void* index, size_t size, int left, int right, 
		   int (*cmp)(struct String*, struct String*))
{
    int i, last;
    if (left >= right)
    {
        return;
    }
    swap(index, size, left,  (left + right)/2);
    last = left;
    for (i = left+1; i <= right; ++i)
    {
        if (cmp((index + i*size), (index + left*size)) == 2)
        {
            swap(index, size, ++last, i);
        }
    }
    swap(index, size, left, last);
    Qsort(index, size, left, last-1, cmp);
    Qsort(index, size, last+1, right, cmp);
}
