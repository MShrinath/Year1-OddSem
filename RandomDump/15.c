#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;

    // inserting to start
    struct node *ptr =NULL;
    ptr=malloc(sizeof(struct node));
    ptr->data=2;
    ptr->link=head;
    head=ptr;

    // inserting at end
    struct node *pt=NULL;
    pt=malloc(sizeof(struct node));
    pt->data=3;
    pt->link=NULL;

    temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=pt;

    // inserting at middle
    struct node *ptrr=NULL;
    ptrr=malloc(sizeof(struct node));
    ptrr->data=4;
    temp=head;
    for(int i=0;i<2;i++){
        temp=temp->link;
    }
    ptrr->link=temp->link;
    temp->link=ptrr;

    // deletion at start
    head = head->link;

    // deletion at end
    temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=NULL;

    // display
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}