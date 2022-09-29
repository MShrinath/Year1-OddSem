#include <stdio.h>
#include <math.h>
int main()
{
	int n,min,max;
    printf("n?");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            min=a[i];
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("max-min=%d",min-max);
	return 0;
}