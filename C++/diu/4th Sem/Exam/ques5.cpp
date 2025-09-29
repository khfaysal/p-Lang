int optimizePayloadValue(vector<MedKit>& inventory, int maxCarryWeight) {
    vector<int> valueAtWeight(maxCarryWeight + 1, 0);

    for (const MedKit& kit : inventory) {
        for (int w = maxCarryWeight; w >= kit.weightGrams; w--) {
            valueAtWeight[w] = max(valueAtWeight[w], valueAtWeight[w - kit.weightGrams] + kit.importanceValue);
        }
    }

    return valueAtWeight[maxCarryWeight];
}

int main() {
    int totalLocations, totalPaths;
    cin >> totalLocations >> totalPaths;

    vector<vector<int>> roadNetwork(totalLocations + 1);
    for (int i = 0; i < totalPaths; i++) {
        int pointA, pointB;
        cin >> pointA >> pointB;
        roadNetwork[pointA].push_back(pointB);
        roadNetwork[pointB].push_back(pointA); // Undirected link
    }

    int launchLocation;
    cin >> launchLocation;

    int numberOfKits;
    cin >> numberOfKits;

    // Task 4
    vector<MedKit> emergencySupplies(numberOfKits);
    for (int i = 0; i < numberOfKits; i++) {
        cin >> emergencySupplies[i].weightGrams >> emergencySupplies[i].importanceValue;
    }

    int botMaxCapacity;
    cin >> botMaxCapacity;