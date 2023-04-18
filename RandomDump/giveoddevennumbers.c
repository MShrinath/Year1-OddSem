#include <stdio.h>
int n = 1;
void even(int n){
    if(n<=10){
        printf("%d - Even\n",n);
        odd(n+1);
    }
}
void odd(int n){
    if(n<=10){
        printf("%d - Odd\n",n);
        even(n+1);
    }
}
int main(){
    (n%2==0)?even(n):odd(n);
}