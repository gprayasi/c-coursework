#include <stdio.h>
void main()
{
	int i;
	float a[10], max=0, min=0, sum=0;
	printf("Enter 10 numbers");
	for (i=0;i<10;i++)
	{
		scanf("%f", &a[i]);
		sum+=a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("Maximum is %f\nMinimum is %f\n", max,min);
	printf("Average is %f\n", sum/10);
	printf("Range is %f\n", max-min);
}
