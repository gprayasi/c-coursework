#include <stdio.h>
void main()
{
	int kg, gm;
	float k,x;
	printf("Enter kilograms upto 3 decimals:");
	scanf("%f",&k);
	kg= k;
	x= k-kg;
	gm= x*1000;
	printf("Kilograms= %d\nMeters=%d\n",kg,gm);
}
