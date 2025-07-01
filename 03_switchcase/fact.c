#include <stdio.h>
void main()
{
	int fact, n;
	printf("Enter a number less than 10 to find factorial\n");
	scanf("%d",&n);
	fact=1;
	switch(n)
	{
		case 9:
			fact*=9;
		case 8:
			fact*=8;
		case 7:
			fact*=7;
		case 6:
			fact*=6;
		case 5:
			fact*=5;
		case 4:
			fact*=4;
		case 3:
			fact*=3;
		case 2:
			fact*=2;
		case 1:
		case 0:
			fact*=1;
			break;
		default:
			printf("Invalid choice");
	}
	printf("Factorial is %d\n", fact);
}
