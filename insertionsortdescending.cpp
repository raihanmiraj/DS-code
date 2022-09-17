#include<stdio.h>
void swap(int * a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
int arr[] ={3,2,8,5,7,9,1,5};
/*
 
*/
int size = 8;
int i, j,k;
for(i=1;i<size;i++){
 for(j = i ;j>=0;j--){
    if(arr[j]>arr[j-1]){
swap(&arr[j], &arr[j-1]);
    }else{
        break;
    }
 }
 for(k= 0 ; k<size; k++){
    printf("%d ", arr[k]);
}
printf("\n");
}
// for(i = 0 ; i<size; i++){
//     printf("%d ", arr[i]);
// }

}