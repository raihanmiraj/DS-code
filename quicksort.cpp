#include<stdio.h>
void swap(int * a, int * b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}
 int partition(int arr[], int left, int right){
    int i , j = left-1 , pivot = arr[right];
    for(i = left ;i<right ;i++){
        if(pivot>arr[i]){
            j++;
            swap(&arr[j], &arr[i]);
        }
    }
    j++;
    swap(&arr[j], &arr[right]);
    return j;
 }
 void quicksort(int arr[], int left, int right){
    if(left>right)return;
    int p = partition(arr, left, right);
    quicksort(arr, left, p-1);
    quicksort(arr, p+1, right);
 }

int main(){
int arr[] ={3,6,2,1,7,5,3,2,0,2} , n = 10;
quicksort(arr,0,  n-1);
for(int i = 0 ;i<n ; i++){
    printf("%d ", arr[i]);
}
}