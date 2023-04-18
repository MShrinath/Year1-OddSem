#include <stdio.h>
int main()
{
	int n;
	printf("Enter n value");
	scanf("%d", &n);
	(1<=n)&&(n<10)?printf("1 digit"):((10<=n)&&(n<100)?printf("2 digit"):printf("neither 1 nor 2 digit number"));
	return 0;
	
}
