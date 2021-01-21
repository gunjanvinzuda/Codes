#include<iostream>
using namespace std;

int ranka[10], parent[10];

void makeSet()
{
    for(int i=0; i<10; i++)
    {
        ranka[i] = 0;
        parent[i] = i;
    }
}

int findSet(int u)
{
    if(parent[u]==u)
        return u;
    else
        return parent[u] = findSet(parent[u]);
}

int unionSet(int u, int v)
{
    int a = findSet(u);
    int b = findSet(v);
    if(a != b)
    {
        if(ranka[a] >= ranka[b])
        {
            if(ranka[a] == ranka[b])
                ranka[a]++;
            parent[b] = parent[a];
        }
        else
            parent[a] = parent[b];
    }
    else
        cout<<"\nSAME GROUP\n";
}

int main()
{
    makeSet();
    unionSet(1,2);
    unionSet(3,4);
    unionSet(2,4);

    int leader1 = findSet(4);
    cout<<"leader of group having 4 is "<<leader1<<endl;

    int leader2 = findSet(3);
    cout<<"leader of group having 3 is "<<leader2<<endl;

    int leader3 = findSet(2);
    cout<<"leader of group having 2 is "<<leader3<<endl;

    int leader4 = findSet(1);
    cout<<"leader of group having 1 is "<<leader4<<endl;
    return 0;
}
