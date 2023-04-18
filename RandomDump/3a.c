#include <stdio.h>
int a[5]={1,2,3,4,5};
int sum(int n){
	if(n==1){
		return a[0];
	}
	else{
		return a[n-1]+sum(n-1);
	}

}
int main(){
	printf("%d ",sum(5));

}