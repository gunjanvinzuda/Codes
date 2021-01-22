#include<iostream>
#include<set>// adding library to use functions described in theory

using namespace std;

int main()
{
    set<int> s1; // declaring a set
    set<int> :: iterator it; //  declaring iterator for set

    for(int i=0;i<5;i++){
        s1.insert(i+10); // inserting elemnts into set
    }

      //checking by printing
    for(it= s1.begin(); it!=s1.end(); it++)
        cout << *it << " ";// printing the set

    // We can observe that output will be print in sorted order. That is the property of set



    //s1.erase(12); // deleting element 12 from set 1

set<int> s2;
    for(int i=0;i<4;i++)
        s2.insert(i);

      /*     s2.emplace(2);

    // adding element which already
    // exists there will be no
    // change in the set

    s2.emplace(6);
    */
    //adding unique element

cout<<endl<<s1.size()<<" "<<s2.size();
     s1.swap(s2); // swapping operation between sets s1 and s2
cout<<endl;
    for(it= s1.begin(); it!=s1.end(); it++)
        cout << *it << " ";// printing the set
cout<<endl<<s1.size()<<" "<<s2.size();

    s2.clear(); // clearing set 2
    s2.empty() ? cout <<"list is empty" << endl: cout << "list is not empty" << endl;
    // ternary operation which resutls list is empty or not

    for(int i=0; i<5; i++)
        s2.insert(i+10);


    cout << "size of the list is " << s2.size() << endl; // size function returns size

    cout << "finding element 12 in list" << endl;
    it= s2.find(12); // finding element 12 in the set
    cout << *it << endl;

    s2.insert(12); // inserting 12 in the set
    if(s2.count(22)) // counting number of 22
        cout << "number 22 is in the list " << endl;
    else
        cout << "22 is not in the list";
        return 0;
}
