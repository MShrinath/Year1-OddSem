#include <stdio.h>
int main()
{
	int n,m,k;
	printf("Size of group");
	scanf("%d",&n);
	printf("Capacity of Course");
	scanf("%d",&m);
	printf("Students already registerd");
	scanf("%d",&k);
	if ((m-k)>=n){
		printf("yes");}
	else{
		printf("No");}
	return 0;
}  

