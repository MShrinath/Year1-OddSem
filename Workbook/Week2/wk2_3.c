#include <stdio.h>
int main()
{
	int a,b,c;
	printf("a?b?c?");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Mark will win");}
		else{
			printf("Jack will win");}
	}
	else{
		if(b>c){
			printf("Bob will win");}
		else{
			printf("Jack will win");}
	}
	return 0;
}