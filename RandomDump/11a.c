#include <stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int b[5],l=5;
    for(int i=0;i<5;i++){
        b[--l]=a[i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
}