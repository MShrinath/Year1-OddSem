#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d", &age);
	(age>=18)?printf("eligible to vote"):printf("not eligible to vote");
	return 0;
	
}
