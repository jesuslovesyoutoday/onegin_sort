#include "output.h"
#include <stdio.h>

enum FileStatus Output(struct String* index, char* output_file, int string_amount)
{
    FILE* fin = fopen(output_file, "w");
    if (fin == NULL)
    {
        return DOESNT_EXIST;
    }
    else
    {
        for (int i = 0; i < string_amount; i++)
        {
            if (fputs (index[i].address, fin) <= 0)
            {
            	return WRITING_ERROR;
            }
            fprintf(fin, "\n");
        }
    }
    fclose(fin);
    return OK;
}
