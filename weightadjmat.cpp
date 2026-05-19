#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Specify the number of vertexes and edges
    int vertex, edges;
    cout << "Enter vertex and edges:";
    cin >> vertex >> edges;

    vector<vector<int>> adjmat(vertex, vector<int>(vertex, 0));

    // 5 vertex
    // 5 edges   =.   5*5 matrix

    cout << "Enter the edges:\n";

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjmat[u][v] = w;
        adjmat[v][u] = w;
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