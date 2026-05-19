#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Specify the number of vertexes and edges
    int vertex, edges;
    cout << "Enter vertex and edges:";
    cin >> vertex >> edges;

    vector<vector<bool>> adjmat(vertex, vector<bool>(vertex, 0));

    // 5 vertex
    // 5 edges   =.   5*5 matrix

    cout << "Enter the edges:\n";

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }

    cout << "Adency Matrix:" << endl;
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}