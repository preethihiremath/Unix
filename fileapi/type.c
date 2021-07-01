#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	const char *filename;
    	struct stat fs;
    	int st;
    	if( argc<2 )
    	{
        	puts("Filename is not entered! Exit(0)..");
        	exit(1);
    	}

    	filename = argv[1];
    	st = stat(filename,&fs);
    	if( st==-1 )
    	{
        	fprintf(stderr,"File error!\n");
        	exit(1);
    	}
    	if( S_ISREG(fs.st_mode) )
        	printf(" '%s' is regular file\n",filename);
    	else
        	printf(" '%s' is not a regular file\n",filename);
    	return(0);
}
