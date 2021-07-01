#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>

int main()
{
	int n,f;
	char buff[100];
	f=open("preethi.txt",O_RDWR);
	read(f,buff,10);
	write(1,buff,10);
	lseek(f,20,SEEK_SET);
	read(f,buff,20);
	write(1,buff,20);
}
