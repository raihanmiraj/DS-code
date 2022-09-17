#include<stdio.h>
void fibonacci(int n){
static int a= 0 , b=1, c;
if(n>0){
    c = a+b;
    printf("%d ", c);
    a = b; 
    b = c;
    fibonacci(n-1);
}
}
int main(){
    int a= 0 , b = 1, c, number = 10, i;
    printf("%d %d ", a, b);
    // for(i = 2; i<number ; i++){
    //     c = a+b;
    //     printf("%d ", c);
    //     a = b;
    //     b=c;
    // }
    fibonacci(number-2);
}