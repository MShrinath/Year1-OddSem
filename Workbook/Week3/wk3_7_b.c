#include <stdio.h>
void main()
{
	auto int num;
	num = 20;
	{
		auto int num;
		num = 60;
		printf("Num: %d\n", num);
	}
	printf("Num: %d\n", num);

}