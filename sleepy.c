/*This program takes a int i as
a command line arguement.
will loop i time a print the 
process ID*/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char *argv[]){
		int i = atoi(argv[1]);
		int count = 1;
		pid_t pid;
		printf("%d\n", i);
		while(i > 0){
			pid = getpid();
			i--;
			printf("PID:%d, Count:%d\n", pid, count);
			count ++;
			sleep(1);
	}
}
