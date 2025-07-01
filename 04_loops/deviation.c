#include <stdio.h>
void main()
{
	int i;
	float num[10], dev[10], sum=0,mean;
	printf("Enter 10 numbers- ");
	for(i=0;i<10;i++)
	{
		scanf("%f", &num[i]);
		sum+=num[i];
	}
	mean=sum/10;
	printf("mean is %f\n",mean);
	for(i=0;i<10;i++)
	{
		dev[i]= num[i]- mean;
		printf("The deviation of element %d is %f\n", i+1, dev[i]);
	}
}
