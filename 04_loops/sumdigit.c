#include <stdio.h>
void main()
{
	int n,m, sum=0;
	printf("Enter a number to find sum of digits");
	scanf("%d",&n);
if(n<0)
		n=-n;
	else
	{
		while(n>0)
		{
			m=n%10;
			sum+=m;
			n/=10;
		}
	}
	printf("Sum of digits= %d\n",sum);
}
