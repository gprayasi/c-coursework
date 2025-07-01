#include <stdio.h>
void swap(int *pa, int *pb);
void main()
{
        int a, b, *pa, *pb;
        pa=&a;
        pb=&b;
        printf("Enter two integers:\n");
        scanf("%d%d", pa, pb);
        void swap(int *pa, int *pb);
        printf("Value of a before swap=%d\n", *pa);
	printf("Value of b before swap=%d\n\n", *pb);
	swap( pa, pb);
}
void swap(int *pa, int *pb)
{
        int *p;
        p=pa;
        pa=pb;
        pb=p;
        printf("Value of a after swap=%d\n", *pa);
        printf("Value of b after swap=%d\n", *pb);
}

