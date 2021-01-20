#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    int E,V,s,d, last_visited=-1;
    cin>>V>>E;
    queue<int> q;
    vector<int>::iterator it;
    vector<int> graph[V], path, parent;
    for(int i=0; i<E; i++)
    {
        cin>>s>>d;
        graph[s].push_back(d);
        graph[d].push_back(s);
    }
    s = 0;
    bool visited[V];
    fill_n(visited, V, false);
    visited[s] = true;
    parent.push_back(last_visited);
    last_visited = s;
    path.push_back(s);
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        q.pop();
        if(!visited[s])
        {
            visited[s] = true;
            path.push_back(s);
            parent.push_back(last_visited);
            last_visited = s;
        }
        for(it = graph[s].begin(); it!= graph[s].end(); it++)
        {
            if(!visited[*it])
                q.push(*it);
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
