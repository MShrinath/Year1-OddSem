#include <stdio.h>
int main(){
    int n;
    printf("n?");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\n",n-i);
    }
}