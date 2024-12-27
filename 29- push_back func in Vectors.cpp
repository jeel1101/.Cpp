#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={11,14};
    cout<<"Size of vector is: "<<vec.size();
    vec.push_back(2);
    cout<<"\n\nAfter push back size of vector is "<<vec.size();
    
    return 0;
}
