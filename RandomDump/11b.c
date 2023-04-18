#include <stdio.h>
int binary(int a[],int n,int k){
    int min=0,max=n-1,mid;
    while(min<=max){
        mid=min+max/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]<k){
            max=mid;
        }
        else{
            min=mid;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    printf("%d ",binary(a,n,key));
}