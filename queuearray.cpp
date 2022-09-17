#include<stdio.h>
const int size = 5;
int queue[size];
int rear = -1;
int front = -1;
void enqueue(){
    int data;
    scanf("%d", &data);
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }else if(rear==size-1){
        printf("Queue List is full");
    }else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue(){
    if(front>rear){
        printf("Queue is empty");return;
    }else{
        front++;
    }
}
void display(){
    for(int i = front ; i<=rear;i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main(){
int choice;
while(1){
    scanf("%d", &choice);
    if(choice==1){
        enqueue();
    }else if(choice ==2){
        dequeue();
    }else if(choice ==4){
        display();
    }
}
}