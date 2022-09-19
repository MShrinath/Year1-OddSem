#include <stdio.h>
int main()
{
	int a[4]={3,7,3,4},p=1;
    for(int i=0;i<4;i++){
        (a[i]%2!=0)?p=p*a[i]:printf("");}
    printf("%d",p);
	return 0;
}