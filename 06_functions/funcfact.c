#include <stdio.h>
int factorial(int n)
{
	int fact;
	if(n==1)
		fact=1;
	else
		fact= factorial(n-1)*n;
	return(fact);
}
void main()
{
	int factorial(int n);
	int num, fact;
	printf("Enter number to find its factorial: \n");
	scanf("%d", &num);
	fact= factorial(num);
	printf("Factorial of %d is %d\n", num, fact);
}
