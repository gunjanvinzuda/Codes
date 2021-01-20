#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int singleElement(vector<int>& a)
{
    if(a.size()==1)
        return a[0];
    int high, low, mid;
    low = 0;
    high = a.size()-1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(mid+1 < a.size())
        {
            if(a[mid] != a[mid+1])
            {
                if(mid-1 >= 0)
                {
                    if(a[mid] != a[mid-1])
                    {
                        return a[mid];
                    }
                }
                else
                    return a[mid];
            }
        }
        else
        {
            if(mid-1 >= 0)
            {
                if(a[mid] != a[mid-1])
                    return a[mid];
            }
        }
        if(mid%2 == 1)
        {
            if(a[mid] == a[mid-1])
                low = mid+1;
            else
                high = mid-1;
        }
        else
        {
            if(a[mid] == a[mid+1])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int s,n;
    cin>>s;
    vector<int> a;
    for(int i=0; i<s; i++)
        {
            cin>>n;
            a.push_back(n);
        }
    int num = singleElement(a);
    if(num != -1)
        cout<<endl<<num;
    else
        cout<<"\nNA";
    return 0;
}
