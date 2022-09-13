#include <stdio.h>
int count;
extern int count;
void see(int count){
	printf("count is %d\n", count);
}
void increment(int);
int main()
{
	count = 5;
	increment(count);
}
void increment(int count)
{
	if (count > 0)
	{
		count = count + 1;
		see(count);
	}
	else
	{
		count = 0;
		see(count);
	}}
