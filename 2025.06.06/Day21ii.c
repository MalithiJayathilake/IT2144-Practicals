//Exercise 


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

#define MSGSIZE 16

char* msg1 = "Hello, World #1";
char* msg2 = "Hello, World #2";
char* msg3 = "Hello, World #3";

int main()
{	
	char inbuf[MSGSIZE];
	int p[2], pid, nbytes;
	
	if(pipe(p) < 0)
		exit;
	
	//continued
	
	if((pid = fork()) > 0)
	{
		write(p[1], msg1, MSGSIZE); 
		write(p[1], msg2, MSGSIZE);
		write(p[1], msg3, MSGSIZE);
		
		//Adding this line will
		//not hang the program
		//close(p[1]);
		
		wait(NULL);
	}
	
	else
	{
		//Adding this line will
		//not hang the program
		//close(p[1]);
		
		while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0 )
			printf("%s\n", inbuf);
		
		if(nbytes !=0)
			exit(2);
		printf("Finished Reading\n");
	}
	return 0;
}



[2021ict52@fedora ~]$ vi Day21ii.c
[2021ict52@fedora ~]$ gcc Day21ii.c -o Day21ii
[2021ict52@fedora ~]$ ./Day21ii
Hello, World #1
Hello, World #2
Hello, World #3
