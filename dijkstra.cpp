#include <bits/stdc++.h> 
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source){
 vector<vector<pair<int, int>>> adjList(vertices);
    for(int i = 0; i<vec.size();i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int wt = vec[i][2];
        adjList[u].push_back({v, wt});
        adjList[v].push_back({u, wt});
    }
    vector<int> dist(vertices, INT_MAX);
    set<pair<int, int>> s;
    dist[source] = 0;
    s.insert({0, source});
    while(!s.empty()){
        auto front = *s.begin();
        int frontNode = front.second;
        s.erase(s.begin());
        for(auto child: adjList[frontNode]){
            if(dist[frontNode] + child.second<dist[child.first] ){
                auto searchItem = s.find({dist[child.first], child.first});
                if(searchItem!=s.end()){
                    s.erase(searchItem);
                }
                dist[child.first] = dist[frontNode] + child.second;
                s.insert({dist[child.first], child.first});
            }
        }
    }
    return dist;
}
int main(){

}