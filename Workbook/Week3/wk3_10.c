#include <stdio.h>
int main()
{
    int w[4],q,j=0;
    for(int i=0;i<4;i++){
        printf("Problems doe in this week\n");
        scanf("%d",&q);
        if(q<10){
            printf("bad\n");
        } 
        else{
            printf("good\n");
            j++;
        }
    }
    printf("Target achived in %d weeks",j);
	return 0;
}