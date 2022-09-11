#include <stdio.h>
int main()
{
	int a, b;
	char op;
	printf("op?");
	scanf("%c", &op);
	printf("a?");
	scanf("%d", &a);
	printf("b?");
	scanf("%d", &b);
	switch (op){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		default:
			printf("whats operator?");
			break;
	}
	return 0;
}