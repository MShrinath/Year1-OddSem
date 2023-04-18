#include <stdio.h>
void main()
{
	int a[3]={2,3,4},*p,sum=0;
	char s[10]="hello";
	p=&s;
	for(int i=0;i<3;i++){
		sum+=*p;
		p++;
	}
	printf("%s",s[0]);
}