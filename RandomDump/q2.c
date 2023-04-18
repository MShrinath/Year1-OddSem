#include <stdio.h>
struct bank{
    char name[30];
    char accno[30];
    char branch[30];
    int branchcode;
    long long int balance;
};
int main(){ 
    struct bank b[2];
    for(int i=0;i<2;i++){
        printf("Enter Record %d\n",i+1);
        gets(b[i].name);
        gets(b[i].accno);
        gets(b[i].branch);
        scanf("%d",&b[i].branchcode);
        scanf("%lld",&b[i].balance);
    }
    for(int i=0;i<2;i++){
    printf("Name : %s\nAccno : %s\nBranch : %s\nBranch No. : %d\n Account Balance : %lld\n",b[i].name,b[i].accno,b[i].branch,b[i].branchcode,b[i].balance);
    }
}