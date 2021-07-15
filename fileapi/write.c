#include<stdio.h> 
#include <fcntl.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
int fd,nob;
char c[]="We are quarantined since one month"; 

char c2[]="we are not sure when lock down will be released";
fd=open("covid.txt",O_WRONLY,0777); 
nob= write(fd,c,strlen(c));
lseek(fd,48,SEEK_SET); 
write(fd,c2,50);   
if(nob!=-1)
printf("Successfully written to file");  else
perror("write Error"); 
 close(fd);
return 0;
}
