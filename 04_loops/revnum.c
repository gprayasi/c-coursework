#include <stdio.h>
void main()
{
	int n,m;
	printf("Enter number to be reversed  ");
	scanf("%d", &n);
	printf("The reverse number is  ");
	while(n>0)
	{
	m=n%10;
	printf("%d",m);
	n=n/10;
	}
	printf("\n");
}
