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

int Cmp(struct String str1, struct String str2);

#endif // CMP_H
