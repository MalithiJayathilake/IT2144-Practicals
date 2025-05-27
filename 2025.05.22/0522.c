#include<stdio.h>
#include <unistd.h>
int main(){
	fork();
	printf("Hello World\n");
return 0;
}	


[2021ict52@fedora ~]$ vi Day15i.c
[2021ict52@fedora ~]$ gcc Day15i.c -o Day15i
[2021ict52@fedora ~]$ ./Day15i
Hello World
Hello World


=============================================================


#include<stdio.h>
#include<unistd.h>

int main(){

        int f=fork();

        if(f==0){
                printf("\nI'm the Child process %d\n",getpid());
        }
        else{
                printf("I'm the Parent process %d\n",getppid());
        }
return 0;
}


[2021ict52@fedora ~]$ vi Day15ii.c
[2021ict52@fedora ~]$ gcc Day15ii.c -o Day15ii
[2021ict52@fedora ~]$ ./Day15ii
I'm the Parent process 7851

I'm the Child process 44358



==============================================================

/*Print numbers from 1 to 10 and 1 to 5 should be print by 
child process and from 6 to 10 should be parent process 
calculate summation of these numbers. */


#include<stdio.h>
#include<unistd.h>

int main(){

    int id=fork();
	int n;
	
	if(id==0){
		n=1;
	}
	else{
		n=6;
	}
	
	for(int i=n; i<n+5; i++){
		printf("%d",i);
	}
	printf("\n");
	     
return 0;
}

[2021ict52@fedora ~]$ vi Day15iii.c
[2021ict52@fedora ~]$ gcc Day15iii.c -o Day15iii
[2021ict52@fedora ~]$ ./Day15iii
678910
12345

==============================================================

#include<stdio.h>
#include<unistd.h>

int main(){

    int f=fork();
	int prentSum = 0;
	int childSum = 0;
	
	if(f==0){
		for(int i=1; i<=5;i++){
			printf("Child:%d\n",i)
		}
	}
	else{
		
	}
	  
return 0;
}

