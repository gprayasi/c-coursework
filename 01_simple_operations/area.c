# include <stdio.h>

void main()
{
	int b, h;
	float area;
	printf("Enter base and height of a triangle\n");
	scanf("%d%d",&b,&h);
	area=b*h/2;
	printf("\nThe area of triangle is %f\n", area);
}
