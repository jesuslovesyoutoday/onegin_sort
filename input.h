#ifndef INPUT_H
#define INPUT_H

#include <string.h>

//--------------------------------------
//!
//! Asks user to enter files' names to
//! read from and write to and checks 
//! either they are available or not
//!
//! @param[out] <input_file> pointer to
//!                          the name of
//!                          input file
//! @param[out] <buffer> pointer to the
//!                      allocated memory
//!                      to write input
//!
//!-------------------------------------

enum InputStatus {
    OK = 0,
    DOESNT_EXIST = 1,
    EMPTY_FILE = 2
};
    
enum InputStatus input(char* input_file, char* output_file, char** buffer);

#endif // INPUT_H
