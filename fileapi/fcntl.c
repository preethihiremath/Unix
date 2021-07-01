#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main( int argc, char* argv[]){
          char* file = argv[1];
          int fd;
          struct flock lock;
          printf("I am opening the file %s\n",file);
          fd=open(file,O_WRONLY);
          printf("I am locking it buddy!\n");
          memset (&lock, 0, sizeof(lock));
          lock.l_type=F_WRLCK;
          fcntl (fd, F_SETLKW, &lock);
          printf("I locked the file, Press enter to unlock\n");
          getchar();
          printf("Releasing Buddy\n");
          lock.l_type=F_UNLCK;
          fcntl (fd,F_SETLKW,&lock);
          close(fd);
          return 0;

}
