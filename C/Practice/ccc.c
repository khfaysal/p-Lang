include <stdio.h>

int countVowels(char inputStr[]) {
    int vowelCount = 0;

    for (int i = 0; inputStr[i] != '\0'; i++) {
        char currentChar = inputStr[i];

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' ||
            currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U') {
            vowelCount++;
        }
    }

    return vowelCount;
}

void reverseString(char inputStr[]) {
    int leftIndex = 0, rightIndex = 0;

    while (inputStr[rightIndex] != '\0') {
        rightIndex++;
    }
    rightIndex--;

    while (leftIndex < rightIndex) {
        char temp = inputStr[leftIndex];
        inputStr[leftIndex] = inputStr[rightIndex];
        inputStr[rightIndex] = temp;
        leftIndex++;
        rightIndex--;
    }
}

int main() {
    char userInput[100];

    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);

    int totalVowels = countVowels(userInput);
    printf("Number of vowels: %d\n", totalVowels);

    reverseString(userInput);
    printf("Reversed string: %s", userInput);

    return 0;
}