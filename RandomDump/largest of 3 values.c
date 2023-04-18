#include <stdio.h>
int main()	
{
	int a, b, c, l;
	printf("Enter value of a b c");
	scanf("%d%d%d",&a , &b , &c);
	l = (a>b)?(a>c? a : c):(b>c? b : c);
	printf("Largest value %d", l);
	return 0;
		
}
