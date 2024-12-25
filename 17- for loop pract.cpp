#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"\n\nSum of 1 to n num is "<<sum;
    
    return 0;
}
