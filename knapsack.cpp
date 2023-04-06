#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int knapsack( int W, int wt[], int val[],int n ){
    int i,j,knap[n+1][W+1],w;
    for(int i = 0 ; i<=n; i++){
        for(int w = 0 ;w<=W;w++){
            if(i==0 || w==0){
                knap[i][w] = 0 ;
            }else if(wt[i-1]<=w){
                knap[i][w] = max(val[i-1]+knap[i-1][w-wt[i-1]], knap[i-1][w]);
            }else{
                knap[i][w] = knap[i-1][w];
            }
        }
    }
    return knap[n][W];
}

 
int main(){
    int wt[] = {3,4,5,6},val[] = {2, 3, 4, 1}, n=  4, W=8;
    cout<<knapsack(W,wt, val,n);
}