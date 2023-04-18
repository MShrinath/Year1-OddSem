#include <stdio.h>
#define size 10
int a[size],top=-1;
void push(){
	int n;
	if(top==size-1){
		printf("full");
	}
	else{
		scanf("%d",&n);
		a[++top]=n;
	}
}
void pop(){
	if(top==-1){
		printf("empty");
	}
	else{
		top--;
	}
}
void display(){
	for(int i=top;i>=0;i--){
		printf("  %d",a[i]);
	}
	printf("\n");
}
void sum(){
	int sum=0;
	for(int i=top;i>=0;i--){
		sum+=a[i];
	}
	printf("%d",sum);
}
void search(){
	int k;
	scanf("%d",&k);
	for(int i=top;i>=0;i--){
		if(k==a[i]){
			printf("Found in %d",i);
		}
	}
	printf("Not found");
}
int main() {
	while(1){
		printf("1. Push\n2. Pop\n3. Display\n4. Sum\n5. Search\nOther Exit\n");
		int ch;
		scanf("%d",&ch);
		switch (ch){
		case 1:push();
			break;
		case 2:pop;
			break;
		case 3:display();
			break;
		case 4:sum();
			break;
		case 5:search();
			break;
		default:
			return 0;
		}
	}
}
