#include "output.h"
#include <stdio.h>
#include <assert.h>

enum FileStatus Output(struct String* index, char* output_file, int string_amount)
{
	assert(output_file);
	assert(index);
	
    FILE* fin = fopen(output_file, "a");
    if (fin == NULL)
    {
        return DOESNT_EXIST;
    }
    
    for (int i = 0; i < string_amount; i++)
    {
        if (fputs (index[i].address, fin) <= 0)
        {
        	return WRITING_ERROR;
        }
        fprintf(fin, "\n");
    }
    
    fprintf(fin, "\n");
    fclose(fin);
    return OK;
}
