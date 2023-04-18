#include <stdio.h>
void f(int *p, int *q)
{
	p = q; /*p also points to j now */
	*p = 2; /*Value of j is changed to 2 now */
}
int main()
{
	int arri[] = { 1, 2, 3 };

	int *ptri = arri;
	char arrc[] = { 1, 2, 3 };

	char *ptrc = arrc;
	printf("sizeof arri[] = %d ", sizeof(arri));
	printf("sizeof ptri = %d ", sizeof(ptri));
	printf("sizeof arrc[] = %d ", sizeof(arrc));
	printf("sizeof ptrc = %d ", sizeof(ptrc));
	return 0;
}