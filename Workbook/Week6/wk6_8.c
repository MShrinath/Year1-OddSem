#include <stdio.h>
int main()
{
    int ncity,nroad=1;
    scanf("%d", &ncity);
    int city[ncity];
    for (int i = 0; i < ncity; i++){
        scanf("%d", &city[i]);
    }
    for (int i = 0; i < ncity; i++){
        nroad*=city[i];
    }
    printf("%d", nroad%1234567);
    return 0;
}
////pg 155