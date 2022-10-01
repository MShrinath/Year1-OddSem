#include <stdio.h>
#include <math.h>
int main()
{
   int n,sn=0;
   scanf("%d", &n);
   int t[n];
   for (int i = 1; i <= n; i++){
      t[i]=pow(i,2)-pow((i-1),2);
      sn+=t[i];
   }
   // t[i]=pow(i,2)-pow((i-1),2);
   printf("%d\n",sn%1000000007);
}