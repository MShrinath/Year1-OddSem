#include<stdio.h>
int main()
{
    int rd,rm,ry;
    int ed,em,ey;
    int f=0;
    printf("Enter the date in foyat dd/mm/yy\n");
    printf("Expected return date\n");
    scanf("%d/%d/%d",&ed,&em,&ey);
    printf("Returned date\n");
    scanf("%d/%d/%d",&rd,&rm,&ry);
    if(ry>ey)
    {
        f=10000;
    }
    else if(ry==ey)
    {
        if(rm>em)
        {
            f=500*(rm-em);
        }
        else if(rm==em)
        {
            if(rd>ed)
            {
                f=15*(rd-ed);
            }
        }
    }
    printf("Fine = %d Hackos",f);
    return 0;
}