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