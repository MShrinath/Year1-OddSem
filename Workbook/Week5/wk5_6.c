#include <stdio.h>
int main()
{
	int n,a,b;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++){
    scanf("%d %d", &a, &b);
    if(a>0&&b>0){
        printf("Solution\n");
    }
    else if (b==0){
        printf("Solid\n");
    }
    else{
        printf("Liquid\n");
    }
	}
}