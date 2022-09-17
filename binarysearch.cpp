#include<stdio.h>
int main(){
int arr[] = {1,4,5,6,7,8,9}, n = 9, lb = 0 , ub = 9, item = 5;

while (lb<=ub)
{
    int mid = (lb+ub)/2;
    if(arr[mid]==item){
        printf("%d ", mid);
        break;
    }else if(arr[mid]<item){
        lb = mid+1;
    }else {
        ub = mid-1;
    }
}



}