#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> primee(n + 1, true);
    if (n >= 0)
        primee[0] = 0;
    if (n >= 1)
        primee[1] = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (primee[i])
        {

            for (int j = i * i; j <= n; j += i)
            {
                primee[j] = false;
            }
        }
    }
    return primee;
}
int main()
{
    int n;
    cout << "Enter the number upto prime:";
    cin >> n;
    vector<bool> primee = sieve(n);

    for (int i = 2; i <= n; i++)
    {
        if (primee[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}