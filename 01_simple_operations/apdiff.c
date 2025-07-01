#include <stdio.h>
void main()
{
	int a,l,n;
	float d;
	printf("Enter number of terms\n");
	scanf("%d",&n);
	printf("Enter first and last term\n");
	scanf("%d%d",&a,&l);
	d= (l-a)/(n-1);
	printf("Common difference=%f\n",d);

}
