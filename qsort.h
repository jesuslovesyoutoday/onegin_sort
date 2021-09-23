#ifndef QSORT_H
#define QSORT_H

#include "parser.h"
#include <stddef.h>

//-----------------------------------------
//!
//! Hoars' sort for strings in the forward
//! direction
//!
//! @param[out] <index> array of pointers to
//! strings in buffer
//!
//! @param[in] <size> size of args' type
//!
//! @param[in] <left> number of element to 
//!                     start sorting with
//! @param[in] <right>  number of the last 
//!                   element to be sorted
//!
//! @param[in] <cmp> comparator function
//!
//-----------------------------------------

void Qsort(void* index, size_t size, int left, int right, int (*cmp)(struct String*, struct String*));

#endif // QSORT_H
