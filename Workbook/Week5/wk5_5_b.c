#include <stdio.h>
int main()
{
	int i=3,j;
    j=i++ + ++i;
    printf("%d %d",i,j);
	return 0;
}