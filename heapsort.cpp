#include<stdio.h>
void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void maxheapify(int arr[], int heapsize , int i){
    int largest = i , l = 2*i+1 , r=2*i+2 ;
    if(l<heapsize && arr[l]>arr[i]){
        largest = l;
    }
    if(r<heapsize && arr[r]> arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(&arr[largest], &arr[i]);
        maxheapify(arr, heapsize, largest);
    }
}
void heapsort(int arr[], int size){
int i ,j;
for( i = size/2; i>=0;i--){
    maxheapify(arr, size , i);
}
for( i = size-1; i>=0 ;i--){
       swap(&arr[i], &arr[0]);
    maxheapify(arr, i, 0);
 
}
}
int main(){
    int arr[] = {9,2,4,5,1,3,7,6,8};
    int n = 9;
    heapsort(arr, n);
    for(int i = 0 ;i<n ; i++){
        printf("%d ", arr[i]);
    }
    
}