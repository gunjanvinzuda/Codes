#include<iostream>
#include<algorithm>

using namespace std;

struct Activity
{
    int id;
    int stime;
    int ftime;
};

bool cmp(Activity a1,Activity a2)
{
    return a1.ftime < a2.ftime;
}

int main()
{
    int n, last_ftime;
    cin>>n;
    Activity a[n];//<start, end>

    for(int i=0; i<n; i++)
    {
        a[i].id = i+1;
        cin>>a[i].stime>>a[i].ftime;
    }

    sort(a, a+n, cmp);
    last_ftime = a[0].ftime;
    cout<<a[0].id;

    for(int i=1; i<n; i++)
    {
        if(a[i].stime >= last_ftime)
        {
            cout<<" "<<a[i].id;
            last_ftime = a[i].ftime;
        }
    }
    return 0;
}
