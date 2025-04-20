#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Task 4 HERE:

struct MedKit {
    int weightGrams;
    int importanceValue;
};

// Task 1
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

// Task 2
void sortKitsByWeight(vector<MedKit>& supplies) {
    int kitCount = supplies.size();
    for (int i = 0; i < kitCount - 1; i++) {
        for (int j = 0; j < kitCount - i - 1; j++) {
            if (supplies[j].weightGrams > supplies[j + 1].weightGrams) {
                swap(supplies[j], supplies[j + 1]);
            }
        }
    }

    cout << "Sorted Kit Weights: ";
    for (const auto& kit : supplies) {
        cout << kit.weightGrams << " ";
    }
    cout << endl;
}

// Task 3
bool searchForCriticalValue(const vector<MedKit>& sortedKits, int targetVal) {
    int low = 0, high = sortedKits.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sortedKits[mid].importanceValue == targetVal) {
            return true;
        } else if (sortedKits[mid].importanceValue < targetVal) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

// Task 5
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

    // Task 1
    exploreCityMap(launchLocation, roadNetwork, totalLocations);

    // Task 2:
    sortKitsByWeight(emergencySupplies);

    // Task 3:
    vector<MedKit> kitsSortedByValue = emergencySupplies;

   //bubble sort
    for (int i = 0; i < numberOfKits - 1; i++) {
        for (int j = 0; j < numberOfKits - i - 1; j++) {
            if (kitsSortedByValue[j].importanceValue > kitsSortedByValue[j + 1].importanceValue) {
                swap(kitsSortedByValue[j], kitsSortedByValue[j + 1]);
            }
        }
    }

    if (searchForCriticalValue(kitsSortedByValue, 50)) {
        cout << "Alert: Critical value 50 kit is AVAILABLE." << endl;
    } else {
        cout << "Notice: Critical value 50 kit is NOT found." << endl;
    }

    // Task 5:
    int bestValue = optimizePayloadValue(emergencySupplies, botMaxCapacity);
    cout << "maximum pos value: " << bestValue << endl;

    return 0;
}