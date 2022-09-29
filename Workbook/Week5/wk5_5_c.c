#include <stdio.h>
int main()
{
	int i=5,k;
    k=++i + --i;
    printf("%d %d",k,i);
	return 0;
}