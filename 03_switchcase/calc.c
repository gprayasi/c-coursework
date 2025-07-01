#include <stdio.h>
void main()
{
	char Op;
	int a,b,res;
	printf("Enter A for addition, S for subtraction, M for multiplication and D for division- \n");
	scanf("%c", &Op);
	printf("Enter two numbers on which you want to perform this operation");
	scanf("%d %d", &a, &b);
	switch(Op)
	{
		case 'A':
		case 'a':
			res=a+b;
			break;
		case 'S':
		case 's':
			res=a-b;
			break;
		case 'M':
		case 'm':
			res=a*b;
			break;
		case 'D':
		case 'd':
			res= a/b;
			break;
		default:
			printf("Invalid choice\n");

	}
	printf("The result is- %d\n",res);
}
