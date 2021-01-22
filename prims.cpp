#include<iostream>
#include<vector>

using namespace std;

struct Edge
{
    int u,v,w;
};

int main()
{
    int E, V, u, v, w, ans=0;
    cin>>V>>E;
    vector<Edge> e;
    bool selected[V];
    fill_n(selected, V, false);

    for(int i=0; i<E; i++)
    {
        cin>>u>>v>>w;
        Edge e1 = {u,v,w};
        e.push_back(e1);
        Edge e2 = {v,u,w};
        e.push_back(e2);
    }

    selected[0] = true;
    vector<Edge> mst;

    for(int i=0; i<V-1; i++)
    {
        Edge me = {-1,-1,INT_MAX};
        for(int j=0; j<e.size(); j++)
        {
            if((selected[e[j].u]) && (!selected[e[j].v]) && (e[j].w<me.w))
                me = e[j];
        }
            ans += me.w;
            mst.push_back(me);
            selected[me.v] = true;
    }

    cout<<"\nMinimum weighted sum: "<<ans<<endl;
    for(int i=0; i<mst.size(); i++)
    {
        cout<<mst[i].u<<"-"<<mst[i].v<<endl;
    }
    return 0;
}
