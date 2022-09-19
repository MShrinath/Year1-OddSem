#include <stdio.h>
int main()
{
	int x,d;
    printf("hi");
    scanf("%d",&x);
    if(x<=100){
        d=0;}
    else if(100<x&&x<=1000){
        d=25;}
    else if (1000<x&&x<=5000){
        d=100;}
    else if (5000<x){
        d=500;}
    printf("amm to pay is %d",x-d);    
	return 0;
}