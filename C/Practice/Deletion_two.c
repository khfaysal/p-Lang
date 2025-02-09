#include <stdio.h>

int main() {
    int n, num1, num2;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter two elements to delete: ");
    scanf("%d %d", &num1, &num2);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == num1) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == num2) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }
    
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}