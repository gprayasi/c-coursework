#include <stdio.h>
void main()
{
	int n,i, fact=1;
	printf("Enter a number\n");
	scanf("%d", &n);
	if(n<0)
		printf("Wrong input");
	for(i=1; i<=n; i++)
		fact*=i;
	printf("Factorial is %d\n", fact);
}
