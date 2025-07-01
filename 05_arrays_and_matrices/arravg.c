#include <stdio.h>
void main()
{
	int arr[10],*p,i;
	float avg, sum=0.0;
	printf("Enter 10 numbers:\n");
	for (i=0;i<10; i++)
		scanf("%d", &arr[i]);
	p=arr;
	for(p=arr; p<arr+10; p++)
		sum+=*p;
	avg=sum/10;
	printf("The average is : %f\n", avg);
}
