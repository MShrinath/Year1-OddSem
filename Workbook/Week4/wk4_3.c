#include <stdio.h>
int main() 
{
    char op;
    int a,b;
    printf("op?");
    scanf("%c",&op);
    printf("a?b?");
    scanf("%d%d",&a,&b);
    switch (op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '/':
        printf("%d",a/b);
        break; 
    case '*':
        printf("%d",a*b);
        break;   
    default:
        printf("whats op?");
        break;
    }
    return 0;
}

