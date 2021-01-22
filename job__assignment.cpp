#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<int, int> j1, pair<int, int> j2)
{
    return j1.first > j2.first;
}

int main()
{
    int n, ans = 0, p, d;
    cin>>n;
    bool a[n];
    vector< pair<int, int> >  jobs;

    for(int i=0; i<n; i++)
        a[i] = true;

    for(int i=0; i<n; i++)
    {
        cin>>p>>d;
        jobs[i] = make_pair(p,d);
    }

    sort(jobs.rbegin(), jobs.rend());
    for(int i=0; i<n; i++)
    {
        for(int j=min(n, jobs[i].second)-1; j>=0; j--)
        {
            if(a[j])
            {
                a[j] = false;
                ans += jobs[i].first;
                break;
            }
        }
    }
    cout<<endl<<ans;
    return 0;
}
