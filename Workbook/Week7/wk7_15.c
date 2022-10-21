#include <stdio.h>
#include <string.h>
void pal(char str[]){
	int l = 0;
	int h = strlen(str) - 1;
	while (h > l){
		if (str[l++] != str[h--]){
			printf("NO");
			return;
		}
	}
	printf("YES\n");
}
int main(){
    char str1[30];
    gets(str1);
    pal(str1);
}