//time complexity O(n);
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cin>>word;
    int n = word.length();
    int freq[26]={};
    pair<char,int> p[n];
    for(int i=0; i<n; i++)
    {
        freq[word[i]-'a']++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<word[i]<<" "<<freq[word[i]-'a']<<endl;
    }
    return 0;
}
