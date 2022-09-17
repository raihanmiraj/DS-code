#include<stdio.h>
int stack[10];
int top = -1;
void push(){
scanf("%d", &stack[++top]);
}
void pop(){
top--;
}
void display(){
for(int i = top;i>=0 ;i--){
    printf("%d ", stack[i]);
}
}
int main(){
    int n ;
    while (1)
    {
        scanf("%d", &n);
        if(n==1){
            push();
        }else if(n==2){
            pop();
        }else if(n==4){
            display();
        }
    }
    
}