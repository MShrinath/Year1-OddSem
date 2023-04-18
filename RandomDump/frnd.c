#include<stdio.h>
int main()
{
    int n,k,max=0,min=0;

    printf("Enter the number of Teams: ");
    scanf("%d",&n);
    int ar_score[n],ar_pt[n],ar_dif[n];
    printf("Enter the rank to check: ");
    scanf("%d",&k);
    if(n>=1&&n<=50&&k>=1&&k<=5)
    {
        for(int i=0;i<n;i++)
        {
            printf("\nEnter the score of team %d: ",i+1);
            scanf("%d",&ar_score[i]);
            printf("Enter the penalty time of team %d: ",i+1);
            scanf("%d",&ar_pt[i]);
        }
        min=ar_pt[0];
        for(int i=0;i<n;i++)
        {
            ar_dif[i]=ar_score[i]-ar_pt[i];
            if(min>ar_pt[i])
            {
                min=ar_pt[i];
            }
        }
        max=ar_dif[0];
        

        for(int i=0;i<n;i++)
        {
            if(ar_dif[i]>max)
            {
                max=ar_dif[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            
        }
        
        
    }

}
