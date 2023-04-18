#include <stdio.h>
int main(){
	int n[] = { 5, 10 , 5 , 2 };

	int *p = n;
	printf(" %d ", *p);
	*p++;
	printf(" %d ", *p);
	++*p;
	printf(" %d ", *p);
	return 0;
}