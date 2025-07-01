#include <stdio.h>
void main()
{
	int km,m;
	printf("Enter number of meters:\n");
	scanf("%d",&m);
	km= m/100;
	m= m%100;
	printf("Kilometres= %d \nMeters= %d\n",km,m);
}
