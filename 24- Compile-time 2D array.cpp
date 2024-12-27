#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={{1,2},{3,4}};
    
    cout<<"Array elements is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
    }
    
    return 0;
}
