#include<iostream>
using namespace std;
int main()
{
    //post decrement
    int a=10;
    int b= a--;
    
    cout<<"a= "<<a;
    cout<<"\n"<<"b= "<<b;
    
    //pre decrement
    int c=10;
    int d= --c;
    
    cout<<"\n\n";
    cout<<"c= "<<c;
    cout<<"\n"<<"d= "<<d;
    
    return 0;
}
