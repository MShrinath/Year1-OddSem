#include <stdio.h>
#include <math.h>
int main() 
{
    int x,y,n;
    double pp;
    printf("x?y?n?");
    scanf("%d %d %d",&x,&y,&n);
    for(y;y<n;y++){
        pp = pow(x,y);
        printf("x^y = %.1f\n",pp);}
    return 0;
}