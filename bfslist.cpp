#include <bits/stdc++.h>
using namespace std;
void bfs(int vertex, vector<vector<int>> &adjList, vector<int> &visited, queue<int> &q, vector<int> &ans)
{
    visited[vertex] = true;
    q.push(vertex);
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for (auto child : adjList[front])
        {
            if (!visited[child])
            {
                visited[child] = true;
                q.push(child);
            }
        }
    }
}
int main()
{
    vector<vector<int>> edges;
    edges.push_back({0, 1});
    edges.push_back({0, 3});
    edges.push_back({0, 2});
    edges.push_back({1, 2});
    edges.push_back({2, 4});
    int size = 5;
    vector<vector<int>> adjList(size);
    vector<int> visited(size, false);
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        if (!visited[i])
        {
            bfs(i, adjList, visited, q, ans);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << endl;
    }
}