#include <stdio.h>
void main()
{
	int a[10],*pa, max=0;
	printf("Enter 10 numbers\n");
	pa=a;
	for (pa=a; pa<a+10; pa++)
	{
		scanf("%d",pa);
		if (*pa> max)
			max= *pa;
	}
	printf("The maximum element is: %d\n", max);

}
