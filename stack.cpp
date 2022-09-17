#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp, *newnode, *head;
void push(){
newnode = (struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
scanf("%d", &newnode->data);
if(head==NULL){
    head = newnode;
    return;
}
newnode->next =head;
head=newnode;
}
void pop(){
 if(head!=NULL){
    head =head->next;
 }
}
void display(){
    temp = head;
    while (temp!=NULL)
    {
          printf("%d ", temp->data);
        temp = temp->next;
    }
  
}
int main(){
    head = NULL;
    int choice;
    while (1)
    {
        scanf("%d", &choice);
        if(choice==1){
            push();
        }else if(choice==2){
            pop();
        }else if(choice==4){
            display();
        }
    }
    
}