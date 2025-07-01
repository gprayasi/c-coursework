#include <stdio.h>
void main()
{
	int i, m,n, term, num[10];
	printf("Enter first two terms of fibonacci");
	scanf("%d%d", &m, &n);
	num[0]=m;
	num[1]=n;
	printf("How many terms you want?");
	scanf("%d", &term);
	for(i=2; i<term+2;i++)
	{
		num[i]=num[i-1]+ num[i-2];
	}
	printf("The full series is given below\n");
	for(i=0; i<term+2; i++)
	{
		printf("%d\n", num[i]);
	}


}
