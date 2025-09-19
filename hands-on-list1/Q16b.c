/*
============================================================================
Name : Q16b.c
Author : Garv Bansal
Description : Write a program to perform mandatory locking.
              a. Implement write lock
              b. Implement read lock
Date: 1st September, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc, char *buff[])
{
    int a = open(buff[1], O_RDONLY);

    struct flock fl = {F_RDLCK, 0, 0, 0, 0}; 
    fcntl(a, F_SETLKW, &fl);
    printf("File is locked now.\nPlease press enter key to unlock file\n");
    getchar();
    fl.l_type = F_UNLCK;
    fcntl(a, F_SETLKW, &fl);
    return 0;
}
/*
Output:
garv@Garv:~/Hands-on-list-1$ ./a.out file1.txt
File is locked now.
Please press enter key to unlock file

*/
