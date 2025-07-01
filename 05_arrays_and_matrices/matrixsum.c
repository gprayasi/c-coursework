#include <stdio.h>
void main()
{
	int a[10][10], b[10][10], sum[10][10];
	int p,q,i,j;
	printf("Enter order of the matrix:\n");
	scanf("%d%d",&p,&q);
	printf("Enter the first matrix:\n");
	for (i=0;i<p;i++)
		for(j=0; j<q; j++)
			scanf("%d", &a[i][j]);
	printf("Enter second matrix\n");
	for (i=0; i<p; i++)
		for (j=0; j<q; j++)
			scanf("%d", &b[i][j]);
	printf("The sum matrix is:\n");
	for (i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

}
