#include <stdio.h>
#include <math.h>
int main()
{
	int ax=1,ay=1,bx=2,by=3,dab,dbc=2;
	dab = sqrt(  (bx-ax)^2 +(by-ay)^2  );
	printf("path dist = %d",dab+dbc);
	return 0;
}  


