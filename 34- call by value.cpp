#include<iostream>
using namespace std;
//sum of 2 nums
int sum(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    
    cout<<"Enter the two numbers: ";
    cin>>x>>y;
    int s= sum(x,y);
    cout<<"\n\nSum is: "<<s;
    
    return 0;
}
