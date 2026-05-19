#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Specify the number of vertexes and edges
    int vertex, edges;
    cout << "Enter vertex and edges:";
    cin >> vertex >> edges;

    // create adjaceny list

    vector<vector<pair<int, int>>> adjList(vertex);
    // enter the edges
    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    /// print
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " edges-> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j].first << "-" << adjList[i][j].second << " ";
        }
        cout << endl;
    }
    return 0;
}