#include <bits/stdc++.h> 
using namespace std;
int main(){
 int n = 5 ,    m=14;
 vector<pair<pair<int, int>, int>> g;
 g.push_back({{1, 2}, 2});
 
g.push_back({{1 ,  4 },  6 });
g.push_back({{2 ,  1} ,  2 });
g.push_back({{2 ,  3} ,  3 });
g.push_back({{2 ,  4 },  8 });
g.push_back({{2 ,  5} ,  5 });
g.push_back({{3 ,  2} ,  3 });
g.push_back({{3 ,  5 },  7 });
g.push_back({{4 ,  1} ,  6 });
g.push_back({{4 ,  2 },  8 });
g.push_back({{4 ,  5} ,  9 });
g.push_back({{5 ,  2} ,  5 });
g.push_back({{5 ,  3 },  7 });
g.push_back({{5 ,  4} ,  9});
    vector<vector<pair<int,int>>> adjList(n+1);
    
    for(int i=0; i<g.size(); i++)
    {
        int u= g[i].first.first;
        int v = g[i].first.second;
        int wt = g[i].second;
        
        adjList[u].push_back({v,wt});
        adjList[v].push_back({u,wt});
    }
    
    vector<int> dist(n+1, INT_MAX);
    vector<int> visited(n+1, false);
    vector<int> parent(n+1, -1);
    
    dist[1] =0;
    parent[1] = -1;
    
    for(int i=1; i<=n; i++)
    {
        int temp = INT_MAX;
        int node;
        
        for(int j=1; j<=n; j++)
        {
            if(!visited[j] && dist[j]<temp)
            {
                temp = dist[j];
                node = j;
            }
        }
        
        visited[node] = true;
        
        for(auto child: adjList[node])
        {
            int x = child.first;
            int y= child.second;
            
            if(y<dist[x] && !visited[x])
            {
                dist[x] = y;
                parent[x] = node;
            }
            
        }
        
        
    }
    
    vector<pair<pair<int, int>, int>> ans;
    
    for(int i=2; i<=n; i++)
    {
        ans.push_back({{i, parent[i]}, dist[i]});
        cout<<i<<" "<<parent[i]<<" "<<dist[i]<<endl;
    }
}