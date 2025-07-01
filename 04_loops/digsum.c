#include <stdio.h>
void main()
{
	int num[10], new[10];
	int mod, sum=0, i;
	printf("Enter 10 numbers");
	for (i=0; i<10;i++)
	{
		scanf("%d", &num[i]);
		while(num[i]!=0) 
		{
			mod= num[i]%10;
			sum+=mod;
			num[i]/=10;
		}
		new[i]= sum;
	}
	for(i=0;i<10;i++)
		printf("Sum of digits of %dth element is- %d\n",i+1,new[i]);
}
