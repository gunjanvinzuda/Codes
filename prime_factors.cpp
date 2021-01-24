#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> primeFactors;
    vector<int> primeFactorsr;
    for(int i=2; i*i<=n; i++)
    {
        while(n%i == 0)
        {
            primeFactors.insert(i);
            primeFactorsr.push_back(i);
            n/=i;
        }

    }
    if(n>1)
    {
        primeFactorsr.push_back(n);
        primeFactors.insert(n);
    }

    set<int> :: iterator itr;
    for(itr=primeFactors.begin(); itr!=primeFactors.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(int i=0; i<primeFactorsr.size(); i++)
    {
        cout<<primeFactorsr[i]<<" ";
    }
    return 0;
}

