#include <stdio.h>

int main()
{
	int Data[3] = { 100, 200, 300 };

	void *pv = &Data[1];
	pv += sizeof(int);
	printf("%d", *(int*) pv);
	return 0;
}