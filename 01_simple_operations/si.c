# include <stdio.h>

void main()
{
	float p,r,t,si;
	printf("Enter the amount loaned\n");
	scanf("%f", &p);
	printf("Enter duration and rate of interest\n");
	scanf("%f%f", &t,&r);
	si=p*r*t/100;
	printf("The simple interest is: %66.1f\n", si);
}
