#include<iostream>
using namespace std;
int main()
{
    int a[5];
    
    cout<<"Enter the array element: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"\n\nArray elements is"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
