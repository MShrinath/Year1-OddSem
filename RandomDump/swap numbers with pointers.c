#include <stdio.h>
int main()
{
	int a=3,b=7,c,*p,*q;
	p=&a,q=&b;
	printf("a = %d  b = %d\n",a,b);
	c=*p;
	a=*q;
	b=c;
	printf("a = %d  b = %d\n",a,b);
	return 0;
}
