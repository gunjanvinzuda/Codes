#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dfs(int v, vector<int> graph[],bool visited[], int p)
{
    visited[v] = true;
    for(int j=0; j<graph[v].size(); j++)
    {
        if(!visited[graph[v][j]])
            dfs(graph[v][j], graph, visited, v);
        else
            if(graph[v][j]!=p)
                return true;
    }
    return false;
}

int main()
{
    int E,V,s,d;
    cin>>V>>E;
    vector<int> graph[V];
    for(int i=0; i<E; i++)
    {
        cin>>s>>d;
        graph[s].push_back(d);
        graph[d].push_back(s);
    }
    bool visited[V];
    fill_n(visited, V, false);
    bool flag = false;
    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            if(dfs(i, graph, visited, -1))
            {
                flag = true;
                break;
            }
        }
    }
    if(flag)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
