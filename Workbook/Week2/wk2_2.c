#include <string.h>
#include <stdio.h>
int main()
{
	char sent[30];
	printf("Word to encrpt:\n");
	scanf("%s",&sent);
	printf("Encrpted word:\n");
	for (int i=0;i<strlen(sent);i++){
		printf("%c",++sent[i]);
	}
	return 0;
}