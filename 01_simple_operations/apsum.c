#include <stdio.h>
void main()
{
	int a,n,d,s;
	printf("Enter first term and common difference- ");
	scanf("%d%d",&a,&d);
	printf("Enter number of terms- ");
	scanf("%d",&n);
	s=(2*a+(n-1)*d)*n/2;
	printf("The sum of AP is %d\n",s);
}
