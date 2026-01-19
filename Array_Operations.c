#include <stdio.h>
#define MAX 50

int arr[MAX], num, pos, loop;
void insert(int arr[]){
    int ele;
    printf("Enter element to insert:");
    scanf("%d",&ele);
    printf("\nEnter postion to insert in:");
    scanf("%d",&pos);
    num++;
    if(pos>0 && pos<num){
        for(int i=num-1;i>pos-1;i--) arr[i]=arr[i-1];
        arr[pos-1]=ele;
        for(int i=0;i<num;i++) printf("%d ",arr[i]);
    }
}

void pop(int arr[]){
    printf("\nEnter position to delete:");
    scanf("%d",&pos);
    for(int i=pos-1;i<num;i++){
        arr[i]=arr[i+1];
    }
    num--;
    for(int i=0;i<num;i++) printf("%d ",arr[i]);
}

void search(){
    int ele;
    printf("\nEnter element to search:");
    scanf("%d",&ele);
    
    for(int i=0;i<num;i++) if(arr[i]==ele){
        printf("The Position of %d is arr[%d]",ele,i);
    }
}

int main() {
        printf("Enter the number of elements to be used:");
        scanf("%d",&num);
        printf("Enter the elements:");
        for(loop=0;loop<num;loop++) scanf("%d",&arr[loop]);
        while (1){
            int choice;
            printf("\n1. Insertion\n2. Deletion\n3. Search\n4. exit\nEnter choice:");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    insert(arr);
                    break;
                case 2:
                    pop(arr);
                    break;
                case 3:
                    search(arr);
                case 4:
                    return 0;
                default:
                    printf("Choice Error!");
            }
        }
}
