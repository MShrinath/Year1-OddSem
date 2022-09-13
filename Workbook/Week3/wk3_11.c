#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;//types
    float x=10,y=20;///give 10 mmil and 20 grams
    float xa,yb;//to eat
    printf("consueme xa mill and ybgrams?");
    scanf("%f%f",&xa,&yb);
    a=xa/x;//no of a types
    b=yb/y;//no of b type
    printf("total coconuts %f", ceil(a+b));
	return 0;
}