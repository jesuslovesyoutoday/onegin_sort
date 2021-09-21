#include "parser.h"
#include <stdlib.h>
#include <assert.h>

struct String* BufferParser(char** buffer)
{
    assert(*buffer);
    char* ptr = *buffer;
    int string_amount = 0;
    do
    {
        if (*ptr == '\n')
            string_amount++;
        ptr++;
    } while(*ptr != '\0');

    struct String* str_arr = calloc(string_amount, sizeof(struct String));

    int symb_amount = 0;
    char* ptr1 = *buffer;

    for(int i = 0; i < string_amount; i++)
    {
        str_arr[i].address = ptr1;
        do
        {
            symb_amount ++;
            ptr1++;
        } while(*ptr1 != '\n');

        str_arr[i].length = symb_amount;
        ptr1 ++;
        symb_amount = 0;
    }

    char* ptr2 = *buffer;
    for (int i = 0; i < string_amount; i++)
    {
        *(str_arr[i].address + str_arr[i].length) = '\0';
    }
    return str_arr;
}
