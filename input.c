#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <assert.h>

enum FileStatus Input(char* input_file, char* output_file, char** buffer)
{
    puts("Enter input file name:\n");
    scanf("%s", input_file);
    
    FILE* fin = fopen(input_file, "r");
    if (fin == NULL)
    {
        return DOESNT_EXIST;
    }
    else
    {
        struct stat file_inf;
        stat(input_file, &file_inf);
        int file_size = file_inf.st_size;

        *buffer = calloc(file_size + 5, sizeof(char));
        assert (*buffer != NULL);
        
        size_t size = fread(*buffer, sizeof(char), file_size, fin);
        *(*buffer + size + 1) = '\n';
        *(*buffer + size + 2) = '\0';
        
        fclose(fin);
        
        if (file_size == 0)
        {
            return EMPTY_FILE;
        }
        else
        {
            return OK;
        }
    }

}
