#include <stdio.h>
int main()
{
	int n;
	n = 20;
	int *ptr;
	ptr = &n;
	printf("Address of n: %u", ptr);
	return 0;
}