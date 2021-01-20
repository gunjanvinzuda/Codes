#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(vector< pair<int,int> >& a, int n)
{
    if(a.size()==1)
    {
        if(a[0].first==n)
            {
                return 1;
            }
        else
            return -1;
    }
    int low = 0;
    int high = a.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid].first == n)
            return a[mid].second;
        else if(n < a[mid].first)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main()
{
    int s,n;
    cout<<"Enter total number of elements: ";
    cin>>s;
    vector< pair<int,int> >a;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>n;
        a.push_back(make_pair(n,i+1));
    }
    sort(a.begin(), a.end());
    cout<<"Enter the number to be searched: ";
    cin>>n;
    n = binarySearch(a,n);
    if(n != -1)
        cout<<"\nThe number is at position: "<<n;
    else
        cout<<"\nThe number is not in the array.";
    return 0;
}
