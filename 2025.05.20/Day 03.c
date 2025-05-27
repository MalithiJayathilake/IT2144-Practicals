#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("\nHello World!");
	
	int f = fork();
	int p = getpid();
	
	printf("\nThe pid is %d",p);
	printf("\nThe fork is %d",f);
	
	return 0;
}


=================================================

#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("\nHello World!\n");							//Hello World!
	return 0;
}

--------------------------------------------------------------------------

#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
		printf("\nHello World!\n");						//	Hello World!
	return 0;												
}															Hello World!

-----------------------------------------------------------------------------

#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
		fork();
			printf("\nHello World!\n");					// Hello World!
	return 0;												
}															Hello World!

															Hello World!
															Hello World!
=============================================================================

#include<stdio.h>
#include<unistd.h>

int main()
{
	
	int f = fork();
	
	if(f==0)
	{
		printf("\nI am a child ");
	}
	else
	{
		printf("\nI am a parent");
	}
	
	
	return 0;
}


=============================================================================

				A
			/		\
			B 		C
			



#include<stdio.h>
#include<unistd.h>

int main()
{
	
	int f = fork();
	int f1 = fork();
	
	if(f==0)
	{
		printf("I am C- Child.\n");
		
		if (f1==0)
		{
			printf("I am B- Sibling of C\n");
		}
		else
		{
			printf("I am A- Parent\n");
		}
	}
	
	
	return 0;
}

-----------------------------------------------------------------------------

#include<stdio.h>
#include<unistd.h>

int main()
{
	
	int f = fork();
	
	if(f==0)
	{
		printf("I am a (C)child.\n");
		printf("My parent ID %d\n",getppid());
	}
	else
	{
		int f1 = fork();
		if (f1==0)
		{
			printf("I am a (B)Sibling of (C)\n");
			printf("My parent ID %d\n",getppid());
		}
		else
		{
			printf("I am a (A)Parent. I have two children (B) and (C)\n");
			printf("My(parent) ID is %d\n",getpid());
			printf("My parent's parents ID is %d\n",getppid());
		}
	}
	
	
	return 0;
}