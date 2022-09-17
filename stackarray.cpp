#include<stdio.h>
const int size = 5;
int stack[size];
int top = -1;
void push(){
    if(size-1 ==top){
        printf("Size Is Full");
        return;
    }
    int data;
    scanf("%d", &data);
    top++;
    stack[top] =data;
    printf("%d has inserted\n", data);
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");return;
    }
    int item ;
    item = stack[top];
    top--;
    printf("%d Poped\n", item);
}
void peek(){
    if(top==-1){
        printf("Stack is empty\n");return;
    }
    printf("%d has in top", stack[top]);
}
void display(){
    for(int i = top ; i>=0 ;i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main(){
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