#include <stdio.h>
#include <stdlib.h> //for exit()
#include <unistd.h> //for sleep()

int main(){
	printf("Program started.\n");
	
	printf("Sleeping for 3 seconds.....\n");
	sleep(3);	//pause for 3 seconds
	
	printf("Exiting the program.\n");
	exit(0);	//clean exit 
	
	return 0;
}


[2021ict52@fedora ~]$ vi Day17i.c
[2021ict52@fedora ~]$ gcc Day17i.c -o Day17i
[2021ict52@fedora ~]$ ./Day17i
Program started.
Sleeping for 3 seconds.....
Exiting the program.



====================================================================================


#include <stdio.h>
#include <stdlib.h> //for exit()
#include <unistd.h> //for fork(), for sleep()
#include <sys/wait.h> //for wait()

int main(){
	pid_t pid;	//initialized pid using pid_t data type
	
	printf("Parent Process Started. PID: %d\n", getpid());
	
	pid = fork();	//creat a new child process
	
	if(pid < 0){
		perror("Fork Failed");
		exit(1);
	}
	if (pid == 0){
		//child process
		printf("Child Process.PID: %d, sleeping for 2 seconds....\n",getpid());
		sleep(2);
		printf("Child Process Exiting.\n");
		exit(0);	//child exit with status 0
	}
	else{
		//Parent Process
		int status;
		printf("Parent waiting for child to finish....\n");
		wait(&status);	//wait for child to finish
		
		if (WIFEXITED(status)){	//WIFEXITED(status) returns true if child terminated normally.
			printf("Child exited with status : %d\n", WEXITSTATUS(status));	//WEXITSTATUS(status) gets the actual exit code (0 here).
		}
		else{
			printf("Child did not exit normally.\n");
		}
		printf("Parent Process Ending.\n");
	}
	
	
	return 0;
}


[2021ict52@fedora ~]$ ^C
[2021ict52@fedora ~]$ vi Day17ii.c
[2021ict52@fedora ~]$ gcc Day17ii.c -o Day17ii
[2021ict52@fedora ~]$ ./Day17ii
Parent Process Started. PID: 9586
Parent waiting for child to finish....
Child Process.PID: 9587, sleeping for 2 seconds....
Child Process Exiting.
Child exited with status : 0
Parent Process Ending.


==================================================================================================
/*
Excercise :
	
	First Child : Slept for 1 second.
	Second Child : Slept for 3 seconds.
	Parent: Both children have finished.

*/

#include <stdio.h>
#include <stdlib.h> //for exit()
#include <unistd.h> //for fork(), for sleep()
#include <sys/wait.h> //for wait()

int main(){
	pid_t pid;	//initialized pid using pid_t data type
	
	printf("Parent Process Started.PID: %d\n", getpid());
	
	pid = fork();	//creat a new child process
	
	if(pid < 0){
		perror("Fork Failed");
		exit(1);
	}
	if (pid == 0){
		//child process
		printf("Child Process. Sleeping for 1 seconds....\n");
		sleep(1);
		printf("Child Process Exiting.\n");
		exit(0);	//child exit with status 0
	}
	else{
		
		int fork2 = fork();
		
		if(fork2 == 0){
			
		}
		
		
		//Parent Process
		int status;
		printf("Parent waiting for child to finish....\n");
		wait(&status);	//wait for child to finish
		
		if (WIFEXITED(status)){	//WIFEXITED(status) returns true if child terminated normally.
			printf("Child exited with status : %d\n", WEXITSTATUS(status));	//WEXITSTATUS(status) gets the actual exit code (0 here).
		}
		else{
			printf("Child did not exit normally.\n");
		}
		printf("Parent Process Ending.\n");
	}
	
	
	return 0;
}


==================================================================================================


/*
Excercise 2 :

	First Child : Slept for 2 seconds, exits with status 2
	Second Child : Slept for 1 second, exits with status 1.
	Parent: Wait twice, and prints which child (by PID or exit code) finished first and second

*/


======================================================================================================

/*
Excercise 3 :

	The parent craetes a child process
	The child creates a grandchild process
	The grandchild sleeps 2 seconds and exits with status 2
	The child waits for the grandchild, prints its status, then exits with status 55

*/