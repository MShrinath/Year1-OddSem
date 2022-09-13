#include <stdio.h>
int main()
{
	register int i = 2;
	static char ch = 'A';
	auto float j;
	int k;
	printf("%d %c%f%d", i, ch, j, k);
	k = ++ch && i;
	printf("%d", k);
	k = ++ch;
	printf("%d", k);
	j = i-- + ++k * 2;
	printf("%d %f", k, j);
	return 0;
}