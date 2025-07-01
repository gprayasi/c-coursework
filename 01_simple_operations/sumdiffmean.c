#include <stdio.h>
void main()
{
	int a,b;
	float mean;
	printf("Enter two numbers- ");
	scanf("%d%d",&a,&b);
	printf("Sum=%d\n",a+b);
	printf("Difference=%d\n",b-a);
	mean=(float)(a+b)/2;
	printf("Mean=%f\n",mean);
}
