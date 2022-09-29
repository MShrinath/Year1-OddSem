#include <stdio.h>
int main(){
    int nbr, i, n, s = 0;
    printf("Enter number");
    scanf("%d", &nbr);
    i = nbr;
    while (i > 0){
        n = i % 10;
        s = s + n*n*n;
        i = i / 10;
    }
    if (nbr == s){
        printf("%d armstrong number", nbr);}
    else{
        printf("%d not armstrong number", nbr);}

    return 0;
}