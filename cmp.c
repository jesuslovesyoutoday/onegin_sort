#include "cmp.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Cmp(struct String str1, struct String str2)
{
    assert(str1.address != NULL);
    assert(str2.address != NULL);
    assert(str1.length  != 0);
    assert(str2.length  != 0);

    char* punct_marks = ".,!?-:;";
    char* ptr1 = str1.address;
    char* ptr2 = str2.address;
    
    do
    {
        ptr1 += strspn(ptr1, punct_marks);
        ptr2 += strspn(ptr2, punct_marks);

        if (*ptr1 == '\0')
        {
            break;
        }
        ptr1++;
        ptr2++;
    }while(tolower(*ptr1) == tolower(*ptr2));
    
    if (tolower(*ptr1) > tolower(*ptr2))
    {
        return 1;
    }
    else if (tolower(*ptr1) < tolower(*ptr2))
    {
        return 2;
    }
    else 
    {
        return 0;
    }
}
