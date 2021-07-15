#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
#include<fcntl.h>
using namespace std;

int main()
{  
int fd1; 
char b1[]="We are quarantined since one month";  
char b2[]="we are not sure when lock down will be released";  
fd1=creat("covid.txt",0622); 
if(fd1<0)  
{    
cout<<"Error in creating file"<<endl;  
  return 0;  }
write(fd1,b1,35);  
lseek(fd1,50,SEEK_SET); 
write(fd1,b2,50);    
close(fd1); 
 return 0;
}
