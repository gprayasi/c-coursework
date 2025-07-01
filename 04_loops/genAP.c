#include <stdio.h>
void main()
{
	int a, i, diff, n;
	int ap[10];
	printf("Enter first term of AP- ");
	scanf("%d", &a);
	printf("Enter common difference- ");
	scanf("%d", &diff);
	ap[0]=a;
	for(i=1; i<10; i++)
		ap[i]= a+ i*diff;
	printf("Which term do you want?");
	scanf("%d", &n);
	printf("%dth term is %d\n", n, ap[n-1]);
}
