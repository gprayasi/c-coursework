#include <stdio.h>
void main()
{
	int n, mod;
	printf("Enter a number to check divisibility by 10-");
	scanf("%d", &n);
	mod= n%10;
	if(mod==0)
		printf("Number is divisible by 10\n Next number divisible by 10 is %d\n",n+10);
	else
		printf("Number not divisible by 10\n Next number divisible by 10 is %d\n", n+(10-mod));
}
