#include<stdio.h> 
#include <fcntl.h>
#include <string.h>

#include <stdlib.h> 
int main() 
{ 
	int fd, sz, nob; 
	char *c = (char *) calloc(100, sizeof(char)); 

	fd=open("harry.txt",O_WRONLY,0777); 
	nob= write(fd,c,strlen(c));
	if(nob!=-1)
	printf("Successfully written to file\n");  else
	perror("write Error"); 

	fd = open("harry.txt", O_RDONLY); 
	if (fd < 0)
	 { 
		 perror("r1");
		 exit(1); 
	} 
	sz = read(fd, c, 20); 
	printf("called read(% d, c, 20).  returned that"
	" %d bytes  were read.\n", fd, sz); 
	  c[sz] = '\0'; 
	printf("Those bytes are as follows: %s\n", c); 
	
	close(fd);
}
