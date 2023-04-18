#include <stdio.h>
#include <string.h>
void main()
{
    char str[10][10], t[10][10];
    int i, j, n;
    printf("enter the number of students:");
    scanf("%d", &n);
    printf("enter the names:");
    for (i = 0; i < n; i++){
        scanf("%s", str[i]);
    }
    for (i = 0; i < n; i++){
        strcpy(t[i], str[i]);
    }

    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (strcmp(str[i], str[j]) > 0){
                strcpy(t[i], str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], t[i]);
            }
        }
    }

    printf("the names in alphabetical order are:");
        for (i = 0; i < n; i++){
            printf("%s\n",str[i]);
            }
}