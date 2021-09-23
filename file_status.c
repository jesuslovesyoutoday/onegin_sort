#include "file_status.h"
#include <stdio.h>

void FileStatus(enum FileStatus status)
{
	switch (status) {
    	case EMPTY_FILE:
    	    puts("Input file is empty");
    	    break;
    	case DOESNT_EXIST:
    	    puts("File doesn't exist");
    	    break;
    	case OK:
    	    puts("File is ok");
    	    break;
    	case WRITING_ERROR:
    		puts("Error while writing to a file");
    		break;
    	default:
    	    puts("Unknown error");
    	    break;
    	}
 }
