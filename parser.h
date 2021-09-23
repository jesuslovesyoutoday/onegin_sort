#ifndef PARSER_H
#define PARSER_H

//--------------------------------------
//!
//! Struct to describe strings in buffer
//!
//--------------------------------------

struct String
{
    char* address;
    int length;
};

//-----------------------------------
//!
//! Initialize array with info about 
//! strings in buffer
//!
//! @param[out] <buffer> pointer to
//! buffer where the text is stored
//!
//! @param[in] <string_amount>
//!          amount of strings
//!
//! @note: allocates memory
//!
//----------------------------------

struct String* BufferParser(char** buffer, int* string_amount);

#endif // PARSER_H
