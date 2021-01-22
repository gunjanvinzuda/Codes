//time complexity O(√n)
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
        cout<<"Number is prime number."<<endl;
    else
        cout<<"Number is not prime number."<<endl;
    return 0;
}
