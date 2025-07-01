#include <stdio.h>
void main()
{
        int a[10][10], b[10][10];
        int p,q,i,j;
        printf("Enter order of the matrix:\n");
        scanf("%d%d",&p,&q);
        printf("Enter your matrix:\n");
        for (i=0;i<p;i++)
                for(j=0; j<q; j++)
		{
			scanf("%d", &a[i][j]);
			b[j][i]= a[i][j];
		}
        printf("The transpose matrix is:\n");
        for (i=0; i<p; i++)
        {
                for(j=0; j<q; j++)
                {
                        printf("%d\t", b[i][j]);
                }
                printf("\n");
        }

}

