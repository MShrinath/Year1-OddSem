#include <stdio.h>
int main(){
    char str1[30],str2[30];
    int len=0,i;
    gets(str1);
    for(int j=0;str1[j]!='\0';j++){
        len++;
    }
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[--len];
    }
    str2[i]='\0';
    printf("%s",str2);
}