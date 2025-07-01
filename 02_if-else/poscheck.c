#include <stdio.h>
void main()
{
	int n;
	printf("Enter a number to check positive or negative");
	scanf("%d", &n);
	if(n==0)
		printf("The number is zero\n");
	else
	{
		if(n>0)
			printf("The number is positive\n");
		else
		{
			printf("The number is negative\n");
			printf("The modulus of %d is %d\n",n,-n);
		}
	}
}
