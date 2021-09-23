#ifndef CMP_H
#define CMP_H

#include "parser.h"

//--------------------------------------
//!
//! Compares two strings alphabetically
//! 
//! @param[in] <str1> first string
//! @param[in] <str2> second string
//!
//! @return outcome of comparison
//!
//! @note: if str1 > str2  - returns 1
//!        if str2 > str1  - returns 2
//!        if str1 == str2 - returns 0
//!
//--------------------------------------

int Cmp(struct String* str1, struct String* str2);

//-------------------------------------
//! 
//! Compares two strings alphabetically
//! from the end to the begin
//!
//! @param[in] <str1> first string
//! @param[in] <str2> second string
//!
//! @note: if str1 > str2  - returns 1
//!        if str2 > str1  - returns 2
//!        if str1 == str2 - returns 0
//!
//-------------------------------------

int RevCmp(struct String* str1, struct String* str2);

//----------------------------------------
//!
//! Compares pointers to strings in buffer
//!
//! @param[in] <ptr1> first string
//! @param[in] <ptr2> second string
//!
//! @note: if ptr1 >  ptr2 - returns 1
//!        if ptr2 >  ptr1 - returns 2
//!        if ptr1 == ptr2 - returns 0
//!
//----------------------------------------

int PtrCmp(struct String* ptr1, struct String* ptr2);

#endif // CMP_H
