#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vect;
    vect.push_back(1);
    vect.push_back(3);
    vect.insert(vect.begin()+2,10);
    //cout<<vect[2];
    return 0;
}
