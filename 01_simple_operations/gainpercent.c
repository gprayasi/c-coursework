#include <stdio.h>
void main()
{
	int cp,sp,gain;
	float perc;
	printf("Enter cost price and sell price- ");
	scanf("%d%d", &cp,&sp);
	gain= sp-cp;
	perc= gain*100/cp;
	printf("The gain is-%d\nThe gain percentage is- %f %%\n", gain,perc);
}
