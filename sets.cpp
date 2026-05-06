#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // set<int>s;
    // s.insert(10);
    // s.insert(45);
    // s.insert(67);
    // s.insert(45);

    // for(auto x: s){
    //     cout<<x<<" ";
    // }

    // set<pair<int,int>>s;
    // s.insert({10,45});
    // s.insert({34,67});
    // s.insert({35,6342});
    // s.insert({33,54});

    // for(auto x: s){
    //     cout<<x.first<<" "<<x.second<<" "<<endl;
    // }

    // cout<<s.size();
    // s.erase({10,45});

    // sorted unique
    //  set<int>s;
    //  s.insert(10);
    //  s.insert(45);
    //  s.insert(67);
    //  s.insert(45);

    // // auto it = s.find(10);
    // // cout<<*it;

    // if(s.find(45)!=s.end()){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"not found";
    // }

    // unsorted unique
    //  unordered_set<int>s;
    //  s.insert(890);
    //  s.insert(45);
    //  s.insert(67);
    //  s.insert(69);

    // for(auto x : s){
    //     cout<<x<<" ";
    // }

    // Sorted and unique
    // multiset<int>s;
    // s.insert(890);
    // s.insert(45);
    // s.insert(67);
    // s.insert(45);
    // for(auto x : s){
    //     cout<<x<<" ";
    // }

    // Not sorted but duplicates allowed

    unordered_multiset<int> s;
    s.insert(890);
    s.insert(45);
    s.insert(67);
    s.insert(45);
    for (auto x : s)
    {
        cout << x << " ";
    }
}