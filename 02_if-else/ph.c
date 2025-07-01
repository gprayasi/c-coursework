#include <stdio.h>
void main()
{
	float ph;
top:
	printf("Enter pH value of sample-");
	scanf("%f", &ph);
	if(ph>0 && ph<=14)
	{
		if(ph<7.0)
			printf("Sample is acidic\n");
		else
		{
			if(ph==7)
				printf("Sample is neutral\n");
			else
				printf("Sampke is alkaline\n");
		}
	}
	else
	{
		printf("Inappropriate value entered, try again\n");
		goto top;
	}
}
