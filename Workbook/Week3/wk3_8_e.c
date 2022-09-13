#include <stdio.h>
static int a = 10;
void sum()
{
	static int b = 24;
	printf("%d %d\n", a, b);
	a = a + 1;
	b = b + 1;
}
void main()
{
	int i;
	sum();
	sum();
	sum();
}