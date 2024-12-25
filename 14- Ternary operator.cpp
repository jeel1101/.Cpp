#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    
    (a>b) ? cout<<"\n"<<a<<" is max":cout<<"\n"<<b<<" is max";
    
    return 0;
}
