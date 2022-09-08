#include <stdio.h>
int main()
{
	int x, s, rs;
	printf("Enter number of mins");
	scanf("%d",&x);
	s=x*60;
	rs=s-5;
	printf("No. of subbmitions %d",rs/30);
	return 0;
}  

