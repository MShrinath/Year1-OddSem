#include <stdio.h>
int main(){
    int n0=0,n1=1,nt,x,s=0;
    printf("x?");
    scanf("%d",&x);
    printf("0 1 ");
    for (int i = 2; i < x; i++)
    {
        nt=n0+n1;
        printf("%d ",nt);
        n0=n1;
        n1=nt;
        if (nt%2==0)
        {
            s+=nt;
        }
    }
    printf("\n%d",s);
}