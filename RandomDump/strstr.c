#include <stdio.h>
int main(){
    char str1[30],str2[30];
    gets(str1);
    gets(str2);
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++){
            printf("yes");
            return 1;
        }
    }
    printf("no");
    return 0;
}