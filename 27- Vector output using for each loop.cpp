#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={'a','b','c','d','e'};  //vecror of size 3
    
    for(char i:vec){
        cout<<i<<" ";
    }
    
    return 0;
}
