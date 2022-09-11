#include <stdio.h>
int main()
{
	int N=4,*ptr1,*ptr2;
	ptr1=&N;
	ptr2=&N;
	printf("Pointer ptr2 before addtion\n");
	printf("%p\n",ptr2);
	ptr2=ptr2+3;
	printf("Pointer ptr2 after addtion\n");
	printf("%p\n",ptr2);
	return 0;
}

