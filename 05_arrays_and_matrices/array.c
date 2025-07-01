#include <stdio.h>
void main()
{
	int i, pos=0, neg=0;
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
		if(a[i]!=0)
		{
			if (a[i]<0)
				neg+=1;
			else
				pos+=1;
		}
	}
	printf("Maximum is %f\nMinimum is %f\n", max,min);
	printf("Average is %f\n", sum/10);
	printf("Range is %f to %f, gap is %f\n",min,max, max-min);
	printf("Number of positive= %d\n Number of negative=%d\n", pos, neg);
}
