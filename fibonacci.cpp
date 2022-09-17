#include<stdio.h>    
void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;   
           printf("%d ",n3);     
         n1 = n2;    
         n2 = n3;    
         printFibonacci(n-1);    
    }    
}    
int main()    
{    
//  int n1=0,n2=1,n3,i,number;    
//  printf("Enter the number of elements:");    
//  scanf("%d",&number);    
//  printf("\n%d %d",n1,n2);//printing 0 and 1    
//  for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
//  {    
//   n3=n1+n2;    
//   printf(" %d",n3);    
//   n1=n2;    
//   n2=n3;    
//  }  
//   return 0;  
int a = 0 , b = 1, c, i , number = 10;
 printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(number-2);  

// for(i = 2 ; i<number ;i++){
//     c= a+b;
//     printf("%d ", c);
//     a = b;
//     b = c;
// }
 }    