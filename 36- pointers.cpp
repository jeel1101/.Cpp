#include<iostream>
using namespace std;
int main(){
    int a=10,*p;
    
    p= &a;
    cout<<"\nValue of a is: "<<*p;
    
    return 0;
}
