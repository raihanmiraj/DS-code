#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
 
int main(){
 int arr[] = {9,2,4,5,1,3,7,6,8};
    int n = 9,i,j, k;
    for(int i = 0 ;i<n ; i++){
        int min = arr[i];
        k = -1;
        for(j = i+1 ;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                k = j;
            }
        }
        if(k!=-1)swap(&arr[i],&arr[k]);

    }
    for(j=0;j<n;j++){
    printf("%d ", arr[j]);
    }
}