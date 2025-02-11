#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1; //[[[01234] 5/2 =2; 012 holo n1 er size. where, mid= 2; left = 0; now, mid -left==(2-0)=2| but size 012= 3, thats why left-mid+1]]
    int n2 = right - mid;    //

    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j]; //[mid porjonto n1 e geche. so mid +1 theke n2 er size suru]

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "enter the element of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "original : " << endl;
    printarray(arr, size);

    mergesort(arr, 0, size - 1);
    cout << endl;
    cout << "sorted :" << endl;
    printarray(arr, size);

    return 0;
}