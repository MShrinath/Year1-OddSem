#include <stdio.h>
int main()
{
	char l;
    printf("enter letter");
    scanf("%c",&l);
    switch (l){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
	return 0;
}