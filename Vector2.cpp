#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v; 
     

    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);


    // v.begin() and v.end() provide you the address of the first and last element of the vector respectively. So, you need Derefrential operator(*) to get the value from the address.

    cout<<endl<<*(v.begin())<<endl; // It will print 4 (first element of the vector).

    cout<<*(v.end())<<endl; // It will print 0 (last element of the vector).

    return 0;
}