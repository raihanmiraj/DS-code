#include<stdio.h>
void merge(int arr[], int left, int mid, int right){
    int i = left, k=left, j = mid+1, b[right];
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while (j<=right)
        {
            b[k] = arr[j];
            j++;k++;
        }
        
    }else{
        while (i<=mid)
        {
            b[k] = arr[i];
            i++;k++;
          }
        
    }
    for( i = left ; i<=right;i++){
        arr[i] =b[i];
    }
}
 void mergesort(int arr[], int left, int right){
    if(left>=right)return;
    int mid = (left+right)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    merge(arr, left, mid, right);
 }

int main(){
int arr[] = { 2,8,1,3,4,7,2,6,9};
int size = 9, i;
mergesort(arr, 0, size);
for(int i = 0 ; i<size ; i++){
    printf("%d ", arr[i]);
}

}