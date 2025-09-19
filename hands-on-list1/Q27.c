/*
============================================================================
Name : Q27.c
Author : Garv Bansal
Description :Write a program to execute ls -Rl by the following system calls
             a. execl
             b. execlp
             c. execle
             d. execv
             e. execvp
Date: 6th September 2025.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc,char *env[])
{
    char *path = "/bin/ls";
    execl(path, path, "-Rl", NULL);//a
    char *path2 = "ls";
    execlp(path2, path2, "-Rl", NULL);//b
    execle(path, path, "-Rl" ,"27c_example/",NULL, env);//c
    char *argv[] = {path,"-Rl",NULL};
    execv(path, argv);//d
    char *buf[] = {path2, "-Rl", NULL};
    execvp(path2, buf);//e     
    return 0;
}
/*
Output:
total 188
-rw-rw-r-- 1 garv-bansal garv-bansal  1294 Aug 29 20:00 Q10.c
-rw-rw-r-- 1 garv-bansal garv-bansal   952 Aug 29 20:29 Q11.c
-rw-rw-r-- 1 garv-bansal garv-bansal    24 Aug 29 20:27 Q11sample.txt
-rw-rw-r-- 1 garv-bansal garv-bansal   974 Aug 30 20:38 Q12.c
-rw-rw-r-- 1 garv-bansal garv-bansal   950 Aug 30 22:58 Q13.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1635 Aug 31 23:04 Q14.c
-rw-rw-r-- 1 garv-bansal garv-bansal  3842 Aug 31 23:20 Q15.c
-rw-rw-r-- 1 garv-bansal garv-bansal   942 Sep 1 23:26 Q16a.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1029 Sep 1 23:32 Q16b.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1143 Sep 2 23:37 Q17a.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1528 Sep 2 00:12 Q17b.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1385 Sep 2 23:56 Q18a.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1371 Sep 2 00:12 Q18b.c
-rw-rw-r-- 1 garv-bansal garv-bansal   980 Sep 2 00:24 Q18.c
-rwxrwxr-x 1 garv-bansal garv-bansal    90 Sep 2 00:18 Q18main.txt
-rw-rw-r-- 1 garv-bansal garv-bansal   779 Sep 2 00:24 Q19.c
-rw-rw-r-- 1 garv-bansal garv-bansal   529 Aug 24 11:01 Q1c.c
-rw-rw-r-- 1 garv-bansal garv-bansal   629 Aug 24 10:41 Q1b.c
-rw-rw-r-- 1 garv-bansal garv-bansal   614 Aug 24 10:34 Q1a.c
-rw-rw-r-- 1 garv-bansal garv-bansal   878 Sep 2 00:25 Q20.c
-rw-rw-r-- 1 garv-bansal garv-bansal   599 Sep 3 00:26 Q21.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1007 Sep 3 00:31 Q22.c
-rwx------ 1 garv-bansal garv-bansal   192 Sep 3 00:29 Q22Output.txt
-rw-rw-r-- 1 garv-bansal garv-bansal   786 Sep 3 11:04 Q23.c
-rw-rw-r-- 1 garv-bansal garv-bansal   734 Sep 3 01:03 Q24.c
-rw-rw-r-- 1 garv-bansal garv-bansal   605 Sep 5 11:04 Q25.c
-rw-rw-r-- 1 garv-bansal garv-bansal   626 Sep 5 11:35 Q26.c
-rw-rw-r-- 1 garv-bansal garv-bansal   834 Sep 6 11:36 Q27.c
-rw-rw-r-- 1 garv-bansal garv-bansal   549 Sep 6 14:56 Q28.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1785 Sep 6 19:56 Q29.c
-rw-rw-r-- 1 garv-bansal garv-bansal   549 Aug 24 11:33 Q2.c
-rw-rw-r-- 1 garv-bansal garv-bansal   399 Sep 6 20:49 Q30.c
-rw-rw-r-- 1 garv-bansal garv-bansal   688 Aug 25 11:45 Q3.c
-rw-rw-r-- 1 garv-bansal garv-bansal   520 Aug 25 11:55 Q4.c
-rw-rw-r-- 1 garv-bansal garv-bansal   778 Aug 26 12:01 Q5.c
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 26 11:59 Q5.test1
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 26 11:59 Q5.test2
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 26 11:59 Q5.test3
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 26 11:59 Q5.test4
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 26 11:59 Q5.test5
-rw-rw-r-- 1 garv-bansal garv-bansal   630 Aug 27 12:06 Q6.c
-rw-rw-r-- 1 garv-bansal garv-bansal   698 Aug 28 18:22 Q7.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1104 Aug 29 18:32 Q8.c
-rw-rw-r-- 1 garv-bansal garv-bansal  1774 Aug 29 18:41 Q9.c
-rwxrwxr-x 1 garv-bansal garv-bansal 16184 Aug 24 11:36 a.out
-rwxr--r-- 1 garv-bansal garv-bansal     0 Aug 25 11:43 creatfile.txt
-rw-rw-r-- 1 garv-bansal garv-bansal     0 Aug 25 20:03 file1dup.txt
-rwxrwxr-x 1 garv-bansal garv-bansal    30 Aug 25 18:32 file1.txt
-rwxrwxr-x 1 garv-bansal garv-bansal    20 Aug 25 18:21 file2.txt
-rw-rw-r-- 1 garv-bansal garv-bansal     0 Aug 25 11:53 Newfile.txt

*/
