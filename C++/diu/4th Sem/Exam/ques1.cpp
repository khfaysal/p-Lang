void exploreCityMap(int entryPoint, vector<vector<int>>& roadMap, int totalZones) {
    vector<bool> visitedZones(totalZones + 1, false);
    queue<int> navigationQueue;

    navigationQueue.push(entryPoint);
    visitedZones[entryPoint] = true;

    cout << "Traversal Sequence (Level-wise): ";
    while (!navigationQueue.empty()) {
        int currentZone = navigationQueue.front();
        navigationQueue.pop();
        cout << currentZone << " ";

        for (int adjacent : roadMap[currentZone]) {
            if (!visitedZones[adjacent]) {
                visitedZones[adjacent] = true;
                navigationQueue.push(adjacent);
            }
        }
    }
    cout << endl;
}