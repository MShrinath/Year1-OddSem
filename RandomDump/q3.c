#include <stdio.h>
struct employee{
    char empname[30];
    int empid;
    long int empsalary;
};
int main(){
    struct employee emp[3];
    for(int i=0;i<3;i++){
        gets(emp[0].empname);
        scanf("%d",&emp[0].empid);
        scanf("%ld",&emp[0].empsalary);
    }
    for(int i=0;i<3;i++){
        if(emp[i].empsalary>60000){
            printf("Name : %s\nID : %d\nSalary : %ld\n",emp[0].empname,emp[0].empid,emp[0].empsalary);
        }
    }
}
