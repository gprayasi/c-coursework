#include <stdio.h>
void main()
{
	int num, max,min, sum=0,i;
	float avg;
	printf("Enter 10 numbers\n");
	for (i=0; i<10; i++)
	{
		printf("Enter number ");
		scanf("%d", &num);
		sum+=num;
		if(i==0||num>max)
			max= num;
		if(i==0||num<min)
			min=num;
	}
	avg= (float)sum/10;
	printf("Maximum is %d \nMinimum is %d \nAverage is %f \n", max, min, avg);

}
