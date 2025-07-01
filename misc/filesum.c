#include <stdio.h>
void main()
{
	FILE *fin;
	int sum=0,num;
	printf("Contents of input file:\n");
	fin=fopen("input.txt","r");
	fscanf(fin, "%d", &num);
	while(num!=-1)
	{
		fscanf(fin, "%d", &num);
		sum+=num;
		printf("%d \n", num);
	}
	fclose(fin);
	printf("The sum is:%d\n", sum);
}
