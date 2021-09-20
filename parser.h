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
//-----------------------------------

struct String* BufferParser(char** buffer);

#endif // PARSER_H
