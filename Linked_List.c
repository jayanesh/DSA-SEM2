#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;//self referencial
};


struct node* create(int d){
    struct node* nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
}
void insert_beg(struct node** q,int d){
    struct node* nn;
    nn=create(d);
    if(*q==NULL) *q=nn;
    else{
        nn->next=*q;
        *q=nn;
    }
}
void displayll(struct node* q){
    struct node* temp;
    temp=q;
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void delete_at_beg(struct node** q){
    struct node* temp;
    temp=*q;
    if(temp==NULL) printf("Underflow");
    else{
        *q=temp->next;
        free(temp);
    }
}
int main(){
    struct node* head=NULL;
    int data;
    int ch;
    while(1){
        printf("Enter choice:\n1. insert\n2. delete\n3. Exit\nChoose:");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter value to store:");
            scanf("%d",&data);
            insert_beg(&head,data);
            displayll(head);
        }
        if(ch==2){
            delete_at_beg(&head);
            displayll(head);
        }
        if(ch==3) return 0;
    }
}
