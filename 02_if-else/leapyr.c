#include <stdio.h>
void main()
{
	int yr;
	printf("Enter the year");
	scanf("%d", &yr);
	if (yr%4==0)
	{
		if (yr%100==0)
		{
			if(yr%400)
			printf("It is leap year");
			else
			printf("Its not a leap year");
		}
		else
			printf("It is a leap year");
	}
	else
		printf("Its not a leap year");
}
