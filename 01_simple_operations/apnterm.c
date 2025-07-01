#include <stdio.h>
void main()
{
	int a,d,n,l;
	printf("Enter first term and common difference\n");
	scanf("%d%d",&a,&d);
	printf("Enter value of n\n");
	scanf("%d",&n);
	l= a+(n-1)*d;
	printf("nth term is %d\n",l);
	
}
