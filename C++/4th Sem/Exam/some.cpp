#include <iostream>
using namespace std;

int main() {
    // 1. Locations and Roads
    int N, R;
    cin >> N >> R;
    int graph[100][100] = {0};

    for (int i = 0; i < R; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    // 2. Starting Location
    int S;
    cin >> S;

    // 3. Kits and Capacity
    int K;
    cin >> K;
    int kitWeights[100], kitValues[100];
    for (int i = 0; i < K; ++i) {
        cin >> kitWeights[i] >> kitValues[i];
    }

    int W;
    cin >> W;

    // Just printing to confirm
    cout << "Graph input done. Start from: " << S << "\n";
    cout << "Kits:\n";
    for (int i = 0; i < K; ++i)
        cout << "  Weight: " << kitWeights[i] << ", Value: " << kitValues[i] << endl;
    cout << "Capacity: " << W << endl;

    return 0;
}
