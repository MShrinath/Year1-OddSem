#include <stdio.h>
int main()
{
	int a=5,b=10,*p,*q,s;
	p=&a,q=&b;
	s=*p+*q;
	printf("Sum = %d",s);
	return 0;	
	
}
