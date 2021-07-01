#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
struct stat info;
for(int i=1;i<argc;i++){
	stat(argv[1],&info);
	struct passwd *pw = getpwuid(info.st_uid);
	struct group  *gr = getgrgid(info.st_gid);
	printf("Username: %s\n",pw->pw_name);
	printf("Groupname: %s \n",gr->gr_name);
}
}
