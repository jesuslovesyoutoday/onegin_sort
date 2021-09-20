#include "clear.h"
#include <stdlib.h>

void clear(char* buffer)
{
    if(buffer != NULL)
        free(buffer);
}
