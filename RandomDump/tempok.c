#include <stdio.h>
int main(){
    int a[2];
    for(int i=0;i<2;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<2;i++){
        switch(a[i]){
            case 1:
                printf("one\n");
            case 2:
                printf("two\n");
            case 3:
                printf("three\n");
            case 4:
                printf("four\n");
            case 5:
                printf("five\n");
            case 6:
                printf("six\n");
            case 7:
                printf("seven\n");
            case 8:
                printf("eight\n");
            case 9:
                printf("nine\n");
            
        }
    }    
    return 0;
}