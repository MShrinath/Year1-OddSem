#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *pi=NULL;
	pi = malloc(sizeof(int) *10);
	if (NULL == pi)
	{
		printf("malloc failed");
	}
	else
	{
		printf("malloc success");
		free(pi);
	}

	return 0;
}