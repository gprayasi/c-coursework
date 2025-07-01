#include <stdio.h>
void main()
{
	int g,f,c,x,y;
	float s;
	printf("Enter values of g,f,c in standard form of equation of circle");
	scanf("%d%d%d", &g,&f,&c);
	printf("Enter x and y coordinate of a point to check where it lies");
	scanf("%d%d", &x, &y);
	s=x*x+y*y+2*g*x+2*f*y+c;
	if(s==0)
		printf("The point lies on the circumference\n");
	else
	{
		if(s>0)
			printf("The point lies outside circle\n");
		else
			printf("The point lies inside circle\n");
	}
	printf("Value of s=%f\n", s);
}
