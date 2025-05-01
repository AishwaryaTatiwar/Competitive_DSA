#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<dq.back()<<dq.front()<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto it:dq){
        cout<<it<<" ";
    }
    return 0;
}