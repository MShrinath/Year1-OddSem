#include <stdio.h>
int main(){
    int a[10]={1,6,8,32,1,4,7,5,99,20};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];        
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}