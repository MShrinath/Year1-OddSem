#include <stdio.h>
int main(){
    char str1[30],str2[30];
    int n,i;
    gets(str1);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s",str2);
}
