#include <stdio.h>
#include <math.h>
float disc(void),a,b,c;
void main()
{
	float root1,root2, val;
	val= disc();
	root1= ((-b)+ val)/2*a;
	root2= ((-b)- val)/2*a;
	printf("The roots of the equation: %f and %f\n", root1,root2);
}
float disc()
{
	double dsc;
	printf("Enter the values of a, b and c in standard form of quadratic equation:\n");
	scanf("%f%f%f", &a,&b,&c);
	dsc= sqrt(b*b-4*a*c);
	if (dsc >=0)
	{
		if (dsc ==0)
			printf("Roots are real and equal\n");
		else
			printf("Roots are real and distinct\n");
	}
	else
		printf("Roots are imaginary\n");
	return (dsc);
}
