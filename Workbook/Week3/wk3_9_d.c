#include <stdio.h>
int a, b, c = 0;
void prtFun(void);
int main()
{
	static int a = 2;
	prtFun();
	a = a + 1;
	prtFun();
	printf("\n %d %d ", a, b);
}
void prtFun(void)
{
	static int a = 4;
	int b = 4;
	a = a + b;
	printf("\n %d %d ", a, b);
}