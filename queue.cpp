#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * head, * temp, * newnode;

void enqueue(){
newnode = (struct node* )malloc(sizeof(struct node));
newnode->next = NULL;
scanf("%d", &newnode->data);
if(head==NULL){
    head = newnode;
    return;
}
temp = head;
while (temp->next!=NULL)
{
     temp = temp->next;
}
temp->next = newnode;

}
void dequeue(){
if(head!=NULL){
    
}
}
void display(){
temp =head;
while (temp!=NULL)
{
    printf("%d ", temp->data);
    temp = temp->next;
}

}
int main(){
    head = NULL;
int choice;
while(1){
    scanf("%d", &choice);
    if(choice==1){
        enqueue();
    }else if(choice==2){
        dequeue();
    }else if(choice==4){
        display();
    }
}
}