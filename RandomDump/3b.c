#include <stdio.h>
int main(){
    char s[20];
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        printf("%d ",s[i]);
    }
}