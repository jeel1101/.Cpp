#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    
    cout<<"Enter the elements: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"\n\nArray elements is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
    }
    
    return 0;
}
