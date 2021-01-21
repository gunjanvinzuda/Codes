#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair <int,int> p[5];
    //int a[]={3,4,6,2,1};
    for(int i=4; i>=0; i--)
    {
        p[4-i] = make_pair(i,i*i);
    }
    for(int i=0; i<5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    cout<<endl;
    sort(p, p+5);
    for(int i=0; i<5; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}
