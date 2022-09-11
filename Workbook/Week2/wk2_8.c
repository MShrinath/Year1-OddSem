#include <stdio.h>
#include <string.h>
int main()
{
	int l, i;
	char *fp, *ep, ch,str[100];
	printf("Enter a string:\n");
	scanf("%s",&str);
	l = strlen(str);
	fp = str; 
	ep = str;
	for (i = 0; i <l-1; i++){
		ep++;
	}
	for (i = 0; i<l/2; i++) {
		ch = *ep;
		*ep = *fp;
		*fp = ch;
		fp++;
		ep--;
	}
	printf("Reverse of the string: \n%s", str);
	return 0;
}
