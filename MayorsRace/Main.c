#include <stdio.h>
void a(int ra[5][4]){///A . Reading the raw vote totals in precint:
    printf("Reading the raw vote totals in precinct:\n");
    int tv;
    for(int i=0;i<5;i++){
        tv=0;
        for(int j=0;j<4;j++){
            tv+=ra[i][j];
        }
        printf("Precinct %d votes: %d\n",i+1,tv);
    }
}
void b(int rb[5][4]){///B . Displaying the table:
    printf("Displaying the table:\n");
    printf("Precinct   \tA\tB\tC\tD\n");
    for(int i=0;i<5;i++){
        printf("    %d    ",i+1);
        for(int j=0;j<4;j++){
            printf("   \t%d",rb[i][j]);
        }
        printf("\n");
    }
}
void c(int rc[5][4]){///C . Total votes and Percentages:
    printf("Total votes and Percentages:\n");
    int a=0,b=0,c=0,d=0;
    float ap,bp,cp,dp,t;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            switch(j){
                case 0:
                    a+=rc[i][j];
                    break;
                case 1:
                    b+=rc[i][j];
                    break;
                case 2:
                    c+=rc[i][j];
                    break;
                case 3:
                    d+=rc[i][j];
                    break;
            }
        }
    }
    t=a+b+c+d;
    ap=a*100/t;
    bp=b*100/t;
    cp=c*100/t;
    dp=d*100/t;
    printf("A Total votes: %d\nA Percent of Total votes: %.2f%%\n",a,ap);
    printf("B Total votes: %d\nB Percent of Total votes: %.2f%%\n",b,bp);
    printf("C Total votes: %d\nC Percent of Total votes: %.2f%%\n",c,cp);
    printf("D Total votes: %d\nD Percent of Total votes: %.2f%%\n",d,dp);
}  
void d(int rd[5][4]){///D ZZZ. Winnners for each precinct:
    printf("Winnners for each precinct:\n");
    int tv=0;
    char w;
    for(int i=0;i<5;i++){
        tv=0;
        for(int j=0;j<4;j++){
            tv+=rd[i][j];
        }
        for(int j=0;j<4;j++){
            if(rd[i][j]*100.0/tv>50){
                w=j+65;
                printf("Precinct %d, candidate %c: %.2f%% WINNER\n",i+1,w,rd[i][j]*100.0/tv);
            }
        }       
    }
}
void e(int re[5][4]){///E . Run-off betweene the two candidates receiving the highest number of votes:
    printf("Run-off betweene the two candidates receiving the highest number of votes:\n");
    int tv,a,l1=0,l2=0;
    char w,w1,w2;
    for(int i=0;i<5;i++){
        tv=0;
        for(int j=0;j<4;j++){
            tv+=re[i][j];
        }
        a=0;
        for(int j=0;j<4;j++){
            if(re[i][j]*100.0/tv<50){
                a++;
            }
        }
        if(a==4){
            for (int k = 0;k<4; k++){
                if(re[i][k]>l1){
                    l1=re[i][k];
                    w1=k+65;
                }
            }
            for (int k = 0;k<4; k++){
                if(re[i][k]>l2 && re[i][k]!=l1){
                    l2=re[i][k];
                    w2=k+65;
                }
            }
            printf("Precinct %d, Run-off between candidate %c and candidate %c\n",i+1,w1,w2);
        }
    }
}
void f(int rf[5][4]){///F . Candidate C receives only 108 votes in precinct 4:
    printf("Candidate C receives only 108 votes in precinct 4:\n");
    rf[3][2]=108;
    a(rf);
    b(rf);
    c(rf);
    d(rf);
    e(rf);
}
int main()///int main
{
    int r[5][4]={{192,48,206,37},{147,90,312,21},{186,12,121,38},{114,21,408,39},{267,13,382,29}};
    // a(r);
    // b(r);
    // c(r);
    // d(r);
    // e(r);
    f(r);
    return 0;
}