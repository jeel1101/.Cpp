#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    
    cout<<"Lower bound: "<<*(s.lower_bound(0));
    cout<<"\nUpper bound: "<<*(s.upper_bound(2));//print next val of key
    cout<<"\n\n";
    for(auto val:s){
        cout<<val<<" ";
    }
    
    return 0;
}
