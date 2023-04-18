#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user *p_user;

typedef struct user {
    int n;
    char nome[35];
    p_user esq;
    p_user dir;
} user;

void apagar (p_user atual){
    if (atual !=NULL){
        apagar(atual->  esq );
        apagar(atual->  dir );
        free(atual);
    }
}
p_user inserir(p_user atual,char nome[]){
    p_user novo=malloc(sizeof(user));
    if(novo==NULL){
        exit(1);
    }
    strcpy(novo->nome, nome);
    novo->n=0;
    novo->esq=NULL;
    novo->dir=NULL;
    return novo;
}
p_user procurar(p_user topo,char novo[]){
    if(topo==NULL){
        topo = inserir(topo,novo);
        printf("OK\n");
    }
    else if (!(strcmp(topo->nome,novo))){
        (topo->n)++;
        printf("%s%d\n",topo->nome,topo->n);
    }
    else if(strcmp(topo->nome,novo)>0){
        topo->esq=procurar(topo->esq,novo);
    }
    else{
        topo->dir=procurar(topo->dir,novo);

    }
    return topo;
}
int main(){
    int n;
    char novo[35];
    p_user usuarios=NULL;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",novo);
        usuarios=procurar(usuarios,novo);
    }
    apagar(usuarios);

    return 0;
}