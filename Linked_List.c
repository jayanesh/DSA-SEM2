#include<stdio.h>

//structure For Linked List.

struct node{
    int data;

    struct node* next;//self referencial
}


int main(){
    struct node* head=NULL;
    int ch;
    while(1){
        printf("Linked List Operations:\n1. Insertion\n2 .Count\nEnter Your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                int pos_ch,data;
                printf("Insertion type:\n1. Start\n2. End\n3. Positioned\nEnter Your Choice:");
                scanf("%d",&pos_ch);
                printf("\nEnter Data to store:");
                scanf("%d",&data);
                switch(pos_ch){
                    case 1:
                        insert_beg(&head,data);
                    case 2:
                        insert_end(&head,data);
                    case 3:
                        insert_pos(&head);
                }
                break;
            case 2:
                printf("The count Linked List is: %d",count(&head));
                break;
            //case 3:
                
                
        }
    }
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