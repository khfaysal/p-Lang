#include <stdio.h>

int main() {
    int arraySize, value1, value2, value3;
    
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    
    int elements[arraySize];
    
    printf("Enter %d elements:\n", arraySize);
    for (int index = 0; index < arraySize; index++) {
        scanf("%d", &elements[index]);
    }
    
    printf("Enter three elements to delete: ");
    scanf("%d %d %d", &value1, &value2, &value3);
    
    if (arraySize < 3) {
        printf("Underflow! Not enough elements to delete.\n");
        return 0;
    }
    
    for (int index = 0; index < arraySize; index++) {
        if (elements[index] == value1) {
            for (int shift = index; shift < arraySize - 1; shift++) {
                elements[shift] = elements[shift + 1];
            }
            arraySize--;
            index--;
        }
    }
    
    for (int index = 0; index < arraySize; index++) {
        if (elements[index] == value2) {
            for (int shift = index; shift < arraySize - 1; shift++) {
                elements[shift] = elements[shift + 1];
            }
            arraySize--;
            index--;
        }
    }

    for (int index = 0; index < arraySize; index++) {
        if (elements[index] == value3) {
            for (int shift = index; shift < arraySize - 1; shift++) {
                elements[shift] = elements[shift + 1];
            }
            arraySize--;
            index--;
        }
    }
    
    printf("Array after deletion:\n");
    for (int index = 0; index < arraySize; index++) {
        printf("%d ", elements[index]);
    }
    printf("\n");
    
    return 0;
}