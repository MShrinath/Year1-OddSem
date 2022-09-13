#include <stdio.h>
void increment(void);
void main()
{
	increment();
	increment();
	increment();
	increment();
}
void increment(void)
{
	auto int i = 0;
	printf("%d", i);
	i = i + 1;

}