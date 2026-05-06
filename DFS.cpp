#include <iostream>
using namespace std;

void dfs(int v, int n, int** graph, int visited[]) {
    cout << v << " ";
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i, n, graph, visited);
        }
    }
}

int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    int** graph = new int*[n];
    for (int i = 0; i < n; i++)
        graph[i] = new int[n];

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    int* visited = new int[n]{0};

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    dfs(start, n, graph, visited);

    return 0;
}