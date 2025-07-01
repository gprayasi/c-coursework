#include <stdio.h>
void main()
{
	char n;
	int i,a=0,t=0,g=0,c=0,k,sum;
	float ap, tp, gp,cp;
top:
	printf("How many elements in the sequence?");
        scanf("%d", &k);
	for (i=1; i<=k; i++)
	{ 
		printf("Enter nucleotide %d ", i);
		scanf(" %c", &n);
		switch(n)
		{
			case 'a':
			case 'A':
				a+=1;
				break;
			case 't':
			case 'T':
				t+=1;
				break;
			case 'g':
			case 'G':
				g+=1;
				break;
			case 'c':
			case 'C':
				c+=1;
				break;
			default:
				printf("Wrong choice\n");
				goto top;

		}
	}
	sum= a+t+g+c;
	ap=(a*100.0)/sum;
	tp=(t*100.0)/sum;
	gp=(g*100.0)/sum;
	cp= (c*100.0)/sum;
	printf("Percentage of A= %f\n",ap);
	printf("Percentage of T= %f\n",tp);
	printf("Percentage of G= %f\n",gp);
	printf("Percentage of C= %f\n",cp);
}
