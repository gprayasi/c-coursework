#include <stdio.h>
void main()
{
	int l,b;
	float rate, cost;
	printf("Enter length and breadth- ");
	scanf("%d%d",&l,&b);
	printf("Enter rate of fencing- ");
	scanf("%f", &rate);
	cost= 2*(l+b)*rate;
	printf("The cost is %f\n", cost);
}
