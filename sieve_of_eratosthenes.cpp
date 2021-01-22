//time complexity O(n*log(logn))
//fine prime numbers from 1 to n;

#include<time.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    clock_t start, endt;
    int n;
    cin>>n;
    bool isPrime[n+1] ;
    for(int i=0; i<=n; i++)
    {
        isPrime[i] = true;
    }
    start = clock();
    for(int i=2; i*i<=n; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                    isPrime[j] = false;
            }
        }
    }
    endt = clock();
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
            {

                cout<<i<<" ";
            }
    }

    double time = double(endt-start)/double(CLOCKS_PER_SEC);
    cout<<"\nTime: "<<fixed<<time<<setprecision(3);
    return 0;
}
