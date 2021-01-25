#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> parent, rank1;
int E,V;

struct Edge{
    int u,v,w;
};
vector<Edge> e,mst;
bool cmp(Edge e1, Edge e2)
{
    return e1.w < e2.w;
}

void makeSet()
{
    for(int i=0; i<V; i++)
        parent[i] = i;
}

int findSet(int a)
{
    if(parent[a] == a)
        return a;
    else
        return parent[a] = findSet(parent[a]);
}

bool mergeSet(Edge e1)
{
    int a = findSet(e1.u);
    int b = finsSet(e1.v);

    if(rank1[a] >= rank1[b])
    {
        parent[b] = parent[a];
        if(rank1[a] == rank1[b])
            rank1[a]++;
    }
    else
        parent[a] = parent[b];
}

void krushkal()
{
    for(int i=0; i<e.size(); i++)
    {
        Edge e1 = e[i];
        bool ok = connected(e1);
        if(ok)
        {

        }
    }
}

int main()
{
    int s,d,w;
    cin>>V>>E;

    parent.resize(V);
    rank1.resize(V,0);
    for(int i=0; i<E; i++)
    {
        cin>>s>>d>>w;
        Edge e1 = {s,d,w};
        e.push_back(e1);
        Edge e2 = {d,s,w};
        e.push_back(e2);
    }
    sort(e.begin(), e.end(), cmp);
    makeSet(parent, rank1, V);
    krushkal(e, mst);

    return 0;
}
