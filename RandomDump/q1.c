#include <stdio.h>
struct books{
    int cost;
    char title[30];
    char author[30];
};
int main()
{
    struct books b1;
    gets(b1.title);
    gets(b1.author);
    scanf("%d",&b1.cost);
    printf("Title : %s\nAuthor : %s\nCost : %d\n",b1.title,b1.author,b1.cost);
}