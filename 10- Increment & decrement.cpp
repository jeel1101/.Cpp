#include<iostream>
using namespace std;
int main()
{
    //post increment
    int a=10;
    int b= a++;
    
    cout<<"a= "<<a;
    cout<<"\n"<<"b= "<<b;
    
    //pre increment
    int c=10;
    int d= ++c;
    
    cout<<"\n\n";
    cout<<"c= "<<c;
    cout<<"\n"<<"d= "<<d;
    
    return 0;
}
