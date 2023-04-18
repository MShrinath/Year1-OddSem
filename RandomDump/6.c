#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90)
        printf("O");
    else if(marks<90&&marks>=80)
        printf("A");
    else if(marks<80&&marks>=70)
        printf("B");
    else   
        printf("F");
}