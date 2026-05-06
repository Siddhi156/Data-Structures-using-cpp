#include <iostream>
using namespace std;

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
    int* queue = new int[n];

    int front = 0, rear = 0;

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    queue[rear++] = start;
    visited[start] = 1;

    cout << "BFS Traversal: ";

    while (front < rear) {
        int v = queue[front++];
        cout << v << " ";

        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    return 0;
}