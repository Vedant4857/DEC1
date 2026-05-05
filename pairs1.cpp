#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // pair<int, int> p;

    // p = make_pair(10, 20);
    // cout << p.first << " " << p.second << " ";

    pair<string, int> pa;

    pa.first = "Vedant";
    pa.second = 103;

    cout << pa.first << " " << pa.second << " ";
}