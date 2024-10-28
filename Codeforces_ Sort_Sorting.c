#include <stdio.h>

void bubbleSort(char str[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N); 
    char S[N + 1]; 

    scanf("%s", S); 

    bubbleSort(S, N);
    printf("%s\n", S);

    return 0;
}
