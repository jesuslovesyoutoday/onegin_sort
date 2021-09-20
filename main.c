#include <stdio.h>
#include "string.h"
#include "input.h"
#include "clear.h"

int main()
{
    char input_file[200] = "text.txt";
    char output_file[200] = "text_out.txt";
    char* buffer = NULL;

    enum InputStatus status = input(input_file, output_file, &buffer);
    switch (status) {
    case EMPTY_FILE:
        puts("Input file is empty\n");
        break;
    case DOESNT_EXIST:
        puts("File doesn't exist\n");
        break;
    case OK:
        break;
    default:
        puts("Unknown error");
        break;
    }

    //sort();

    //output();

    clear(buffer);

    return 0;
}
