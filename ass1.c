#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};



void printLinkedList(struct Node* head){
    struct Node* temp=head;

   
    while(temp->next!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }

    printf(" %d ",temp->data);
}
int getLength(struct Node* head){
    struct Node* temp=head;
    int cnt=1;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

struct Node* deleteLInkedList(struct Node* head,int d){
    struct Node* prev=head;
    struct Node* curr=prev->next;
    while(curr->data!=d){
        prev=curr;
        curr=prev->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    free(curr);//memory gets freed
    return head;
}

struct Node* insert(struct Node* head,int d,int value){
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=d;
    struct Node* curr=head;
    while(curr->data!=value){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
   
}



int main(){

    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* head=newNode;
    struct Node* tail=newNode;
    newNode->data=5;
    struct Node* newNode2=(struct Node*)malloc(sizeof(struct Node));

    newNode2->data=3;
    newNode->next=newNode2;
    newNode2->next=NULL;

    struct Node* newNode3=(struct Node*)malloc(sizeof(struct Node));
    newNode3->data=7;
    newNode2->next=newNode3;
    newNode3->next=NULL;

    printLinkedList(head);

    head=insert(head,8,3);

    printLinkedList(head);
    int length=getLength(head);
    printf("\nLength  %d \n",length);
    printf("After deletion of node \n");
    deleteLInkedList(head,7);
    printLinkedList(head);

    int num;
    printf("\nenter data to be searched \n");
    scanf("%d",&num);//num to be searched taken as user input
    struct Node* temp1=head;
    while(temp1->next!=NULL){
        if(temp1->data==num){
            printf("Element found!! ");
           
        }
        temp1=temp1->next;
    }
    if(temp1->data==num){
        printf(" found ");
    }
    else{
        printf(" not found ");
    }
    return 0;
}
