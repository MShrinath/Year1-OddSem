
#include <stdio.h>
int main(){
	float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
	int a[5] = { 1, 2, 3, 4, 5 };
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;

	printf("%f ", *ptr2);
	printf("%d ", ptr1);
	printf("%d", &a[1]);

	return 0;
}