#include <stdio.h>
#include <math.h>
void main()
{
	struct complex
	{
		float rp;
		float ip;
		float modulus;
	};
	struct complex z[10];
	int i;
	for (i=0; i<10;i++)
	{
		printf("Enter real and imaginary part for number %d:\n",i+1);
		scanf("%f%f",&z[i].ip,&z[i].ip);
	}
	printf("The modulus array is:\n");
	for (i=0;i<10;i++)
	{
		z[i].modulus= sqrt(z[i].rp*z[i].rp+z[i].ip+z[i].ip);
		printf("%f\n", z[i].modulus);
	}
}
