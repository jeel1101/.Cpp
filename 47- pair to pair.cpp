#include<iostream>
using namespace std;
int main(){
   pair<string,pair<int,char>>p={"Jeel",{11,'j'}};
   
   cout<<p.first<<endl;
   cout<<p.second.first<<endl;
   cout<<p.second.second;
    
    return 0;
}
