#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, nt = 0;
    printf("n? ");
    scanf("%d", &n);
    printf("%d %d ", n1, n2);
    nt = n1 + n2;
    while(nt <= n-2)
    {
        printf("%d ", nt);
        n1 = n2;
        n2 = nt;
        nt = n1 + n2;
    }
    return 0;
}
