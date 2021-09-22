#include <stdio.h>
#include "string.h"
#include "input.h"
#include "clear.h"
#include "parser.h"
#include "cmp.h"
#include "qsort.h"
#include "output.h"
#include "file_status.h"

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
    
    int outcome = Cmp(index[5], index[10]);
    printf("outcome = %d\n", outcome);
    
    Qsort(index, 0, string_amount - 1);

    enum FileStatus status_out = Output(index, output_file, string_amount);
    FileStatus(status_out);

    Clear(buffer, index);

    return 0;
}
