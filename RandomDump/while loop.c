#include <stdio.h>
int main()
{
	int a=1, n;
	printf("Enter number");
	scanf("%d",&n);
	do{
	printf("%d * %d = %d\n",n,a,n*a);
	a++;	
	}
	while(a<11);
	return 0;
}
