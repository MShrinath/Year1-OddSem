#include <stdio.h>
int main(){
    char str1[30],str2[30];
    gets(str1);
    gets(str2);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            printf("not");
            return 0;
        }
    }
    printf("yes");
    return 1;
}