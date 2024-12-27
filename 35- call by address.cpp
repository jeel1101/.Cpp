#include<iostream>
using namespace std;
//sum of 2 nums
int sum(int *a, int *b){
    return *a+*b;
}
int main(){
    int a,b;
    
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    int s= sum(&a,&b);
    cout<<"\n\nSum is: "<<s;
    
    return 0;
}
