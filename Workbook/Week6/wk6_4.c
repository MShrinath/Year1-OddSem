#include <stdio.h>
int main(void) {
    int a, b, c, d, e, f, g, h, i;
    printf("Enter a number between 0 and 255: ");
    scanf("%d", &a);
    b = a / 128;
    c = a % 128;
    d = c / 64;
    e = c % 64;
    f = e / 32;
    g = e % 32;
    h = g / 16;
    i = g % 16;
    printf("In binary, your number is: %d%d%d%d%d%d%d%d", b, d, f, h, i / 8, i % 8 / 4, i % 4 / 2, i % 2);
    return 0;
}