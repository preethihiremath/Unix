#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
char buff[50];
int fd=open("file1",O_RDWR);
struct flock lock;
lock.l_type=F_WRLCK;
lock.l_whence=SEEK_END;
lock.l_start=10;
lock.l_len=100;
fcntl(fd,F_GETLK,&lock);
if(lock.l_type==F_RDLCK)
{
printf("%d has read lock\n",lock.l_pid);
}

if(lock.l_type==F_WRLCK)
{
printf("%d has write lock\n",lock.l_pid);
}
lock.l_type=F_WRLCK;
lock.l_pid=getpid();
fcntl(fd,F_SETLKW,&lock);
sleep(10);
lseek(fd,-50,SEEK_END);
read(fd,buff,50);
printf("\n%s",buff);
lock.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&lock);
return 0;
}
