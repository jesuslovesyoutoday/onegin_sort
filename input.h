#ifndef INPUT_H
#define INPUT_H

#include <string.h>

//---------------------------------------
//!
//! Enum to log errors while opening file
//!
//---------------------------------------

enum InputStatus {
    OK = 0,
    DOESNT_EXIST = 1,
    EMPTY_FILE = 2
};

//---------------------------------------
//!
//! Asks user to enter files' names to
//! read from and write to and checks 
//! either they are available or not
//!
//! @param[out] <input_file> name of
//!                          input file
//! @param[out] <output_file> name of
//!                          output file
//! @param[out] <buffer> pointer to the
//!                      allocated memory
//!                      to write input
//!
//!--------------------------------------
    
enum InputStatus Input(char* input_file, char* output_file, char** buffer);

#endif // INPUT_H
