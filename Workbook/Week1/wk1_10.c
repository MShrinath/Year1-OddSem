#include <stdio.h>
int main()
{
	int l=20,b=15,h=12,tsa;
	float c;
	tsa=2*((l*b)+(b*h)+(l*h));
	printf("TSA = %d \n",tsa);
	c = tsa*0.05;
	printf("Cost = %f",c);
	return 0;
}  
