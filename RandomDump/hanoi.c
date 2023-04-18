#include <stdio.h>
void tow(int,char,char,char);
int main(){
    int num=3;
    // scanf("%d",&num);
    printf("Sequence is\n");
    tow(num,'A','B','C');
}
void tow(int num, char frompeg,char topeg, char auxpeg){
    if(num==1){
        printf("Move disk from peg %c to peg %c \n",frompeg,topeg);
        return;
    }
    tow(num-1,frompeg,auxpeg,topeg);
    printf("Move disk from peg %c to peg %c\n",frompeg,topeg);
    tow(num-1,auxpeg,topeg,frompeg);

}