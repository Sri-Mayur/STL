#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s; //This is how you'll initialize a stack named "s".
  

    // Push is used to add element in the stack.
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    /* Stack will look like this: 4
                                  3
                                  2
                                  1 */
    
    cout<<s.top()<<endl; //It will print the element at the top (i.e. the element which is added in the last). 

    s.pop(); // It will remove the top element.

    cout<<s.top()<<endl; //It will print 3.

    cout<<s.size()<<endl; // It will print 3.

    // empty() tells us whether stack is empty or not.
    if(s.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not empty"<<endl;
    }



   // This is how you can print all the elements in the elements in the stack.
    while(!s.empty()){
        int val = s.top();
        cout<<val;
        s.pop();
    } // It will print 3 2 1



    return 0;
}