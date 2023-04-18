#include <stdio.h>
long int car(long int km,long int size){
    long int all;
    if(size<=15000){
        all = km*2;
        printf("All = %ld",all);
    }
    else if(size>15000){
        all = km*2.5;
        printf("All = %ld",all);
    }
}
int main(){
    long int km,ss;
    printf("Enter size and km");
    scanf("%ld %ld",&km,&ss);
    car(km,ss);
}
