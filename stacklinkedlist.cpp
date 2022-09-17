#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * head , *temp, *newnode;

void push(){
newnode = (struct node*)malloc(sizeof(struct node));
scanf("%d", &newnode->data);
newnode->next = head;
head = newnode;
}
void display(){
  temp = head;
  while(temp!=NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
void pop(){
    if(head==NULL){
        return;
    }
    head = head->next;
}
void peek(){
    if(head==NULL)return;
    printf("%d\n",head->data );
}
int main(){
 head= NULL;
int choice=1;
while(1){
    scanf("%d", &choice);
if(choice==1){
    push();
}else if(choice ==2){
    pop();
}else if(choice == 3){
    peek();
}else if(choice == 4){
    display();
}else if(choice == 0){
    break;
}

}

}