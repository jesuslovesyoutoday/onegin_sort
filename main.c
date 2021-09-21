#include <stdio.h>
#include "string.h"
#include "input.h"
#include "clear.h"
#include "parser.h"
#include "cmp.h"

int main()
{
    char input_file[200] = "text.txt";
    char output_file[200] = "text_out.txt";
    char* buffer = NULL;

    enum InputStatus status = Input(input_file, output_file, &buffer);
    
    switch (status) {
    case EMPTY_FILE:
        puts("Input file is empty\n");
        break;
    case DOESNT_EXIST:
        puts("File doesn't exist\n");
        break;
    case OK:
        puts("File is ok\n");
        break;
    default:
        puts("Unknown error");
        break;
    }

    int string_amount = 0;

    struct String* index = NULL;
    index = BufferParser(&buffer, &string_amount);

    printf("%d %d %d\n", index[0].length, index[1].length, index[2].length);

    int outcome = Cmp(index[0], index[1]);
    printf("outcome = %d\n", outcome);
    printf("amount of strings = %d\n", string_amount);

    //sort();

    //output();

    Clear(buffer, index);

    return 0;
}
