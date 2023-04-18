#include <stdio.h>
int main(){
    char str1[30],str2[30],str3[30];
    int i;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
    }
    for(int j=0;str2[j]!='\0';j++){
        str3[i++]=str2[j];
    }
    printf("%s",str3);
}