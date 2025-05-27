/*
A - Parent (3 inputs)
B - Child -----> factorial(1st input)
C - Child -----> fibonacci (2nd input) / input numbers prime or not(all imputs)

*/

#include<stdio.h>
#include<unistd.h>

int main(){
	printf("\nA (Parent process)\n");
    printf("I'm A, my ID is %d\n", getpid());
    printf("I'm A, my parent ID is %d\n", getppid());
	
	printf("\nValues for Parent-A, Child-B, Child-C\n");

    int num1, num2, num3;

    printf("Enter three numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
	
	int f1 = fork();
	
	 if (f1 == 0){
		//Child-B
		printf("B (Child of A)\n");
		printf("I'm B, my ID is %d\n", getpid());
        printf("I'm B, my parent ID is %d\n", getppid());
	 }
	 else {
		 
	 }
	
	
	return 0;
}
