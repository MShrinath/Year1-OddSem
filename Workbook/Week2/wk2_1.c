#include <stdio.h>
int main()
{
	int pa =20,pb=10,pc,*a,*b;
	a=&pa;
	b=&pc;
	printf("%d %d\n",pa,pb);
	pc=*a;
	pa=*b;
	pb=pc;
	printf("%d %d\n",pa,pb);
	return 0;
}     