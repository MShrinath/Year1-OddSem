#include <stdio.h>
int main()
{
	int mpty=0,full=0;
	int seats[]={0,1,0,0};
	for (int i=0; i<4;i++){
		if(seats[i]==0){
			mpty++;
		}
		else{
			full++;
		}
	}
	printf("Empty = %d\t Full=%d\n",mpty,full);
	return 0;
}