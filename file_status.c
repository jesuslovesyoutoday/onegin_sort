#include "file_status.h"
#include <stdio.h>

void FileStatus(enum FileStatus status)
{
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
    	case WRITING_ERROR:
    		puts("Error while writing to a file\n");
    		break;
    	default:
    	    puts("Unknown error");
    	    break;
    	}
 }
