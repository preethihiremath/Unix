#include<iostream.h>  #include<stdio.h>  #include<stdlib.h>  #include<sys/types.h>  #include<unistd.h>  #include<fcntl.h>  #include<sys/stat.h>
int main(int argc, char* argv[])
{
if(argc!=4)
{
cout<<"usage:"<<argv[0]<<"<file><major_no><minor_no>";  return 0;
}
int major=atoi(argv[2];
Int minor=atoi(argv[3]);
(void) mknod(argv[1], S_IFCHR | S_IRWXU | S_IRWXG |  S_IRWXO, (major<<8) | minor);

int rc=1,
Int fd=open(argv[1],O_RDW | O_NONBLOCK | O_NOCTTY);
char buf[256];  while(rc && fd!=-1)
if((rc=read(fd,buf,sizeof(buf)))<0)  perror("read");
else if(rc)
cout<<buf<<endl;  close(fd);
}

