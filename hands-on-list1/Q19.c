/*
============================================================================
Name : Q19.c
Author : Garv Bansal
Description : Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 2nd September, 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

unsigned long long rdtsc(void)
{
  unsigned long long dst;
  __asm__ __volatile__ ("rdtsc" : "=A"(dst));
  
}

void main()
{
    int start, end;

    start = rdtsc();

    printf("The process id is: %d\n", getpid());

    end = rdtsc();

    printf("Difference in nano seconds is : %d\n", end - start);
}
/*
Output:
The process id is: 80647
Difference in nano seconds is : 102557
*/
