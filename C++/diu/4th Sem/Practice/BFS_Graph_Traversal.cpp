#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100; // Maximum number of nodes (adjust as needed)
int adj[MAX][MAX];   // Adjacency matrix
bool visited[MAX];   // Visited array

void bfs(int start, int n) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    cout << "BFS traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Check all possible nodes
        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    // Initialize adjacency matrix and visited array
    for (int i = 0; i < n; i++) {
        visited[i] = false;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Remove this line for directed graphs
    }

    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;

    bfs(start, n);

    return 0;
}
