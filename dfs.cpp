#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
    int V,E,s,d;

    cin>>V>>E;
    vector<int> adj[V], path, parent;
    vector<int>::iterator it;
    stack<int> stk;
    bool visited[V];
    int dist[V];
    fill_n(dist, V, 0);
    fill_n(visited, V, false);

    for(int i=0; i<E; i++)
    {
        cin>>s>>d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }
    s = 0;
    stk.push(s);
    visited[s] = true;
    path.push_back(s);
    int last_visited = 0;
    parent.push_back(-1);
    last_visited = 0;
    while(!stk.empty())
    {
        s = stk.top();
        stk.pop();
        if(!visited[s])
        {
            parent.push_back(last_visited);
            visited[s] = true;
            path.push_back(s);
            last_visited = s;

        }
        for(it=adj[s].begin(); it!= adj[s].end(); it++)
        {
            if(!visited[*it])
                stk.push(*it);
        }
    }
    cout<<"Path: ";
    for(it = path.begin(); it!=path.end(); it++)
        cout<<*it<<" ";
    cout<<"\nParents: ";
    for(it = parent.begin(); it!=parent.end(); it++)
        cout<<*it<<" ";
    return 0;
}

