#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	(a%5==0)&&(a%11==0)?printf("both"):printf("not");
	return 0;
}
