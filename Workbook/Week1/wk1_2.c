#include <stdio.h>
int main()
{
	float n,m=30,tq,th; // 30 min
	printf("Enter number of days");
	scanf("%f",&n);
    //tq = 1+((n-1)*2); //only specific daay
	//tq = n*(n+1)/2;  // 1+2+3+4+....
	tq = n*n;  // 1+3+5+7+...
	th=m/60;
	printf("hours %f",tq*th);
	return 0;
	
}
