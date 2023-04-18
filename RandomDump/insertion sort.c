#include <stdio.h>


int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        for(int k=0;k<n;k++){
            printf("%d  ",a[k]);
        }
        printf("\n");
    }
    return 0;
}

