#include "clear.h"
#include <stdlib.h>

void Clear(char* buffer, struct String* index)
{
    if(buffer != NULL)
        free(buffer);
    if(index != NULL)
        free(index);
}
