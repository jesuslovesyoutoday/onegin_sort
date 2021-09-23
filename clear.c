#include "clear.h"
#include <stdlib.h>

// а нужен ли целый файл для одной функции
void Clear(char* buffer, struct String* index)
{
    free(buffer);
    free(index);
}
