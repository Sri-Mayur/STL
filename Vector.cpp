#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> v; // This is how you'll initialize or declare the vector.
     
    // push_back() is use to push elements into the vector. 
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);
    // Vector will look like this: 4 5 7 8 6

    // pop_back() is use to delete the element at last index.
    v.pop_back(); 


    // v.size() provides the size of the vector or the numbers of elements present in vector.
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "; //It will print 4 5 7 8
    }

    // v.resize() will add spaces in the vector and add 0 to the empty indices if duplication is done atleast once.

    v.resize(5);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "; //It will print 4 5 7 8 4 5 7 8 0
    }

    return 0;
}