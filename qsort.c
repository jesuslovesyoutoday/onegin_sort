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
static void swap(void* el1, void* el2, size_t size)
{
	unsigned char* p1 = el1;
	unsigned char* p2 = el2;
	unsigned char tmp;
	
    for (int k = 0; k < size; k++)
    {
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
    swap(index + left*size, index + ((left + right)/2)*size, size);
    last = left;
    for (i = left+1; i <= right; ++i)
    {
        if (cmp((index + i*size), (index + left*size)) == 2)
        {
            int j = ++last;
            swap(index + j*size, index + i*size, size);
        }
    }
    swap(index + left*size, index + last*size, size);
    Qsort(index, size, left, last-1, cmp);
    Qsort(index, size, last+1, right, cmp);
}
