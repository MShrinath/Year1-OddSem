#include <stdio.h>
void change(int,int);
void main()
{
	float x=1.5,y=5;
	printf("x=%d\ny=%d\n",x,y);
	change(x,y);
}
void change(int a,int b){
	int e,f,g;
	e=a*10;
	f=b*5;
	g=e+f;
	printf("Change = %d\n",100-g);
}