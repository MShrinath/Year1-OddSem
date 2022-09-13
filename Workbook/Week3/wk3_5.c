#include <stdio.h>
int sum(long long int po){
	long long int ln,fn;
	ln=po%100;
	fn=po;
	while(fn>99){
		fn=fn/10;
	}
	printf("sum = %lld",fn+ln);
}
int main()
{
	long long int phno;
	printf("phone number?");
	scanf("%lld",&phno);
	sum(phno);
}