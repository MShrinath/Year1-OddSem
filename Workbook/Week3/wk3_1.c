#include <stdio.h>
void sip(int);
void main()
{
	int n = 700000;
	printf("n = %d\n",n);
	sip(n);
}
void sip(int n)
{
	float i,t,si,total;
	i = 12.5;
	t = 4;
	si = i*t*n / 100;
	total = n + si;
	printf("total is %f\n", total);
}