#include <stdio.h>
int main()
{
	char a[5] = {'a','b','c','d','e'};
	char *p = &a[0];
	for (int i = 0; i < 5; i++){
		printf("%c ", *(p+i));}
}