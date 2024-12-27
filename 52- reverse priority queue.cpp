#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    
    pq.push(10);
    pq.push(24);
    pq.push(5);
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}
