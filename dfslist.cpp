
#include<bits/stdc++.h>
using namespace std;
void dfs(int vertex, vector<vector<int>> &adjList, vector<int> &visited, vector<int> &ans  ){
visited[vertex] = true;
 ans.push_back(vertex);
    for(auto child : adjList[vertex]){
 if(!visited[child]){
    visited[child] = true;
    dfs(child, adjList, visited, ans);
}
}
}
int main(){
vector<vector<int>> edges;
edges.push_back({0,1});
edges.push_back({0,2});
edges.push_back({0,3});
edges.push_back({1,4});
edges.push_back({3,4});
edges.push_back({2,3});
int size  = 5;
vector<vector<int>> adjList(size);
for(int i = 0 ;i<edges.size(); i++ ){
    int u = edges[i][0];
    int v = edges[i][1];
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}
vector<int> visited(size, false);

vector<vector<int>> comp;
  vector<int> ans;
 dfs(4, adjList, visited, ans);
  comp.push_back(ans);
for(int i =0 ; i<size;i++){
    if(!visited[i]){
 vector<int> ans;
        dfs(i, adjList, visited, ans);
            comp.push_back(ans);
    }
}

for(int i = 0 ; i<comp.size();i++){
    for(int j = 0 ; j<comp[i].size();j++){
        cout<<comp[i][j]<<" ";
    }
    cout<<endl;
}

}
