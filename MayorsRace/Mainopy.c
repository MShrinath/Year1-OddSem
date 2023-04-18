#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    int i=1;
	    scanf("%d %d %d",&a,&b,&c);
	    while(1){
	        float ai,bi,ci;
	        ai=a%i;
	        bi=b%i;
	        ci=c%i;
	        printf("%d %d %d\n\n",a%i,b%i,c%i);
	        if(ai!=0 && bi!=0 && ci!=0)
	            if(ai==a && bi==b && ci==c)
	                break;
            i++;
	    }
	    printf("%d\n",i);
	}
	return 0;
}

