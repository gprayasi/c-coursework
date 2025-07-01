#include <stdio.h>
void main()
{
	int num[10], pos=0, neg=0,i;
	printf("Enter 10 numbers");
	for (i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]!=0)
		{
			if(num[i]>0)
				pos+=1;
			else
				neg+=1;
		}
	}
	printf("Number of positives= %d\nNumber of negatives= %d\n", pos,neg);
}
