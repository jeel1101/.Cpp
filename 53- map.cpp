#include <iostream>
#include<map>
using namespace std;

int main() {
    map<string,int>m;
    m["Laptop"]= 100;
    m["Watch"]= 50;
    m["Tablet"]= 150;
    m["Camara"]= 70;
    
    m.insert({"TV",100});
    m.erase("TV");
    
    for(auto p:m){
        cout<<p.first<<"  "<<p.second<<endl;
    }
    cout<<"\n\nCount= "<<m.count("Laptop");

    return 0;
}
