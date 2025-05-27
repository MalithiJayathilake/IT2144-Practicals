//if else
	
if(condition){
	//Body of if statement;
}
else{
	//Body of else statement;
}

//Example: Enter your age and verify your eligible or not for election voting, using if else condition

`````````````````````````````````````````````````````````````````````````````````````````````````````````

#include<stdio.h>

int main(){
	
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	if(age>=18){
		printf("You're Eligible for Election Voting ! ");
	}
	else{
		printf("You're Not Eligible for Election Voting ! ");
	}
	
	printf("\n");
	
return 0;
}


[2021ict52@fedora ~]$ vi Day13i.c
[2021ict52@fedora ~]$ gcc Day13i.c -o Day13i
[2021ict52@fedora ~]$ ./Day13i
Enter your Age : 22
You're Eligible for Election Voting !
[2021ict52@fedora ~]$ ./Day13i
Enter your Age : 17
You're Not Eligible for Election Voting !


===================================================================================================================================

//Ternary operator

test_condition ? expression1 : expression2;

#include<stdio.h>

int main(){
	
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	(age>=18) ? 
		printf("You're Eligible for Election Voting ! ") :
		printf("You're Not Eligible for Election Voting ! ");
	
	printf("\n");
	
return 0;
}



[2021ict52@fedora ~]$ vi Day13ii.c
[2021ict52@fedora ~]$ gcc Day13ii.c -o Day13ii
[2021ict52@fedora ~]$ ./Day13ii
Enter your Age : 22
You're Eligible for Election Voting !
[2021ict52@fedora ~]$ ./Day13ii
Enter your Age : 12
You're Not Eligible for Election Voting !


===================================================================================================================================

/* Switch operator

switch(variable/expression){
	case 1:
		//body of case 1
		break;
		
	case 2:
		//body of case 2
		break;
		
	case n:
		//body of case n
		break;
		
	default:
		//body of default
}

*/

//Example : Enter the value between 1 to 7 and create a program for following output.

Enter the number between 1 to 7 : 1
Today is Sunday !


#include<stdio.h>

int main(){
	
	int number;
	printf("Enter the number between 1 to 7 : ");
	scanf("%d",&number);
	
	switch(number){
	case 1:
		printf("Today is Sunday !");
		break;
		
	case 2:
		printf("Today is Monday !");
		break;
		
	case 3:
		printf("Today is Tuesday !");
		break;
		
	case 4:
		printf("Today is Wednesday !");
		break;
		
	case 5:
		printf("Today is Thursday !");
		break;
		
	case 6:
		printf("Today is Friday !");
		break;
		
	case 7:
		printf("Today is Saturday !");
		break;
		
	default:
		printf("Invalid Number ! Enter a number between 1 to 7");
}
	
printf("\n");
	
return 0;
}


[2021ict52@fedora ~]$ vi Day13iii.c
[2021ict52@fedora ~]$ gcc Day13iii.c -o Day13iii
[2021ict52@fedora ~]$ ./Day13iii
Enter the number between 1 to 7 : 5
Today is Thursday !
[2021ict52@fedora ~]$ ./Day13iii
Enter the number between 1 to 7 : 12
Invalid Number ! Enter a number between 1 to 7


====================================================================================================================================

//Example 2 : write a code for samll astrology based on your life path number for that get date of from user then calculate life path number.(use switch case)

Date : 23

Calculation for life path number: 
			a=date%10	3
			b=date/10	2
			c=a+b		5
			
		if life path number:
			1:Lucky
			2:Carefuly do your work
			3:Storger
			4:Happy
			5:Can get help
			6:Doubt
			7:Sad
			8:Like
			9:Courage
			
			
			

#include<stdio.h>

int main(){
	
	int date;
	printf("Enter Your Birth Date: ");
	scanf("%d",&date);
	
	int a=date%10;	
	int b=date/10;	
	int c=a+b;
	
	switch(c){
	case 1:
		printf("Lucky");
		break;
		
	case 2:
		printf("Carefuly do your work");
		break;
		
	case 3:
		printf("Storger");
		break;
		
	case 4:
		printf("Happy");
		break;
		
	case 5:
		printf("Can get help");
		break;
		
	case 6:
		printf("Doubt");
		break;
		
	case 7:
		printf("Sad");
		break;
		
	case 8:
		printf("Like");
		break;
		
	case 9:
		printf("Courage");
		break;
		
	default:
		
		int x=c%10;	
		int y=c/10;	
		int z=x+y;
		
		switch(z){
		case 1:
			printf("Lucky");
			break;
		
		case 2:
			printf("Carefuly do your work");
			break;
		
		case 3:
			printf("Storger");
			break;
		
		case 4:
			printf("Happy");
			break;
		
		case 5:
			printf("Can get help");
			break;
		
		case 6:
			printf("Doubt");
			break;
		
		case 7:
			printf("Sad");
			break;
		
		case 8:
			printf("Like");
			break;
		
		case 9:
			printf("Courage");
			break;
		
		default:
			printf("Invalid Number! ");
			
		}
}
	
printf("\n");
	
return 0;
}


[2021ict52@fedora ~]$ vi Day13v.c
[2021ict52@fedora ~]$ vi Day13v.c
[2021ict52@fedora ~]$ gcc Day13v.c -o Day13v
[2021ict52@fedora ~]$ ./Day13v
Enter Your Birth Date: 19
Lucky
[2021ict52@fedora ~]$ ./Day13v
Enter Your Birth Date: 22
Happy



======================================================================================================================================

//Example 3: Give list of numbers then calculate the summation and multiplication using for loop

1 2 3 4 5
summation = 15
multiplication = 120


======================================================================================================================================

//Example 4: Print the integers from 1 to 10 using while loop.




======================================================================================================================================

/* Example 5: Write a program to generate and print the fibonacci series up to a specified number of terms. The program should take 
the number of terms as input from the user and then display the corresponding fibonacci sequence.
*/


======================================================================================================================================

//Example 6: Write a C program to calculate the fibonacci of a given non-negative integer.


#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	
	if(num <=0){
		printf("Invalid value ! Please enter a positive integer");
	}
	else{
		long fact=1;
		int i;
	
        for (i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = ",fact);
    }
	
printf("\n");
	
return 0;
}


[2021ict52@fedora ~]$ vi Day13iv.c
[2021ict52@fedora ~]$ gcc Day13iv.c -o Day13iv
[2021ict52@fedora ~]$ ./Day13iv
Enter a positive integer: 5
Factorial of 120 =
[2021ict52@fedora ~]$ ./Day13iv
Enter a positive integer: -2
Invalid value ! Please enter a positive integer



======================================================================================================================================

//Example 7: Write a C program that , Accepts two strings as input from the user. Concatenates the two strings Display the concatenated result.


======================================================================================================================================

//Example 8:Write a C program that takes a binary number (as an integer) as input and converts it to its decimal equivalent.

======================================================================================================================================


//Example 9: Write a C program that:Accepts an array of integers from the user.Finds and displays the maximum and minimum values in the array.


======================================================================================================================================

// Example 10: C program to generate Pascal's Triangle.

Output:
no of rows = 5

          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

