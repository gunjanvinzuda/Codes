#include<iostream>

using namespace std;
typedef long long ll;

void build(ll pref[], ll a[])
{
    int n = sizeof(a)/sizeof(a[0]);
    pref[0] = a[0];
    for(int i=1; i<n; i++)
    {
        pref[i] = pref[i-1] + a[i];
    }
}

ll query(int l, int r, ll pref[])
{
    return pref[r] - pref[l-1];
}

int main()
{
    int n;
    cin>>n;
    ll a[n+1];
    a[0] = 0;
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
    }

    ll pref[n+1];
    build(pref,a);

    int q,l,r;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<query(l,r,pref)<<endl;
    }
}
