#include <iostream>
#include<map>
using namespace std;

int main() {

	// here both key and value are int type.
	map<int , int > m;

	//initially map will be empty
	if(m.empty())
	    cout<<"Map is empty"<<endl;


	int j = 100;
	for(int i=1;i<=5;i++)
	{
	    // use of insert function to insert elements in map.
	    m.insert({i,j});
	    j--;
	}

	cout<<"Size of map is "<<m.size()<<endl;

	 map<int, int>::iterator itr;
	 for(itr = m.begin() ; itr != m.end() ; itr++)
	 {
	     cout<<itr->first<<" "<<itr->second<<endl;
	 }

	if(m.find(4) != m.end())
    {
        itr = m.find(4);
        cout<<itr->first<<endl;
        cout<<"Element with key 4 exists in map"<<endl;
    }

	else
	    cout<<"Element with key 4 does not exists in map"<<endl;

	if(m.find(6) != m.end())
	    cout<<"Element with key 6 exists in map"<<endl;
	else
	    cout<<"Element with key 6 does not exists in map"<<endl;


	// let us delete element with key 4 from our map
	itr = m.find(4);

	//if element with key 4 exists we remove that element
	if(itr != m.end())
	    m.erase(itr);


	// after removing element 4
    for(itr = m.begin() ; itr != m.end() ; itr++)
	{
        cout<<itr->first<<" "<<itr->second<<endl;
	}
    cout<<"lower bound of key 3 is "<<m.lower_bound(3)->first<<" "<<m.lower_bound(3)->second<<endl;
	cout<<"lower bound of key 4 is "<<m.lower_bound(4)->first<<" "<<m.lower_bound(4)->second<<endl;
	cout<<"upper bound of key 4 is "<<m.upper_bound(4)->first<<" "<<m.upper_bound(4)->second<<endl;

	m.clear();
	if(m.empty()) cout<<"map is empty"<<endl;



	return 0;
}
