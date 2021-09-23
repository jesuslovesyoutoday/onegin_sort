#include "parser.h"
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct String* BufferParser(char** buffer, int* string_amount)
{
	assert(buffer);
    assert(*buffer);
    char* ptr = *buffer;
    
    do
    {
        if (*ptr == '\n')
            (*string_amount)++;
        ptr++;
    } while(*ptr != '\0');

    struct String* str_arr = calloc(*string_amount, sizeof(struct String));

    char* ptr1 = *buffer;
	char* ptr2 = NULL;
	char endline = '\n';

    for(int i = 0; i < *string_amount; i++)
    {
        str_arr[i].address = ptr1;
        ptr2 = ptr1;
        
        ptr1 = strchr(ptr1, endline);

        str_arr[i].length = (size_t)(ptr1 - ptr2);
        while (*ptr1 == endline) ++ptr1;
    }

    for (int i = 0; i < *string_amount; i++)
    {
        *(str_arr[i].address + str_arr[i].length) = '\0';
    }
    return str_arr;
}
