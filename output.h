#ifndef OUTPUT_H
#define OUTPUT_H

#include "parser.h"
#include "input.h"

//---------------------------------------
//!
//! Prints string array to a file
//!
//! @param[in] <index> array of strings
//! @param[in] <output_file> name of file
//! @param[in] <string_amount> amount of
//!                    strings in buffer
//!
//---------------------------------------
enum FileStatus Output(struct String* index, char* ouput_file, int string_amount);

#endif // OUTPUT_H
