#include<stdio.h>
void insertionsort(int arr[], int n){
int i, j, item;
for(i = 1;i<n;i++){
    item = arr[i];
    for(j = i-1 ; j>=0;j--){
        if( arr[j]<=item){
break;
        }else{
            arr[j+1] = arr[j];
        }
    }
    arr[j+1] = item;
}
}
int main(){
   int arr[] = { 2,8,1,3,4,7,2,6,9};
int size = 9, i;
insertionsort(arr, size);
for( i = 0 ; i<size ; i++){
    printf("%d ", arr[i]);
}
}