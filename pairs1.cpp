#include <iostream>
#include <utility>
#include <vector>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first!=p2.first){
        return p1.first<p2.first;
    }
    return p1.second>p2.second;

}
int main()
{
    // pair<int, int> p;

    // p = make_pair(10, 20);
    // cout << p.first << " " << p.second << " ";

    // pair<string, int> pa;

    // pa.first = "Vedant";
    // pa.second = 103;

    // cout << pa.first << " " << pa.second << " ";

    // pair<string, pair<int, float>> p;

    // p.first = "Vedant";
    // p.second.first = 103;
    // p.second.second = 9.52;

    // cout << p.first << " " << p.second.first << " " << p.second.second << " ";

    // vector<int> a = {1, 3, 5, 6, 7, 9};

    // for (int x : a)
    // {
    //     cout << x << " ";
    // }

    vector<pair<int, int>> ans;

    ans.push_back(make_pair(32, 56));
    ans.push_back(make_pair(55, 664));
    ans.push_back(make_pair(346462, 333));
    ans.push_back(make_pair(55, 7877));

    // for(pair<int,int> x1: ans){
    //     cout<<x1.first<<" "<<x1.second<<endl;
    // }

    // for (auto x : ans)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // ascending order sort
    //  sort(ans.begin(), ans.end());
    //  for (auto x : ans)
    //  {
    //      cout << x.first << " " << x.second << endl;
    //  }

    // Descending order sort
    // sort(ans.begin(), ans.end(), greater<pair<int, int>>());
    // for (auto x : ans)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // sort(ans.begin(), ans.end(), cmp);
    // for (auto x : ans)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
}