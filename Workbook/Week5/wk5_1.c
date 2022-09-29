#include <stdio.h>
int main()
{
	int n;
	int a, b, s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d%d", &a, &b);
		s = a + b;
		printf("%d\n", s);
	}
	return 0;
}