#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>10 && b>10 && c>10 && a+b+c>100){
        printf("pass");
        }
    else{
        printf("fail");
        }
    return 0;
}

