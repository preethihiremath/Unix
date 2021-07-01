#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
 
int main(int argc,char** argv){
int fd,n;
char temp[10];
char*buf="yatish";
fd=open(argv[1],O_APPEND);
if(fd<0){
printf("error");
exit(0);
}
n=write(fd,buf,3);
}
