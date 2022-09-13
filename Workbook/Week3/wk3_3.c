#include <stdio.h>
int main()
{
	int x, y, a, b;
	printf("enter x value:");
	scanf("%d", &x);
	printf("enter y value:");
	scanf("%d", &y);
	a = 3 *x;
	b = 2 * y;
	(a > b)?printf("y"):printf("x");
	return 0;
}