#include <stdio.h>
int main()
{
	float uni=4000,bt=3100,mt=350,ms=150,phd;
	phd=uni-(bt+mt+ms);
	printf("precnt of btech = %f\n",bt/uni*100);	
	printf("precnt of mtech = %f\n",mt/uni*100);
	printf("precnt of ms = %f\n",ms/uni*100);
	printf("precnt of phd = %f\n",phd/uni*100);	
	return 0;
}  

