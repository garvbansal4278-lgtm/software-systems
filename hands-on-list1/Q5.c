/*
============================================================================
Name : Q5.c
Author : Garv Bansal
Description : Write a program to create five new files with infinite loop. Execute the program in the background and check the file descriptor table at /proc/pid/fd.
Date: 26th Aug, 2025.
============================================================================
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int i = 1;
           while(i<= 5) {
            char s[32];
            snprintf(s, sizeof(s), "Q5_NewFile_%d", i);
            creat(s, 0744);
            i++;
        }
    printf("5 new files are created");
}

/* Output
5 new files are created
*/
