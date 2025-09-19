/*
============================================================================
Name : Q8.c
Author : Garv Bansal
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read.
              Close the file when end of file is reached.
Date: 28th Aug, 2025.
============================================================================
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main() {
    int fd;
    char array[200];
    int x;
    const char *st = "this is question 8 of hands-on-list 1";

    fd = creat("file8.txt", 0644);
    write(fd, st, strlen(st));
    close(fd);
    fd = open("file8.txt", O_RDONLY);
    while ((x = read(fd, array, sizeof(array) - 1)) > 0) {
        array[x] = '\0';
        printf("%s",array);
    }

    close(fd);
    return 0;
}
/*
Output:this is question 8 of hands-on-list 1
*/