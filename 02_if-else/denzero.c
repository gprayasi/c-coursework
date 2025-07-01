#include <stdio.h>
void main()
{
	float x,y,z;
	printf("Enter the value of x, y and z\n");
	top:
	scanf("%f%f%f", &x,&y,&z);
	if(z-x==0)
	{
		printf("Denominator is zero, re-enter the values\n");
		goto top;
	}
	x= y/(z-x);
	printf("The value of expression is %f\n", x);
}
