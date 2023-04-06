#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void printLcs(vector<vector<char>> &b, string &a, int x, int y){
if(x== 0 || y ==0)return;

  if(b[x][y]=='l'){
    printLcs(b, a , x, y-1);
}else if(b[x][y]=='u'){

printLcs(b, a , x-1, y);

}else if(b[x][y]=='c'){
    printLcs(b, a, x-1, y-1);
    cout<<a[x]<<"";
}
}
int main(){
string x,y;
x = "0ABCBDAB";
y = "0BDCABA";
/*a.insert(0, ' ');
b.insert(0, ' ');*/
int m  = x.length()-1;
int n = y.length()-1;
vector<vector<int>> c(m+1, vector<int>(n+1, 0));
vector<vector<char>> b(m+1, vector<char>(n+1, 0));
//nt c[m][n];
for(int i = 0 ; i<=m;i++){
    for(int j = 0  ; j<=n; j++){
        if(i==0 || j == 0){
            c[i][j] = 0;
            b[i][j] = 'n';
        }else if(x[i] == y[j]){
        c[i][j] = c[i-1][j-1]+1;
          b[i][j] = 'c';
        }else if(c[i-1][j]>=c[i][j-1]){
        c[i][j] = c[i-1][j];
          b[i][j] = 'u';
        }else{
        c[i][j] = c[i][j-1];
          b[i][j] = 'l';
        }
        printf("%d ", c[i][j]);
    }
    cout<<endl;
}

    printf("%d ", c[m][n]);

printLcs(b, x, m, n);
cout<<endl;
for(int i=0;i<=n+1;i++){
    for(int j = 0 ; j<=m ;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
}
