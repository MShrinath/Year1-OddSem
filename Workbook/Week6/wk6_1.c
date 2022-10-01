#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("no of bulbs?");
    scanf("%d",&n);
    printf("no of patterns = %.1f",pow(2,n));
    return 0;
}