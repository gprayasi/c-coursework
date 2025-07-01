#include <stdio.h>
void main()
{
	float val; int ph;
top:
	printf("Enter ph value\n");
	scanf("%f", &val);
	ph= val;
	switch(ph)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Acidic\n");
			break;
		case 7:
			if(ph==val)
				printf("Neutral\n");
			else
				printf("Basic\n");
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14 :
			if(val<14)
				printf ("Basic\n");
			else
			{
				printf("Invalid choice\n");
				goto top;
			}
			break;
		default:
			printf("Invalid choice\n");
			goto top;
	}
	printf("\n");
}
