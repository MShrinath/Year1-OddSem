#include <stdio.h >
void f();
void d();
int main()
{
	int a;
	a = 10;
	printf("%d\n", a);
	f();
	return 0;
}
void f()
{
	int a;
	a = 20;
	d();
	printf("%d\n", a);
}
void d()
{
	int a;
	a = 30;
	printf("%d\n", a);
}