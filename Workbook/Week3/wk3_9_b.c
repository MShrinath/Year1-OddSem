#include <stdio.h>
void sum(char);
void fun(int);
int main(){
    char ssc = 123456;
    sum(ssc);
}
void sum(char s){
    char f=s;
    printf("%d\n",f);
    char ss=49;
    fun(ss);
}
void fun(int s){
    int ss=s;
    printf("%d\n",s);
}