#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v; 
     

    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);

    // Vector will look like this: 4 5 7 8 6


    // v.begin() and v.end() provide you the address of the first and last element of the vector respectively. So, you need Derefrential operator(*) to get the value from the address.

    cout<<endl<<*(v.begin())<<endl; // It will print 4 (first element of the vector).

    cout<<*(v.end())<<endl; // It will print 0 (last element of the vector).

    // We have seen that we can print the first and the last element of the vector with the help of begin() and end() operations.
    // However, we can use same begin() and end() operations to get the elements between first and last element of the vector.

    // Suppose we want to get the element present at index 3. We can access it by using v.begin()+3.

    cout<<*(v.begin()+3)<<endl; // It will print 8.

    // clear() is used to remove all the elements from the vector.

    v.clear();

    cout<<v.size()<<endl; // It will print 0.

    // empty() is used to check if the vector has some element into it or not. 

    if(v.empty()){
        cout<<"Empty"; // Since we have used clear() operation above, it will print "Empty".
    }


    return 0;
}