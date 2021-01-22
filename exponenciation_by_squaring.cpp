//time complexity O(logn)

#include<iostream>
using namespace std;

int main()
{
    long long base, power, ans=1;
    cin>>base>>power;
    while(power>0)
    {
        if(power%2 == 0)
        {
            base *= base;
            power /= 2;
        }
        else
        {
            ans *= base;
            power--;
        }
    }
    cout<<ans;
    return 0;
}
