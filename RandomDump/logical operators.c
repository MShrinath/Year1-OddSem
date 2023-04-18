#include <stdio.h>
int main()
{
	int a=3, b=3, c=5, res;
	res = (a==b)&&(c>b); 
	printf("res = %d\n", res);
	res = (a==b)&&(c<b);
	printf("res = %d\n", res);
	res = (a==b)||(c<b);
	printf("res = %d\n", res);
	res != (a==b);
	printf("res = %d\n", res);
	res != (a!=b);
	printf("res = %d\n", res);
	return 0;
	
}
