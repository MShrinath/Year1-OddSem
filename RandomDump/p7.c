#include <stdio.h>
int main(){
	char s[] = "GATE2021";
	char *a = s;
	printf(" %s ", a + a[3] - a[1]);
	return 0;
}