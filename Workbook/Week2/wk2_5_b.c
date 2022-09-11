#include <stdio.h>
int main()
{
	int *ptr,x;
	ptr=&x;
	*ptr=0;
	printf("x= %d\t*ptr=%d\n",x,*ptr);
	*ptr+=5;
	printf("x= %d\t*ptr=%d\n",x,*ptr);
	(*ptr)++;
	printf("x= %d\t*ptr=%d\n",x,*ptr);
	return 0;
}

