#include <stdio.h>
#include <math.h>
void main()
{
	int g,f,c;
	double r;
top:
	printf("Enter value of g, f and c in standard equation of circle");
	scanf("%d%d%d", &g,&f,&c);
	if(g*g+f*f<c)
	{
		printf("Value imaginary\n");
		goto top;
	}	
	else
	{
		r=sqrt(g*g+f*f-c);
	}
	printf("Centre lies at (%d, %d)\n",-g,-f);
	printf("Radius of circle=%f\n",r);
}
