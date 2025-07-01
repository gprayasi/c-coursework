#include <stdio.h>
float average (int a[10]);
void main()
{
	int i, num[10];
	float avg;
	printf("Enter 10 integers:\n");
	for(i=0;i<10;i++)
		scanf("%d", &num[i]);
	avg= average(num);
	printf("Average of the numbers= %f\n", avg);
}
float average (int a[10])
{
	int i;
	float sum=0.0, avg;
	for (i=0; i<10; i++)
		sum+=a[i];
	avg=sum/10;
	return(avg);
}
