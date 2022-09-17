#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
 
int main(){
 int arr[] = {9,2,4,5,1,3,7,6,8};
    int n = 9,i,j;
    for(int i = 0 ;i<n ; i++){
for(j=0;j<n;j++){
    if(arr[j]>arr[j+1]){
        swap(&arr[j], &arr[j+1]);
    }
}
    }
    for(j=0;j<n;j++){
    printf("%d ", arr[j]);
    }
}