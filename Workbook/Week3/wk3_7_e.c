#include <stdio.h>
static int gint = 1;
static void staticDemo()
{
	static int i;
	printf("%d ", i);
	i = i + 1;
	printf("%d\n", gint);
	gint = gint + 1;
}
int main()
{
	staticDemo();
	staticDemo();
}