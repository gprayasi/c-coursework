#include <stdio.h>
void main()
{
	int m;
	float t;
	double a=3;
	printf("Enter an integer");
	scanf("%d",&m);
	t= (float)(m--)/(--m);
	a+=6;
	printf ("expression:%f\nm value:%d\n",t,m);
	printf("Size of- %ld\n", sizeof(a));
	printf("%f",a);
}
