/*
============================================================================
Name : Q9.c
Author : Garv Bansal
Description : Write a program to print the following information about a given file - 
    1. Inode 
    2. Number of hard links 
    3. UID 
    4. GID 
    5. Size 
    6. Block size 
    7. Number of blocks 
    8. Time of last access 
    9. Time of last modification 
    10. Time of last change
Date: 29th Aug, 2025.
============================================================================
*/

#include <sys/types.h> // Import for open system call.
#include <sys/stat.h>  // Import micros
#include <fcntl.h>     // Import File Control
#include <unistd.h>    // Import for read and write system call
#include <stdio.h>     // Import for perrro and printf functions
#include <time.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		perror("Enter File Name to get file info\n");
		return 0;
	}

	struct stat statbuf;

	if((stat(argv[1],&statbuf)) > 0){
		perror("Error while executing the file!\n");
		return 0;
	}

	printf("Inode: %llu\n",statbuf.st_ino);
	printf("Number of hard links: %hu\n", statbuf.st_nlink);
	printf("UID: %u\n", statbuf.st_uid);
	printf("GID: %u\n", statbuf.st_gid);
	printf("Size: %lld\n", statbuf.st_size);
	printf("Block Size: %d\n", statbuf.st_blksize);
	printf("Number of Blocks: %lld\n", statbuf.st_blocks);
	// Use the `ctime` function in `time.h` header to convert the timestamp in epoch to a more human readable form
	printf("Last Access: %s", ctime(&statbuf.st_atime));
	printf("Last Modification: %s", ctime(&statbuf.st_mtime));
	printf("Time of Last change: %s", ctime(&statbuf.st_ctime));
	return 0;
}

/*
./a.out Q9.c 
Inode: 12702930
Number of hard links: 1
UID: 503
GID: 20
Size: 1498
Block Size: 4096
Number of Blocks: 8
Last Access: Fri Aug 29 15:28:00 2025
Last Modification: Fri Aug 29 15:26:49 2025
Time of Last change: Fri Aug 29 15:26:49 2025
*/