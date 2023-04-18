#include <stdio.h>
struct employee{
    char empname[30];
    int empid;
    int empage;
    char empdesg[30];
};
int main(){
    struct employee emp[3];
    for(int i=0;i<3;i++){
        printf("Enter name of employee %d\n",i+1);
        scanf("%s",emp[0].empname);
        printf("Enter ID of employee %d\n",i+1);
        scanf("%d",&emp[0].empid);
        printf("Enter age of employee %d\n",i+1);
        scanf("%d",&emp[0].empage);
        printf("Enter designation of employee %d\n",i+1);
        scanf("%s",emp[0].empdesg);
    }
    for(int i=0;i<3;i++){
        printf("\nEmployee %d Details\n",i+1);
        printf("Name : %s\n",emp[0].empname);
        printf("ID : %d\n",emp[0].empid)
        printf("Age : %d\n",emp[0].empage);
        printf("Designation : %s\n",emp[0].empdesg);
    }
}
