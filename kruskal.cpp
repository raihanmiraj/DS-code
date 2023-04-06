#include <bits/stdc++.h> 
using namespace std;
bool sortbysec(const vector<int> &a,
              const vector<int> &b)
   {
    return (a[2] < b[2]);
}


int find_set(int v, vector<int> &parent) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], parent);
}

void union_sets(int a, int b, vector<int> &rank, vector<int> &parent) {
    a = find_set(a, parent);
    b = find_set(b, parent);
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
int kruskalMST(int n, int m, vector<vector<int>> &graph) {
 vector<int> parent(m+10);
    vector<int> rank(m+10);
    
     sort(graph.begin(), graph.end(), sortbysec);
    
    for(int i=0; i<=n; i++)
    {
        
        parent[i] = i;
        rank[i] = 0;   
        
    }
    
    int weight = 0;
    
    for(int j=0; j<m; j++)
    {
        
        int x = find_set(graph[j][0], parent);
        int y = find_set(graph[j][1], parent);
        
        if(x!=y)
        {
            weight = weight + graph[j][2]; 
            union_sets(x,y,rank, parent);
        }
        
    }
    
return weight;
    
    
}

int main(){
    vector<vector<int>> g;
    g.push_back({ 1, 2 ,4 });
g.push_back({2, 3 ,5 });
g.push_back({3, 4 ,1});



cout<<kruskalMST(4,3,g);
}