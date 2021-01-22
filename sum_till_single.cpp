//n=5432
//sum = 14
// sum = 1+4 = 5 <= output

#include<iostream>
using namespace std;

int sumation(int n)
{
    if(n < 10)
        return n;
    int sum = 0;
    while(n > 0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return sumation(sum);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumation(n);
    return 0;
}
