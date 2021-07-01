#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>


void printFileProperties(struct stat stats);


int main()
{
    char path[100];
    struct stat stats;

    printf("Enter source file path: ");
    scanf("%s", path);


    // stat() returns 0 on successful operation,
    // otherwise returns -1 if unable to get file properties.
    if (stat(path, &stats) == 0)
    {
        printFileProperties(stats);
    }
    else
    {
        printf("Unable to get file properties.\n");
        printf("Please check whether '%s' file exists.\n", path);
    }

    return 0;
}

void printFileProperties(struct stat stats)
{
    // File permissions
    printf("\nFile access: ");
    if (stats.st_mode & R_OK)
        printf("read ");
    if (stats.st_mode & W_OK)
        printf("write ");
    if (stats.st_mode & X_OK)
        printf("execute");
     printf("\n");
       
}
