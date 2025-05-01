#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<v[1];
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    cout<<vec[0].second<<vec[1].first;
    vector<int> v1(v);
    cout<<v1[0]<<v1[1]<<endl;

    //iterator
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";//will give address
    vector<int>::iterator it1=v.end();
    cout<<*(it);
    cout<<v.back()<<endl;

    //printing
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //deleting from vector
    v.erase(v.begin()+1);
    for(auto it:v){
        cout<<it<<" "<<endl;
    }
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.erase(v.begin()+2,v.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //inserting into vector
    vector<int> c(2,50);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
    v.insert(v.begin(),c.begin(),c.end());
    cout<<v.size()<<endl;
    v.pop_back();
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<v.empty();
    v.swap(c);
    for(auto it:v){
        cout<<it<<" ";
    }
    v.clear();
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}