#include <stdio.h>
int main() 
{
    FILE *fp;
    int s[5];
    fp=fopen("PATH","r");//change to path
    fscanf(fp,"%d %d %d %d %d",&s[0],&s[1],&s[2],&s[3],&s[4]);
    if(s[0]>s[1]&&s[0]>s[2]&&s[0]>s[3]&&s[0]>s[4]){
        printf("%d",s[0]);
    }
    else if(s[1]>s[0]&&s[1]>s[2]&&s[1]>s[3]&&s[1]>s[4]){
        printf("%d",s[1]);
    }
    else if(s[2]>s[0]&&s[2]>s[1]&&s[2]>s[3]&&s[2]>s[4]){
        printf("%d",s[2]);
    }
    else if(s[3]>s[0]&&s[3]>s[1]&&s[3]>s[2]&&s[3]>s[4]){
        printf("%d",s[3]);
    }
    else{
        printf("%d",s[4]);
    }
    fclose(fp);
    return 0;
}

