#include <stdio.h>
int main() 
{
    FILE *fp;
    int r[10]={10,12,13,22,34,44,45,5,55,7};
    int sum=0;
    fp=fopen("PATH","w");//change to path
    for(int i=0;i<10;i++){
        fprintf(fp,"%d ",r[i]);
        sum=sum+r[i];}
    fprintf(fp,"\navg = %d",sum);
    fclose(fp);
    return 0;
}

