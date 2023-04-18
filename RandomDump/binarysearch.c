#include <stdio.h>
int main(){
    int a[10]={1,4,77,4,8,22,99,69,3,79};
    int min=0,max=9,mid,n=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]<a[j]){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    while(min<=max){
        mid=min+max/2;
        if(a[mid]==n){
            printf("found");
            break;
        }
        else if(n<a[mid]){
            max=mid;
        }
        else{
            min=mid;
        }
    }
}