#include "cmp.h"
#include <assert.h>
#include <stdio.h>

int Cmp(struct String str1, struct String str2)
{
    assert(str1.address != NULL);
    assert(str2.address != NULL);
    assert(str1.length  != 0);
    assert(str2.length  != 0);

    char* ptr1 = str1.address;
    char* ptr2 = str2.address;
    
    do
    {
        if (*ptr1 == '\0')
        {
            break;
        }
        ptr1++;
        ptr2++;
    }while(*ptr1 == *ptr2);
    
    if (*ptr1 > *ptr2)
    {
        return 1;
    }
    else if (*ptr1 < *ptr2)
    {
        return 2;
    }
    else 
    {
        return 0;
    }
}
