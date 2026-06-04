#include <iostream>
#include <map>
using namespace std;

int main()
{
    unordered_multimap<string, int> m;

    // how to insert
    //  m["vedant"] = 103;
    //  m["John"] = 122;
    //  m["david"] = 344;

    m.insert({"Harsh", 234});

    // cout<<m["Harsh"]<<" ";

    // for(auto x : m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    auto it = m.find("Harsh");

    if (it != m.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}