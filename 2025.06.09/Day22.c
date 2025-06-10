/*
	Area calculation program
	
	Circle => C
	Triangle => T
	Square => S 
	Rectangle => R 
	
	Enter Your Choice : Choice
	
	Circle area calculation
	
	Enter the radius : 20.9
	Area is : 1371.58
	
*/


#include <stdio.h>

int main() {
    char choice;
    float area;

    printf("Area calculation program\n\n");
    printf("\tCircle => C\n");
    printf("\tTriangle => T\n");
    printf("\tSquare => S\n");
    printf("\tRectangle => R\n\n");

    printf("Enter Your Choice : ");
    scanf(" %c", &choice);  

    switch(choice) {
        case 'C':
        case 'c': {
            float radius;
            printf("\nCircle area calculation\n\n");
            printf("Enter the radius : ");
            scanf("%f", &radius);
            area = 3.14159f * radius * radius;
            printf("Area is : %.2f\n", area);
            break;
        }
        case 'T':
        case 't': {
            float base, height;
            printf("\nTriangle area calculation\n\n");
            printf("Enter the base : ");
            scanf("%f", &base);
            printf("Enter the height : ");
            scanf("%f", &height);
            area = 0.5f * base * height;
            printf("Area is : %.2f\n", area);
            break;
        }
        case 'S':
        case 's': {
            float side;
            printf("\nSquare area calculation\n\n");
            printf("Enter the side : ");
            scanf("%f", &side);
            area = side * side;
            printf("Area is : %.2f\n", area);
            break;
        }
        case 'R':
        case 'r': {
            float length, width;
            printf("\nRectangle area calculation\n\n");
            printf("Enter the length : ");
            scanf("%f", &length);
            printf("Enter the width : ");
            scanf("%f", &width);
            area = length * width;
            printf("Area is : %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


============================================================================================================

[2021ict52@fedora ~]$ vi Day22i.c
[2021ict52@fedora ~]$ gcc Day22i.c -o Day22i
[2021ict52@fedora ~]$ ./Day22i
Area calculation program

        Circle => C
        Triangle => T
        Square => S
        Rectangle => R

Enter Your Choice : c

Circle area calculation

Enter the radius : 7
Area is : 153.94
[2021ict52@fedora ~]$ ./Day22i
Area calculation program

        Circle => C
        Triangle => T
        Square => S
        Rectangle => R

Enter Your Choice : T

Triangle area calculation

Enter the base : 8
Enter the height : 5
Area is : 20.00
[2021ict52@fedora ~]$ ./Day22i
Area calculation program

        Circle => C
        Triangle => T
        Square => S
        Rectangle => R

Enter Your Choice : s

Square area calculation

Enter the side : 4
Area is : 16.00
[2021ict52@fedora ~]$ ./Day22i
Area calculation program

        Circle => C
        Triangle => T
        Square => S
        Rectangle => R

Enter Your Choice : R

Rectangle area calculation

Enter the length : 8
Enter the width : 5
Area is : 40.00
