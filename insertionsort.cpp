#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
 
int main(){
 int arr[] = {9,2,4,5,1,3,7,6,8};
    int n = 9,i,j, k;
   for(i = 0 ; i<n;i++){
    int item = arr[i];
    for( j =i-1;j>=0;j--){
        if(arr[j]>=item){
            arr[j+1] =arr[j];
        }else{
            break;
        }
    }
    arr[j+1] =item;
   }
    for(j=0;j<n;j++){
    printf("%d ", arr[j]);
    }
}