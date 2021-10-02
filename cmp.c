#include "cmp.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Cmp(struct String* str1, struct String* str2)
{
    char* punct_marks = ".,!\"\'?-:;\t ";
    char* ptr1 = str1->address;
    char* ptr2 = str2->address;
    
    do
    {
        ptr1 += strspn(ptr1, punct_marks);
        ptr2 += strspn(ptr2, punct_marks);

        if (*ptr1 == '\0')
        {
            return 2;
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

int RevCmp(struct String* str1, struct String* str2)
{
    char* punct_marks = ".,!\"\'?-:;\t []";
    char  endline = '\0';
    char* ptr1 = strchr(str1->address, endline) - 1;
    char* ptr2 = strchr(str2->address, endline) - 1;
    
    do
    {
		while (strspn(ptr1, punct_marks)) ptr1--;
		while (strspn(ptr2, punct_marks)) ptr2--;
    	
    	if (*ptr1 == '\0' || *ptr2 == '\0')
    	{
    		return 0;
    	}
    	if (tolower(*ptr1) == tolower(*ptr2))
    	{
    		ptr1--;
    		ptr2--;
		}
    } while(tolower(*ptr1) == tolower(*ptr2));
    
    if (tolower(*ptr1) > tolower(*ptr2))
    {
    	return 1;
	}
	if (tolower(*ptr1) < tolower(*ptr2))
	{
		return 2;
	}
	return 0;
}

int PtrCmp(struct String* ptr1, struct String* ptr2)
{
	assert(ptr1);
	assert(ptr2);
	assert(ptr1 != ptr2);
	
	if (ptr1->address > ptr2->address)
	{
		return 1;
	}
	else if (ptr2->address > ptr1->address)
	{
		return 2;
	}
}
