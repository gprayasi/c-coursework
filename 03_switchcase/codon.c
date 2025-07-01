#include <stdio.h>
void main()
{
	char n;
	printf("Enter the one letter code for nucleotide\n");
	scanf("%c", &n);
	switch(n)
	{
		case 'A':
		case 'a':
			printf("Adenine, DNA or RNA");
			break;
		case 'T':
		case 't':
			printf("Thymine, DNA");
			break;
		case 'G':
		case 'g':
			printf("Guanine, DNA or RNA");
			break;
		case 'C':
		case 'c':
			printf("Cytosine, DNA or RNA");
			break;
		case 'U':
		case 'u':
			printf("Uracil, RNA");
			break;
		default:
			printf("Invalid choice");
	}
	printf("\n");
}
