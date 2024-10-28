#include <stdio.h>

void bubbleSort(char str[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap str[j] and str[j + 1]
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N); // Read the size of the string
    char S[N + 1]; // Declare an array to hold the string (N + 1 for null terminator)

    scanf("%s", S); // Read the string

    bubbleSort(S, N); // Sort the string

    printf("%s\n", S); // Print the sorted string

    return 0;
}
