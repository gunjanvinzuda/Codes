//permutations of array is for n the array should contain 1 to n numbers exactly once.
//for n=3 permutations of array:
//{1,2,3}, {1,3,2}, {2,1,3}, {2,3,1}, {3,1,2}, {3,2,1}

#include<iostream>
#include<vector>
#include<time.h>
#include<iomanip>

using namespace std;
vector<int> a;
vector<bool> used;
int n;
//by recursion
void permutation(int pos)
{
    if(pos == n)
    {
        for(int i=0; i<n ;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(!used[i])
        {
            used[i] = true;
            a[pos] = i+1;
            permutation(pos+1);
            used[i] = false;
        }
    }
}

// by iteration no complete
void permutation_it()
{
    int pos = 0;
    for(int i=1; i<=n; i++)
    {
        if(pos == n)
        {
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<endl;
            pos = 0;
            fill(used.begin(), used.end(), false);
        }
        for(int j=i; j!=i; (j+1)%n)
        {
            if(!used[j-1])
            {
                used[j-1] = true;
                a[pos] = j;
                pos++;
            }
        }

    }

}
int main()
{
    time_t stime, etime;
    cin>>n;
    a.resize(n);
    used.resize(n, false);
    stime = clock();
    permutation(0);
    etime = clock();
    double time = double(etime - stime)/ double(CLOCKS_PER_SEC);
    cout<<"Time taken with recursive approach: "<<time<<setprecision(5);
    /*
    stime = clock();
    permutation_it();
    etime = clock();
    time = double(etime - stime)/ double(CLOCKS_PER_SEC);
    cout<<"Time taken with iterative approach: "<<time<<setprecision(5);
    */
    return 0;

}
