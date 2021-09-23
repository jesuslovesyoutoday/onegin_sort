#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "input.h"
#include "parser.h"
#include "qsort.h"
#include "output.h"
#include "file_status.h"
#include "cmp.h"

int main()
{
    char input_file[200] = "text.txt";
    char output_file[200] = "text_out.txt";
    char* buffer = NULL;
	
    enum FileStatus status = Input(input_file, output_file, &buffer);
    FileStatus(status);

    int string_amount = 0;

    struct String* index = NULL;
    index = BufferParser(&buffer, &string_amount);
    
    
    Qsort(index, 0, string_amount - 1);

    enum FileStatus status_out = Output(index, output_file, string_amount);
    FileStatus(status_out);
    
    RevQsort(index, 0, string_amount - 1);
    
    enum FileStatus status_out2 = Output(index, output_file, string_amount);
    FileStatus(status_out2);
    
    PtrQsort(index, 0, string_amount - 1);
    
    enum FileStatus status_out3 = Output(index, output_file, string_amount);
    FileStatus(status_out3);
    
	free(buffer);
	free(index);

    return 0;
}
