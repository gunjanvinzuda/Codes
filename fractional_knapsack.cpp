#include<iostream>
#include<algorithm>
using namespace std;

struct Item
{
    int w,v;
    float r;
};

bool cmp(Item i1, Item i2)
{
    return i1.r > i2.r;
}
int main()
{
    int n,W,ans=0;
    cin>>n>>W;
    Item i1[n];
    for(int i=0; i<n; i++)
    {
        cin>>i1[i].v>>i1[i].w;
        i1[i].r = (float)i1[i].v/i1[i].w;
    }

    sort(i1, i1+n, cmp);
    int j = 0;
    while(W>0 && j<n)
    {
        if((W - i1[j].w) >= 0)
        {
           ans += i1[j].v;
           W -= i1[j].w;
        }
        else
        {
            ans += W*i1[j].r;
            W = 0;
        }
        j++;
    }
    cout<<endl<<ans;
    return 0;
}
