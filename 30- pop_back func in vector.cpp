#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={11,14,2};
    cout<<"Size of vector is: "<<vec.size();
    vec.pop_back();
    cout<<"\n\nAfter pop back size of vector is "<<vec.size();
    
    return 0;
}
