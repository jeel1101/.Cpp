#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    
    stack<int>s2;
    s2.swap(s);
    cout<<"Size of s: "<<s.size();
    cout<<"\nSize of s2: "<<s2.size();
    
    return 0;
}
