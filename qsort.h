#ifndef QSORT_H
#define QSORT_H

#include "parser.h"

//-----------------------------------------
//!
//! Hoars' sort for strings in the forward
//! direction
//!
//! @param[out] <index> array of pointers to
//! strings in buffer
//! @param[in] <left> number of element to 
//!                     start sorting with
//! @param[in] <right>  number of the last 
//!                   element to be sorted
//!
//-----------------------------------------

void Qsort(struct String* index, int left, int right);

void RevQsort(struct String* index, int left, int right);

void PtrQsort(struct String* index, int left, int right);

#endif // QSORT_H
