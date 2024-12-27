#include<iostream>
using namespace std;
int main(){
    int a=10,*p,**q;
    
    p= &a;
    q= &p;
    
    cout<<"\nValue of a is: "<<*p;
    cout<<"\nValue of a is: "<<**q;
    
    return 0;
}
