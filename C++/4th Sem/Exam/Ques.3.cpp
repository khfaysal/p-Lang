bool binarySearch(vector<int>& values, int target) {
    sort(values.begin(), values.end()); 
    int left = 0, right = values.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (values[mid] == target) return true;
        else if (values[mid] < target) left = mid + 1;

else right = mid -1;
} 
return false;
}