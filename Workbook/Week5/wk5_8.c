#include <stdio.h>
int main()
{
	int h=1;
    int i = 0;
    printf("Period\tHeight");
    printf("\n%d\t%d",i,h);
    i++;
    for (i; i < 6; i++){
        if (i%2==0){
            h++;
            printf("\n%d\t%d",i,h);
            
        }
        else{
            h=h*2;
            printf("\n%d\t%d",i,h);
        }        
    }
	return 0;
}