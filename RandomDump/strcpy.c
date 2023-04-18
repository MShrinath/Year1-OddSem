#include <stdio.h>
int main(){
    char str1[30],str2[30];
    gets(str1);
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    printf("%s",str2);
}