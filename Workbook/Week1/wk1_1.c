#include <ctype.h>
#include <stdio.h>
int main()
{
	char a;
	printf("Enter studied topic");
	scanf("%c", &a);
	if((tolower(a)=='a')||(tolower(a)=='b')||(tolower(a)=='c')){
		printf("Yes");}
	else {
		printf("No");}
	return 0;
}

