#include <stdio.h>
int main(){
    char ip[20];
    int l,num=0;
    printf("Enter in CAPS\n");
    scanf("%s",ip);
    for(int i=0;ip[i]!='\0';i++){
        l=ip[i]+1;
        switch (l/3){
        case 22:
            num=num*10+2;
            break;
        case 23:
            num=num*10+3;
            break;
        case 24:
            num=num*10+4;
            break;
        case 25:
            num=num*10+5;
            break;
        case 26:
            num=num*10+6;
            break;
        case 27:
            num=num*10+7;
            break;
        case 28:
            num=num*10+8;
            break;
        case 29:
            num=num*10+9;
            break;        
        }
    }
    printf("%d",num);
}