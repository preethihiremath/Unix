#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
#include<fcntl.h>
 using namespace std;
int main()
{  int fd1; 
 char b1[]="Dept of IS";  
char b2[]="Dept of cs";  
fd1=creat("ISE.txt",0622); 
if(fd1<0)  
{    cout<<"Error in creating file"<<endl;  
  return 0;  }
write(fd1,b1,10);  
lseek(fd1,48,SEEK_SET); 
 write(fd1,b2,10);    
close(fd1); 
 return 0;}
