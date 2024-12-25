#include<iostream>
using namespace std;
int main()
{
    int marks;
    
    cout<<"Enter your marks (0-100): ";
    cin>>marks;
    
    if(marks>90 && marks<=100){
        cout<<"\n\nYou got A grade";
    }
    else if(marks>80 && marks<=90){
        cout<<"\n\nYou got B grade";
    }
    else if(marks>70 && marks<=80){
        cout<<"\n\nYou got C grade";
    }
    else if(marks>=33 && marks<=70){
        cout<<"\n\nYou got D grade";
    }
    else{
        cout<<"\n\nYou are fail";
    }
    
    return 0;
}
