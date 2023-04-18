#include <stdio.h>
int main()
{
	int n, h;
	printf("enter n number of days");
	scanf("%d", &n);
	h = 1+((n-1)*2)*2.5;
	printf("hieght = %d",h);	
	return 0;	
}
