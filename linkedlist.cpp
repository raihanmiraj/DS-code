#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
struct node *temp, *head, *newnode;
void insert(){
newnode = (struct node*)malloc(sizeof(struct node));
scanf("%d", &newnode->data);
newnode->next = NULL;
if(head==NULL){
    head = newnode;
    return;
}
temp = head;
while (temp->next!=NULL)
{
    temp= temp->next;
}
temp->next= newnode;
}
void insertAtPosition(){
printf("Tell Me the position Name\n");
int pos ;
scanf("%d", &pos);
int count  =1;
printf("enter The Value To Store\n");
newnode = (struct node*)malloc(sizeof(struct node));
newnode->next = NULL;
scanf("%d", &newnode->data);
temp = head;
while(pos-1>count){
temp = temp->next;
}

if(temp->next!=NULL){
newnode->next = temp->next;
}
temp->next = newnode;

}
void display(){
    temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data );
        temp =temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    int n ;
    while (1)
    {
         scanf("%d", &n);
         if(n==1){
            insert();
         }else if(n==2){
            insertAtPosition();
         }else if(n==4){
            display();
         }
    }
    

}