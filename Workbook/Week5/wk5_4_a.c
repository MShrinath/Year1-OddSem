#include <stdio.h>
int main()
{
	int x=10,y=15,a,b;
	a=x++;
	b=++y;
	printf("a=%d,b=%d",a,b);
	return 0;
}