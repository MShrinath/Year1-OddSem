#include <stdio.h>
int main(){
    int m1,n1,m2,n2;
    int i,j,k;
    scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
    int a[m1][n1], b[m2][n2]; 
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    if(n1==m2){
    int c[m1][n2];
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            c[i][j]=0;
            for(k=0;k<n2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }}
}